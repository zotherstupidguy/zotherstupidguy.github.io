require 'mechanize'
require 'zip/zip'

agent = Mechanize.new
agent.pluggable_parser.default = Mechanize::Download
#agent.get('https://www.go-hero.net/jam/17/solutions/0/1/C').save('mimo31_0_1.zip')

# hackspree allows you to study a specific user accross all the years and rounds via gitlapses.
username = 'stubbscroll'
username = 'FatalEagle'
#agent.get("http://code.google.com/codejam/contest/scoreboard/do?cmd=GetSourceCode&contest=3264486&problem=5736519012712448&io_set_id=0&username=#{username}").save("#{username}.zip")

def unzip_file (file, destination)
  Zip::ZipFile.open(file) do |zip_file|
    zip_file.each do |f|
      f_path=File.join(destination, f.name)
      FileUtils.mkdir_p(File.dirname(f_path))
      (zip_file.extract(f, f_path) unless File.exist?(f_path)) 
    end
  end
end


# Compact solutions in C
# https://www.go-hero.net/jam/17/solutions/0/1/compact/C
count=0
page = agent.get('https://www.go-hero.net/jam/17/solutions/0/1/C')

page.links.each do |link|
  # if link.uri.to_s.include?("code.google") then
  #   puts link.uri
  # end
  if link.uri.to_s.include?("name/") then
    puts username = link.text
    p agent.get("http://code.google.com/codejam/contest/scoreboard/do?cmd=GetSourceCode&contest=3264486&problem=5736519012712448&io_set_id=1&username=#{username}").save("contestants/#{username}.zip")
    #sleep 2
    if !(File.empty? "contestants/#{username}.zip") then
      p "zip file not empty!!"

      unzip_file("contestants/#{username}.zip", "contestants/#{username}")

      Dir["contestants/#{username}/*"].each do |file_name|
        file = File.open("#{file_name}", "rb")
        book=""
        book += "\n\n"
        book += "\n#+BEGIN_SRC C\n"
        book += "// Copyright #{username} Codejam 2017 QR Problem A\n"
        book += file.read
        book += "\n#+END_SRC\n"
        IO.write("book.org", book, mode: 'a')
        p book
        next if File.directory? file_name 
      end
    end
    #File.write('book.org', book)

    #TODO cat contents of file inside folder to a string
    #TODO construct an org-mode codeblock and add the username and then the code
    #TODO then generate pdf out of org-mode and add it on the website for download page with googleads 
    
    #TODO delete all .zip files from the dir
    #elisp to loop over all the unzipped dirs, and include the sourcecode into an org-mode C codeblock with additonal comment of the creator name copyright. 
    #elisp generate a pdf from the org document.
  end
  count+=1
end
p count


#//*[@id="solpage0"]/table/tbody/tr/td[1]/a[2]  //*[@id="solpage0"]/table/tbody/tr/td[1]/a[4] //*[@id="solpage0"]/table/tbody/tr/td[1]/a[6]


#puts page.title
#puts page.methods
#p page.xpath('//*[@id="solpage0"]/table/tbody/tr/td[1]/a[1]').inspect

#links = html_body.css('.L1').xpath("//table/tbody/tr[position()>1]/td[2]/a[1]")
#p  node = page.at_xpath('//div[@class='caption titled', contains(., 'Problem Tags')]')
#link = page.link_with(:dom_class => "")
#page = link.click
#puts page.uri

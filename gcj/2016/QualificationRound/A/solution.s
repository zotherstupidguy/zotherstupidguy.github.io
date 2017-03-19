	.file	"solution.c"
	.section	.rodata
.LC0:
	.string	"lastdigit %ld\n"
.LC1:
	.string	"print n mod 10: %ld\n"
	.text
	.globl	cansleep
	.type	cansleep, @function
cansleep:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -56(%rbp)
	movb	$0, -1(%rbp)
	movb	$0, -2(%rbp)
	movq	$-1, -32(%rbp)
	leaq	-32(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.L2
.L6:
	movq	-56(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	testq	%rdx, %rdx
	jne	.L3
	movb	$1, -1(%rbp)
	leaq	-32(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L5
	movq	$0, -16(%rbp)
	jmp	.L5
.L3:
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-56(%rbp), %rsi
	movabsq	$7378697629483820647, %rdx
	movq	%rsi, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rsi, %rax
	sarq	$63, %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	addq	%rax, %rax
	subq	%rax, %rsi
	movq	%rsi, %rcx
	movq	-56(%rbp), %rsi
	movabsq	$7378697629483820647, %rdx
	movq	%rsi, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rsi, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rsi
	movq	%rsi, %rdx
	movq	%rdx, digits.2948(,%rcx,8)
	leaq	-32(%rbp), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L5
	movq	-56(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movq	%rdx, -40(%rbp)
	leaq	-40(%rbp), %rax
	movq	%rax, -16(%rbp)
.L5:
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movq	-56(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	%rax, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	movq	%rdx, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movq	-56(%rbp), %rcx
	movabsq	$7378697629483820647, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$2, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -56(%rbp)
.L2:
	cmpq	$0, -56(%rbp)
	jne	.L6
	movl	$1, -20(%rbp)
	jmp	.L7
.L10:
	movl	-20(%rbp), %eax
	cltq
	movq	digits.2948(,%rax,8), %rax
	testq	%rax, %rax
	je	.L14
	movb	$1, -2(%rbp)
	addl	$1, -20(%rbp)
.L7:
	cmpl	$9, -20(%rbp)
	jle	.L10
	jmp	.L9
.L14:
	nop
.L9:
	cmpb	$0, -1(%rbp)
	je	.L11
	cmpb	$0, -2(%rbp)
	je	.L11
	movl	$1, %eax
	jmp	.L13
.L11:
	movl	$0, %eax
.L13:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	cansleep, .-cansleep
	.section	.rodata
.LC2:
	.string	"sleep"
	.align 8
.LC3:
	.string	"last number she counted is....."
.LC4:
	.string	"INSOMNIA"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movabsq	$9876123450, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	cansleep
	testl	%eax, %eax
	je	.L16
	movl	$.LC2, %edi
	call	puts
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	jmp	.L17
.L16:
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
.L17:
	movl	$1, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.local	digits.2948
	.comm	digits.2948,80,32
	.ident	"GCC: (GNU) 6.3.1 20170306"
	.section	.note.GNU-stack,"",@progbits

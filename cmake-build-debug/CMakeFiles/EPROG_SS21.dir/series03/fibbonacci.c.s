	.file	"fibbonacci.c"
	.text
.Ltext0:
	.section	.rodata
	.align 8
.LC0:
	.string	"Let's calculate the fibbonaci numbers "
.LC1:
	.string	"Please insert n:"
.LC2:
	.string	"%d"
.LC3:
	.string	"Cannot be calculated"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.file 1 "/home/julia/CLionProjects/EPROG_SS21/series03/fibbonacci.c"
	.loc 1 15 34
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	.loc 1 15 34
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	.loc 1 16 9
	movl	$0, -12(%rbp)
	.loc 1 17 5
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	.loc 1 18 5
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	.loc 1 19 5
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	.loc 1 20 11
	movl	-12(%rbp), %eax
	.loc 1 20 8
	testl	%eax, %eax
	jg	.L2
	.loc 1 21 9
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	.loc 1 22 16
	movl	$-1, %eax
	jmp	.L4
.L2:
	.loc 1 30 9
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	fibbonacciNonRecursive
	.loc 1 33 12
	movl	$0, %eax
.L4:
	.loc 1 34 1 discriminator 1
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	.loc 1 34 1 is_stmt 0
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	fibbonacci
	.type	fibbonacci, @function
fibbonacci:
.LFB1:
	.loc 1 37 23 is_stmt 1
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	%edi, -20(%rbp)
	.loc 1 38 7
	cmpl	$0, -20(%rbp)
	jne	.L7
	.loc 1 39 16
	movl	$0, %eax
	jmp	.L8
.L7:
	.loc 1 40 14
	cmpl	$1, -20(%rbp)
	jne	.L9
	.loc 1 41 16
	movl	$1, %eax
	jmp	.L8
.L9:
	.loc 1 43 17
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edi
	call	fibbonacci
	movl	%eax, %ebx
	.loc 1 43 35
	movl	-20(%rbp), %eax
	subl	$2, %eax
	movl	%eax, %edi
	call	fibbonacci
	.loc 1 43 33
	addl	%ebx, %eax
.L8:
	.loc 1 45 1
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	fibbonacci, .-fibbonacci
	.globl	fibbonacciNonRecursive
	.type	fibbonacciNonRecursive, @function
fibbonacciNonRecursive:
.LFB2:
	.loc 1 48 35
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	%edi, -36(%rbp)
	.loc 1 49 9
	movl	$0, -28(%rbp)
	.loc 1 50 12
	movsd	.LC4(%rip), %xmm0
	movsd	%xmm0, -24(%rbp)
	.loc 1 50 32
	movsd	.LC5(%rip), %xmm0
	movsd	%xmm0, -16(%rbp)
	.loc 1 50 43
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -8(%rbp)
	.loc 1 52 7
	cmpl	$0, -36(%rbp)
	je	.L11
	.loc 1 52 15 discriminator 1
	cmpl	$1, -36(%rbp)
	jne	.L12
.L11:
	.loc 1 53 14
	movl	$1, -28(%rbp)
	jmp	.L13
.L12:
	.loc 1 55 19
	movsd	-24(%rbp), %xmm1
	movsd	.LC5(%rip), %xmm0
	addsd	%xmm1, %xmm0
	.loc 1 55 15
	movsd	.LC7(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -16(%rbp)
	.loc 1 56 19
	movsd	.LC5(%rip), %xmm0
	subsd	-24(%rbp), %xmm0
	.loc 1 56 15
	movsd	.LC7(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -8(%rbp)
	.loc 1 57 17
	cvtsi2sdl	-36(%rbp), %xmm0
	movq	-16(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow@PLT
	movq	%xmm0, %rax
	movq	%rax, -16(%rbp)
	.loc 1 58 17
	cvtsi2sdl	-36(%rbp), %xmm0
	movq	-8(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow@PLT
	movq	%xmm0, %rax
	movq	%rax, -8(%rbp)
	.loc 1 59 29
	movsd	-16(%rbp), %xmm0
	subsd	-8(%rbp), %xmm0
	.loc 1 59 36
	divsd	-24(%rbp), %xmm0
	.loc 1 59 14
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -28(%rbp)
.L13:
	.loc 1 61 12
	movl	-28(%rbp), %eax
	.loc 1 62 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	fibbonacciNonRecursive, .-fibbonacciNonRecursive
	.section	.rodata
	.align 8
.LC4:
	.long	2610427048
	.long	1073865591
	.align 8
.LC5:
	.long	0
	.long	1072693248
	.align 8
.LC7:
	.long	0
	.long	1073741824
	.text
.Letext0:
	.file 2 "/usr/include/x86_64-linux-gnu/bits/types.h"
	.file 3 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
	.file 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
	.file 5 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
	.file 6 "/usr/include/math.h"
	.file 7 "/usr/include/stdio.h"
	.file 8 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x3ea
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF61
	.byte	0xc
	.long	.LASF62
	.long	.LASF63
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF0
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF1
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF2
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF3
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x4
	.long	.LASF7
	.byte	0x2
	.byte	0x98
	.byte	0x19
	.long	0x5e
	.uleb128 0x4
	.long	.LASF8
	.byte	0x2
	.byte	0x99
	.byte	0x1b
	.long	0x5e
	.uleb128 0x5
	.byte	0x8
	.uleb128 0x6
	.byte	0x8
	.long	0x85
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF9
	.uleb128 0x7
	.long	0x85
	.uleb128 0x2
	.byte	0x4
	.byte	0x4
	.long	.LASF10
	.uleb128 0x2
	.byte	0x8
	.byte	0x4
	.long	.LASF11
	.uleb128 0x8
	.long	.LASF46
	.byte	0x6
	.value	0x305
	.byte	0xc
	.long	0x57
	.uleb128 0x4
	.long	.LASF12
	.byte	0x3
	.byte	0xd1
	.byte	0x17
	.long	0x42
	.uleb128 0x9
	.long	.LASF64
	.byte	0xd8
	.byte	0x4
	.byte	0x31
	.byte	0x8
	.long	0x23f
	.uleb128 0xa
	.long	.LASF13
	.byte	0x4
	.byte	0x33
	.byte	0x7
	.long	0x57
	.byte	0
	.uleb128 0xa
	.long	.LASF14
	.byte	0x4
	.byte	0x36
	.byte	0x9
	.long	0x7f
	.byte	0x8
	.uleb128 0xa
	.long	.LASF15
	.byte	0x4
	.byte	0x37
	.byte	0x9
	.long	0x7f
	.byte	0x10
	.uleb128 0xa
	.long	.LASF16
	.byte	0x4
	.byte	0x38
	.byte	0x9
	.long	0x7f
	.byte	0x18
	.uleb128 0xa
	.long	.LASF17
	.byte	0x4
	.byte	0x39
	.byte	0x9
	.long	0x7f
	.byte	0x20
	.uleb128 0xa
	.long	.LASF18
	.byte	0x4
	.byte	0x3a
	.byte	0x9
	.long	0x7f
	.byte	0x28
	.uleb128 0xa
	.long	.LASF19
	.byte	0x4
	.byte	0x3b
	.byte	0x9
	.long	0x7f
	.byte	0x30
	.uleb128 0xa
	.long	.LASF20
	.byte	0x4
	.byte	0x3c
	.byte	0x9
	.long	0x7f
	.byte	0x38
	.uleb128 0xa
	.long	.LASF21
	.byte	0x4
	.byte	0x3d
	.byte	0x9
	.long	0x7f
	.byte	0x40
	.uleb128 0xa
	.long	.LASF22
	.byte	0x4
	.byte	0x40
	.byte	0x9
	.long	0x7f
	.byte	0x48
	.uleb128 0xa
	.long	.LASF23
	.byte	0x4
	.byte	0x41
	.byte	0x9
	.long	0x7f
	.byte	0x50
	.uleb128 0xa
	.long	.LASF24
	.byte	0x4
	.byte	0x42
	.byte	0x9
	.long	0x7f
	.byte	0x58
	.uleb128 0xa
	.long	.LASF25
	.byte	0x4
	.byte	0x44
	.byte	0x16
	.long	0x258
	.byte	0x60
	.uleb128 0xa
	.long	.LASF26
	.byte	0x4
	.byte	0x46
	.byte	0x14
	.long	0x25e
	.byte	0x68
	.uleb128 0xa
	.long	.LASF27
	.byte	0x4
	.byte	0x48
	.byte	0x7
	.long	0x57
	.byte	0x70
	.uleb128 0xa
	.long	.LASF28
	.byte	0x4
	.byte	0x49
	.byte	0x7
	.long	0x57
	.byte	0x74
	.uleb128 0xa
	.long	.LASF29
	.byte	0x4
	.byte	0x4a
	.byte	0xb
	.long	0x65
	.byte	0x78
	.uleb128 0xa
	.long	.LASF30
	.byte	0x4
	.byte	0x4d
	.byte	0x12
	.long	0x34
	.byte	0x80
	.uleb128 0xa
	.long	.LASF31
	.byte	0x4
	.byte	0x4e
	.byte	0xf
	.long	0x49
	.byte	0x82
	.uleb128 0xa
	.long	.LASF32
	.byte	0x4
	.byte	0x4f
	.byte	0x8
	.long	0x264
	.byte	0x83
	.uleb128 0xa
	.long	.LASF33
	.byte	0x4
	.byte	0x51
	.byte	0xf
	.long	0x274
	.byte	0x88
	.uleb128 0xa
	.long	.LASF34
	.byte	0x4
	.byte	0x59
	.byte	0xd
	.long	0x71
	.byte	0x90
	.uleb128 0xa
	.long	.LASF35
	.byte	0x4
	.byte	0x5b
	.byte	0x17
	.long	0x27f
	.byte	0x98
	.uleb128 0xa
	.long	.LASF36
	.byte	0x4
	.byte	0x5c
	.byte	0x19
	.long	0x28a
	.byte	0xa0
	.uleb128 0xa
	.long	.LASF37
	.byte	0x4
	.byte	0x5d
	.byte	0x14
	.long	0x25e
	.byte	0xa8
	.uleb128 0xa
	.long	.LASF38
	.byte	0x4
	.byte	0x5e
	.byte	0x9
	.long	0x7d
	.byte	0xb0
	.uleb128 0xa
	.long	.LASF39
	.byte	0x4
	.byte	0x5f
	.byte	0xa
	.long	0xac
	.byte	0xb8
	.uleb128 0xa
	.long	.LASF40
	.byte	0x4
	.byte	0x60
	.byte	0x7
	.long	0x57
	.byte	0xc0
	.uleb128 0xa
	.long	.LASF41
	.byte	0x4
	.byte	0x62
	.byte	0x8
	.long	0x290
	.byte	0xc4
	.byte	0
	.uleb128 0x4
	.long	.LASF42
	.byte	0x5
	.byte	0x7
	.byte	0x19
	.long	0xb8
	.uleb128 0xb
	.long	.LASF65
	.byte	0x4
	.byte	0x2b
	.byte	0xe
	.uleb128 0xc
	.long	.LASF43
	.uleb128 0x6
	.byte	0x8
	.long	0x253
	.uleb128 0x6
	.byte	0x8
	.long	0xb8
	.uleb128 0xd
	.long	0x85
	.long	0x274
	.uleb128 0xe
	.long	0x42
	.byte	0
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.long	0x24b
	.uleb128 0xc
	.long	.LASF44
	.uleb128 0x6
	.byte	0x8
	.long	0x27a
	.uleb128 0xc
	.long	.LASF45
	.uleb128 0x6
	.byte	0x8
	.long	0x285
	.uleb128 0xd
	.long	0x85
	.long	0x2a0
	.uleb128 0xe
	.long	0x42
	.byte	0x13
	.byte	0
	.uleb128 0xf
	.long	.LASF47
	.byte	0x7
	.byte	0x89
	.byte	0xe
	.long	0x2ac
	.uleb128 0x6
	.byte	0x8
	.long	0x23f
	.uleb128 0xf
	.long	.LASF48
	.byte	0x7
	.byte	0x8a
	.byte	0xe
	.long	0x2ac
	.uleb128 0xf
	.long	.LASF49
	.byte	0x7
	.byte	0x8b
	.byte	0xe
	.long	0x2ac
	.uleb128 0xf
	.long	.LASF50
	.byte	0x8
	.byte	0x1a
	.byte	0xc
	.long	0x57
	.uleb128 0xd
	.long	0x2ec
	.long	0x2e1
	.uleb128 0x10
	.byte	0
	.uleb128 0x7
	.long	0x2d6
	.uleb128 0x6
	.byte	0x8
	.long	0x8c
	.uleb128 0x7
	.long	0x2e6
	.uleb128 0xf
	.long	.LASF51
	.byte	0x8
	.byte	0x1b
	.byte	0x1a
	.long	0x2e1
	.uleb128 0x11
	.long	.LASF56
	.byte	0x1
	.byte	0x30
	.byte	0x5
	.long	0x57
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.long	0x369
	.uleb128 0x12
	.string	"n"
	.byte	0x1
	.byte	0x30
	.byte	0x20
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -52
	.uleb128 0x13
	.long	.LASF52
	.byte	0x1
	.byte	0x31
	.byte	0x9
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x13
	.long	.LASF53
	.byte	0x1
	.byte	0x32
	.byte	0xc
	.long	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x13
	.long	.LASF54
	.byte	0x1
	.byte	0x32
	.byte	0x20
	.long	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -32
	.uleb128 0x13
	.long	.LASF55
	.byte	0x1
	.byte	0x32
	.byte	0x2b
	.long	0x98
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x11
	.long	.LASF57
	.byte	0x1
	.byte	0x25
	.byte	0x5
	.long	0x57
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.long	0x399
	.uleb128 0x12
	.string	"n"
	.byte	0x1
	.byte	0x25
	.byte	0x14
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.byte	0
	.uleb128 0x11
	.long	.LASF58
	.byte	0x1
	.byte	0xf
	.byte	0x5
	.long	0x57
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.long	0x3e7
	.uleb128 0x14
	.long	.LASF59
	.byte	0x1
	.byte	0xf
	.byte	0xe
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -36
	.uleb128 0x14
	.long	.LASF60
	.byte	0x1
	.byte	0xf
	.byte	0x1a
	.long	0x3e7
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x15
	.string	"a"
	.byte	0x1
	.byte	0x10
	.byte	0x9
	.long	0x57
	.uleb128 0x2
	.byte	0x91
	.sleb128 -28
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.long	0x7f
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF21:
	.string	"_IO_buf_end"
.LASF29:
	.string	"_old_offset"
.LASF50:
	.string	"sys_nerr"
.LASF24:
	.string	"_IO_save_end"
.LASF19:
	.string	"_IO_write_end"
.LASF5:
	.string	"short int"
.LASF12:
	.string	"size_t"
.LASF34:
	.string	"_offset"
.LASF18:
	.string	"_IO_write_ptr"
.LASF13:
	.string	"_flags"
.LASF57:
	.string	"fibbonacci"
.LASF20:
	.string	"_IO_buf_base"
.LASF38:
	.string	"_freeres_buf"
.LASF25:
	.string	"_markers"
.LASF15:
	.string	"_IO_read_end"
.LASF52:
	.string	"help"
.LASF46:
	.string	"signgam"
.LASF63:
	.string	"/home/julia/CLionProjects/EPROG_SS21/cmake-build-debug"
.LASF54:
	.string	"help3"
.LASF55:
	.string	"help4"
.LASF10:
	.string	"float"
.LASF49:
	.string	"stderr"
.LASF33:
	.string	"_lock"
.LASF62:
	.string	"/home/julia/CLionProjects/EPROG_SS21/series03/fibbonacci.c"
.LASF6:
	.string	"long int"
.LASF30:
	.string	"_cur_column"
.LASF60:
	.string	"argv"
.LASF61:
	.string	"GNU C99 9.3.0 -mtune=generic -march=x86-64 -g -std=gnu99 -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection"
.LASF64:
	.string	"_IO_FILE"
.LASF0:
	.string	"unsigned char"
.LASF59:
	.string	"argc"
.LASF4:
	.string	"signed char"
.LASF35:
	.string	"_codecvt"
.LASF56:
	.string	"fibbonacciNonRecursive"
.LASF2:
	.string	"unsigned int"
.LASF43:
	.string	"_IO_marker"
.LASF32:
	.string	"_shortbuf"
.LASF17:
	.string	"_IO_write_base"
.LASF41:
	.string	"_unused2"
.LASF14:
	.string	"_IO_read_ptr"
.LASF1:
	.string	"short unsigned int"
.LASF9:
	.string	"char"
.LASF58:
	.string	"main"
.LASF36:
	.string	"_wide_data"
.LASF37:
	.string	"_freeres_list"
.LASF39:
	.string	"__pad5"
.LASF44:
	.string	"_IO_codecvt"
.LASF3:
	.string	"long unsigned int"
.LASF11:
	.string	"double"
.LASF8:
	.string	"__off64_t"
.LASF7:
	.string	"__off_t"
.LASF26:
	.string	"_chain"
.LASF45:
	.string	"_IO_wide_data"
.LASF23:
	.string	"_IO_backup_base"
.LASF47:
	.string	"stdin"
.LASF28:
	.string	"_flags2"
.LASF40:
	.string	"_mode"
.LASF16:
	.string	"_IO_read_base"
.LASF31:
	.string	"_vtable_offset"
.LASF53:
	.string	"rootFive"
.LASF22:
	.string	"_IO_save_base"
.LASF51:
	.string	"sys_errlist"
.LASF27:
	.string	"_fileno"
.LASF42:
	.string	"FILE"
.LASF48:
	.string	"stdout"
.LASF65:
	.string	"_IO_lock_t"
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

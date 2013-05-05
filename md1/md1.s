	.text
	.align	2
	.global	asum
	.type	asum, %function
asum:
    mov r1, #0
    b progress

progress:
    adds r1, r0
    bvs err
    sub r0, #1
    cmp r0, #0
    beq result
    bge progress

err:
    mov r0, #-1
    bx lr

result:
    mov r0, r1
    bx lr
    .size   asum, .-asum

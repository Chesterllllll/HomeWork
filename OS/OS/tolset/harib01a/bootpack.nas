[FORMAT "WCOFF"]
[INSTRSET "i486p"]
[OPTIMIZE 1]
[OPTION 1]
[BITS 32]
[FILE "bootpack.c"]
[SECTION .text]
	GLOBAL	_wait
_wait:
	PUSH	EBP
	MOV	EBP,ESP
	MOV	EAX,DWORD [8+EBP]
	IMUL	EAX,EAX,1000
L2:
	DEC	EAX
	CMP	EAX,-1
	JNE	L2
	POP	EBP
	RET
	GLOBAL	_HariMain
_HariMain:
	PUSH	EBP
	MOV	EBP,ESP
	PUSH	EBX
L14:
	MOV	EDX,655360
L13:
	MOV	EAX,EDX
	SUB	EAX,EBX
	SAR	EAX,1
	AND	EAX,15
	MOV	BYTE [EDX],AL
	INC	EDX
	CMP	EDX,720895
	JBE	L13
	LEA	EAX,DWORD [1+EBX]
	PUSH	100000
	MOVZX	EBX,AX
	CALL	_wait
	POP	EAX
	JMP	L14

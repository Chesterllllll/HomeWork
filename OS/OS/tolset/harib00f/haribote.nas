; haribote-os
; TAB=4

;		ORG		0xc200			; ���̃v���O�������ǂ��ɓǂݍ��܂��̂�
;fin:
;		HLT
;		JMP		fin

; haribote-os
; TAB=4
ORG 0xc200 ; ?���������v�푕?�������I�Y?�n��?�H
MOV AL,0x6a ; VGA??�C320x200x8�ʍʐF
MOV AH,0x00
INT 0x10
fin:
HLT
JMP fin
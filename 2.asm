DATA    	SEGMENT
RESULT  	DW ?			;计算结果
DATA    	ENDS
CODE    	SEGMENT
	ASSUME CS:CODE,DS:DATA
START   	PROC NEAR
	MOV DX,0001H
	MOV BL,02H
A1:     	MOV AL,BL
	INC BL
	MUL BL
	ADD DX,AX		;结果存于DX中
	CMP AX,00C8H	;判断N(N+1)与200的大小
	JNA A1
	MOV AX,DATA		;保存计算结果
	MOV DS,AX
	MOV RESULT,DX
	MOV AH,4CH
	INT 21H			;程序终止
START   	ENDP
CODE    	ENDS
	END START


%{ //ERROR
#include<stdio.h>
int v=0, op=0, id=0, flag=0;
/*
	op: operator
	id: identifier/operand
	v: braces count
*/
%}

%%
[a-zA-Z]+[0-9a-zA-Z]*  {
			id++;
			printf("\n Identifier:");
			ECHO;
			}
[\+\-\*\/\=]		{
			op++;
			printf("\n Operator:");
			ECHO;
			}
"("			{v++;}
")"			{v--;}
.|\n			{;}
%%

main(){
	printf("Enter the expression:\n");
	yylex();
	if((op+1)==id && v==0 && flag==0)
		printf("\nExpression is valid.\n");
	else
		printf("\nExpression is invalid.\n");
	printf("\nNo. of Identifiers %d\n",id);
	printf("\nNo. of Operators %d\n",op);
}

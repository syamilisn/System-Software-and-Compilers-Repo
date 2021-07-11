%{
	int a[]={0,0,0,0,0},i,valid=1,opnd=0;
	int ext();
%}
/* States: 
	%s = patterns with no state specified will also be active.
	%x = such patterns won't be active.
*/
%x OPER
%%
[0-9A-Za-z]+ { BEGIN OPER; opnd++;}
<OPER>"+" { if(valid) { valid=0;i=0;} else ext();}
<OPER>"-" { if(valid) { valid=0;i=1;} else ext();}
<OPER>"*" { if(valid) { valid=0;i=2;} else ext();}
<OPER>"/" { if(valid) { valid=0;i=3;} else ext();}
<OPER>"=" { if(valid) { valid=0;i=4;} else ext();}
<OPER>[a-zA-Z0-9]+ { opnd++;
			if(valid==0)
			{
			valid=1; a[i]++;
			}
			else
				ext();
		    }
<OPER>"\n" { 
	if(valid==0)
		ext();
	else
		return 0;
	}
.\n ext();
%%
int ext()
{
	printf("\nInvalid Expression \n");
	exit(0);
}
int main()
{
	printf(" Type the arithmetic Expression \n");
	yylex();
	printf(" Valid Arithmetic Expression \n");
	printf(" No. of Operands/Identifiers : %d \n",opnd);
	printf("\nNo. of Operators : %d\n",a[0]+a[1]+a[2]+a[3]+a[4]);
	printf(" No. of Additions(+) : %d \n",a[0]);
	printf(" No. of Subtractions(-) : %d \n",a[1]);
	printf(" No. of Multiplications(*) : %d \n",a[2]); 
	printf(" No. of Divisions(/) : %d \n",a[3]);
	printf(" No. of assignments(=) : %d \n",a[4]);
}

#include<stdio.h>
#include<curses.h>
#include<string.h>


/*	5 integers:
		i,j,k,z: loop variables
		c: length of i/p string (number of characters)
 	4 strings:
		a: i/p string
		ac: action string2 = "REDUCE TO E"	
		act: action string2 = "SHIFT->"
		stk: stack string
	
	gets(): dynamically i/p string var
	puts(): similar to printf() ; prints string on console
	strcpy(dest,source): copies the string from source to destination
	'\0': delimiter/ NULL character
*/
int c,i,j,k,z;
char a[16],ac[20],stk[17],act[10];

void check();

void main(){	
	puts("GRAMMAR is E->E+E \n E->E*E \n E->(E) \n E->id");
	puts("enter input string ");
	gets(a);
	c=strlen(a);
	strcpy(act,"SHIFT->");
	puts("stack \t input \t action");
	for(k=0,i=0; j<c; k++,i++,j++){
		if(a[j]=='i' && a[j+1]=='d'){
			stk[i]=a[j];
			stk[i+1]=a[j+1];
			stk[i+2]='\0';
			a[j]=' ';
			a[j+1]=' ';
			printf("\n$%s\t%s$\t%sid",stk,a,act);
			check();
		}
		else{
			stk[i]=a[j];
			stk[i+1]='\0';
			a[j]=' ';
			printf("\n$%s\t%s$\t%ssymbols",stk,a,act);
			check();
		}
	}
	printf("\n");
	getch();
}

void check(){
	strcpy(ac,"REDUCE TO E");
	for(z=0; z<c; z++)
		if(stk[z]=='i' && stk[z+1]=='d'){
			stk[z]='E';
			stk[z+1]='\0';
			printf("\n$%s\t%s$\t%s",stk,a,ac);
			j++;
		}
	for(z=0; z<c; z++)
		if(stk[z]=='E' && stk[z+1]=='+' && stk[z+2]=='E'){
			stk[z]='E';
			stk[z+1]='\0';
			stk[z+2]='\0';
			printf("\n$%s\t%s$\t%s",stk,a,ac);
			i=i-2;
		}
	for(z=0; z<c; z++)
		if(stk[z]=='E' && stk[z+1]=='*' && stk[z+2]=='E'){
			stk[z]='E';
			stk[z+1]='\0';
			stk[z+1]='\0';
			printf("\n$%s\t%s$\t%s",stk,a,ac);
			i=i-2;
		}
	for(z=0; z<c; z++)
		if(stk[z]=='(' && stk[z+1]=='E' && stk[z+2]==')'){
			stk[z]='E';
			stk[z+1]='\0';
			stk[z+1]='\0';
			printf("\n$%s\t%s$\t%s",stk,a,ac);
			i=i-2;
		}
}


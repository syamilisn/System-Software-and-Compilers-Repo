#System Software and Compilers Laboratory<br />
#Using Lex and Yacc Libraries in Unix<br />

lab 3,4:
Command for executing curses.h as alternative for conio.h:
1. cc - w -o lab4 lab4.c -lncurses
2. ./lab4

where,
-w: supress errors
-o: create obj file

Programs:
1.a. LEX: recognize valid arithmetic expression (+,-,*,/). Count and display each identifier and operator.<br />
1.b. YACC: evaluate arithmetic expression involving operators: +, -, *,
and /<br />
2. YACC: recognize all strings ending with b preceded by n a’s using the grammar a^n b (note: input n value)<br />
3. YACC:construct Predictive / LL(1) Parsing Table for the grammar rules: A ®aBa , B ®bB | e. Use this table to parse the sentence: abba$<br />
4. YACC: demonstrate Shift Reduce Parsing technique for the grammar rules: E ®E+T | T, T ®T*F | F, F ®(E) | id and parse the sentence: id + id * id.<br />

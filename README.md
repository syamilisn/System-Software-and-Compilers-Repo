#System Software and Compilers Laboratory<br />
#Using Lex and Yacc Libraries in Unix<br />

lab 3,4:
Command for executing curses.h as alternative for conio.h:
1. cc -w -o lab4 lab4.c -lncurses
2. ./lab4

where,
-w: supress errors
-o: create obj file

Programs:
1. 
    a. LEX: recognize valid arithmetic expression (+,-,*,/). Count and display each identifier and operator.<br />
    b. YACC: evaluate arithmetic expression involving operators: +, -, *, /<br />
2. YACC: recognize all strings ending with b preceded by n a’s using the grammar a^n b (note: input n value)<br />
3. YACC:construct Predictive / LL(1) Parsing Table for the grammar rules: A ®aBa , B ®bB | e. Use this table to parse the sentence: abba$<br />
4. YACC: demonstrate Shift Reduce Parsing technique for the grammar rules: E ®E+T | T, T ®T*F | F, F ®(E) | id and parse the sentence: id + id * id.<br />
5. Design, develop and implement a C/Java program to generate the machine code using Triples for the statement A = -B * (C +D) whose intermediate code in three-address form:
    T1 = -B
    T2 = C + D
    T3 = T1 + T2
    A = T3<br />
6. 
    a. Write a LEX program to eliminate comment lines in a C program and copy the resulting program into a separate file.
    b. Write YACC program to recognize valid identifier, operators and keywords in the given text (C program) file.</br>
7. Design, develop and implement a C/C++/Java program to simulate the working of Shortest remaining time and Round Robin (RR) scheduling algorithms. Experiment with different quantum sizes for RR  algorithm.</br>
8. Design, develop and implement a C/C++/Java program to implement Banker’s algorithm. Assume  suitable input required to demonstrate the results.<br />
9. Design, develop and implement a C/C++/Java program to implement page replacement algorithms LRU and FIFO. Assume suitable input required to demonstrate the results.<br />

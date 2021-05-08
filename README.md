#System Software and Compilers Laboratory<br />
#Using Lex and Yacc Libraries in Unix<br />

Programs:
1.a. LEX: recognize valid arithmetic expression (+,-,*,/). Count and display each identifier and operator.
1.b. YACC: evaluate arithmetic expression involving operators: +, -, *,
and /
2. YACC: recognize all strings ending with b preceded by n a’s using the grammar an b (note: input n value)
3. YACC:construct Predictive / LL(1) Parsing Table for the grammar rules: A ®aBa , B ®bB | e. Use this table to parse the sentence: abba$
4. YACC: demonstrate Shift Reduce Parsing technique for the grammar rules: E ®E+T | T, T ®T*F | F, F ®(E) | id and parse the sentence: id + id * id.
grammar eRRoR;

/*
 * Parser rules
 */

program : BEGIN stmt+ TERMINATE ;

stmt : outstmt 
     | instmt
     | whilestmt
     | ifstmt
     | assignmentstmt
     | comparestmt
     | logicstmt ;

outstmt : OUTPUT (value | convertstmt) ;

instmt : VARIABLE INPUT ;

logic : logicstmt | comparestmt | NOT logicstmt | NOT comparestmt | AND | OR ;

whilestmt : logic+ WHILE stmt+ ENDLOOP ;

ifstmt : IF logic+ stmt+ ENDLOOP ;

assignmentstmt : VARIABLE ASSIGNMENT 
    ( value 
    | unionstmt
    | additionstmt
    | multiplicationstmt
    | convertstmt) ;

comparestmt : value (LESSTHAN | GREATERTHAN | EQUIVALENCE) value ;

logicstmt : (value (AND | OR) value) | (NOT value) ;

convertstmt : CONVERTER value ;

unionstmt : value UNION value ;

additionstmt : value (ADDITION | SUBTRACTION) value ;

multiplicationstmt : value (MULTIPLICATION | DIVISION) value ;

value : (ONE | ZERO | VARIABLE) ; 

/*
 * Lexer rules
 */

WHITESPACE  : (' ' | '\t' | '\n') -> skip ;

OUTPUT  : '!' ;

INPUT   : '?' ;

WHILE   : ':' ;

IF      : ';' ;

TERMINATE   : '.' ;

ENDLOOP    : ',' ;

ASSIGNMENT  : 'error' ;

LESSTHAN   : 'eRror' ;

OR      : 'erRor' ;

NOT     : 'erroR' ;

AND     : 'eRRor' ;

CONVERTER   : 'erRoR' ;

UNION   : 'eRroR' ;

EQUIVALENCE : 'eRRoR' ;

BEGIN   : 'Error' ;

GREATERTHAN    : 'ERror' ;

ONE     : 'ErRor' ;

SUBTRACTION     : 'ErroR' ;

ADDITION    : 'ERRor' ;

DIVISION    : 'ErRoR' ;

MULTIPLICATION  : 'ERroR' ;

ZERO    : 'ERRoR' ;

VARIABLE    : '"' ('error' | 'ERRoR' | 'eRRoR' | 'Error')+ '"' ;

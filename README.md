# eRRoR-Lang Documentation 

## Acceptable tokens: 
- !
    - Output 
- ? 
    - Input 
- : 
    - While loop
- ; 
    - If statement
- , 
    - End loop
- . 
    - End program 
- Error 
    - Start program
- error 
    - ASSIGNMENT operator
- eRror 
    - LESS THAN operator
- ERror 
    - GREATER THAN operator
- eRRoR 
    - EQUIVALENCE operator
- erRor 
    - OR operator
- eRRor 
    - AND operator
- erroR
    - NOT operator
- erRoR 
    - Converter
- eRroR 
    - Union
- ErroR 
    - SUBTRACTION operator
- ERRor 
    - ADDITION operator
- ErRoR 
    - DIVISION operator
- ERroR 
    - MULTIPLICATION Operator
- ERRoR
    - Zero
- ErRor 
    - One
- "ERRoR" 
    - Any combination of 'error,' 'ERRoR', 'eRRoR', and/or 'Error' enclosed in quotes is a user variable

## More on Tokens:
The **Start Program** token is required to be at the beginning of any eRRoR-Lang code to denote where the program starts.

The **End Program** token is required to be at the end of any eRRoR-Lang code to denote where the program ends.

The **End Loop** token denotes the end of while loop, for loop, and if statement instructions.

The **Union** operator (eRroR) is used to append a digit to the end of another digit. The way it works under the hood is by multiplying the left number by 10 and adding the right digit. 
   
The **Converter** operator (erRoR) is used to denote a number should be read as a character. This currently only works properly to output the ASCII representation of that decimal number. You currently cannot store characters in variables.

User defined **Variables** can be used to store any integer value and reference it later. The form of a variable is mentioned in the table above. Feel free to reference either the eRRoR.g4 grammar file or the example Hello, World! program for more examples.

## Syntax:

Every eRRoR-Lang program must begin with **Error** and end with '**.**' (The start program and end program tokens).

a **value** is either a variable, one token, or zero token.

An **output statement** is the output token followed by either a convert statement or a value that you want to output.

An **input statement** is the variable you want to use to store the input value followed by the input token.

A **convert statement** is the converter token followed by the value you want to convert to a character for output.

A **logic** is either a logic statement, compare statement, the not token followed by either a logic statement or a compare statement, the and token, or the or token.

A **logic statement** is either an and/or comparison between two values or a
negation of a value. The syntax is value and/or value for the and/or, or not
value for the negation.

A **compare statement** is a boolean comparison of either less than, greather
than or equal to. The syntax is value comparison operator value.

A **while** loop is currently not functional, but it is one or more logics
followed by one or more statements/operations then the end loop token.

A **if** block is the if token followed by one or more logics followed by one or
more statements and then the end loop token.

An **assignment statement** is a variable, the assignment token, then some value
or operation.

A **union statement** is a value, the union operator, and a value.

An **addition statement** is a value, addition or subtraction operator, then a
value.

A **multiplication statement** is a value, multiplication or division operator,
than a value.

A **value** is either the 1 token, 0 token, or a variable.

## Installation

You first need to download the ANTLR4 cpp runtime and follow their instillation
instructions from their GitHub and/or website. (I leveraged chatGPT to help with
the instilation and compiling of the libraries)

After that, you can download the code in this repository and compile it for use.

The files you need to include in the project compilation is main.cpp,
eRRoRLexer.h, eRRoRLexer.cpp, eRRoRParser.h, eRRoRParser.cpp, eRRoRVisitor.h,
eRRoRVisitor.cpp, CustomVisitor.h, and CustomVisitor.cpp.

Make sure to link to the antlr4-runtime and library when you are compiling the
project.

After that, you should be good to go. Just make a .txt file, start coding, then
execute the compiler's binary with the name of the eRRoR file that you want to
compile!

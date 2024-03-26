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



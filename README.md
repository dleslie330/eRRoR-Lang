# eRRoR-Lang This is the public repository for the development of the esolang called eRRoR Lang for my undergrad capstone project.  
Acceptable tokens: 
    - ! (output) 
    - ? (input) 
    - : (start while loop -- condition to left of token)
	- ; (if statement -- condition to right of token)
	- . (end instruction)
	- , (end loop)
	- error (ASSIGNMENT operator)
	- eRror (LESS THAN operator)
	- erRor (OR operator)
	- erroR (NOT operator)
	- eRRor (AND operator)
	- erRoR (integer connector -- see documentation)
	- eRroR (Union -- creates an array of the values union can work between
	  array and integer)
	- eRRoR (EQUIVALENCE operator)
	- Error (start instruction)
	- ERror (GREATER THAN operator)
	- ErRor (1)
	- ErroR (SUBTRACTION operator)
	- ERRor (ADDITION operator)
	- ErRoR (DIVISION operator)
	- ERroR (MULTIPLICATION Operator)
	- ERRoR (0)
	- "ERRoR" (example variable -- any form of 'error' in quotes is a user
	  variable)

TO-DO:
	Update the syntax of the language as needed (Current development on a google doc)

	Figure out how to get a ".er" file to execute the compiler with the name of
	the ".er" file.

	Create the compiler for the language
		Create the Lexer to create tokens
            Re-learn classes and why my variables aren't working.
            Open a file and read it line by line to create tokens.
            Write these tokens into another file.
        Decide if it is going to translate into c++ code or assembly language
        code
		Create a syntax analyzer
			Design the Grammar
		Create a Semantic Analyzer
			Understand and implement error handling
		Generate either assembly code or c++ code from eRRoR Lang code

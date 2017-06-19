# ccalc
Postfix expression calculator written in C

Written by: Rade Latinovich

### Current Limitations of ccalc
 - Only supports use of integers
 - Only supports 5 operations
    - Addition / Subtraction
    - Multiplication / Division
    - Exponentiation
    
### Example inputs/outputs
I: 12 3 +

O: 15


I: 12 3 + 34 12 - *

O: 330


I: 2 10 ^ 12 /

O: 85

## Project Progress Updates
### 02 March, 2017
 -	Start of project
 -	stack methods work properly
 - started to work on RPC calculator

### 03 March, 2017
 - started to work on a scanner structure
   to make it easier to implement RPC calculator
 - got postfix working properly
 - updated main to take input strings for postfix evaluation

# Chapter 2 -- Instructions and Operators
<strong>A C program is a set of instructions.</strong>

there are three type of instructions--

1 Type declaration instructions

2 Arithmetic Instrucitons

3 Control Instructions

### tut1- <a href="ins.c">Type Declaration instruction</a>

## Arithmetic Instructions

a+b --- a,b= operands and + is operator

operands can be int/float etc

### tut2- <a href="ins2.c">Arithmetic Instructions(Use of all arithmetic operators)</a>

## mathematical Function library-- 

### #include<math.h> 

### example 1 - <a href="pow.c">Area of a square with power function</a>

## Type Conversion
An arithmetic operation between 

int and int = int<br>
int and float = float<br>
float and flaot = float<br>
Ex:- int k = 3.0/9<br>
value of k=?
ans-- 0.3333
### example- <a href="type.c">Program on Type conversion</a>

## Operator Precedence
<br>
In C programming, there's no BODMAS rule applied
<br>
<strong>Operator priority in c</strong><br>
1st-- *, /, %<br>
2nd-- +, -<br>
3rd-- =<br>
Note:- <strong>In the absence of parentheses</strong><br>
<h2>Operator Associativity</h2>
when operators of equal priority are present in an expression, The tie is take care of by associativity.<br>
x*y/z =- (x*y)/z<br>
x/y*z =- (x/y)*z<br>
* , / follows left to right associativity.<br>
<a href="precidence"> Program on Operator Associativity and Operator priority </a>
<br>
<h1>Control Instructions</h1>
we will see them most in next chapters
<br>
Determines the flow of control in a program four types of control instructions in C are:<br>
1. Sequence Control Instruction<br>
2. Decision Control Instruction<br>
3. Loop control Instruction<br>
4. Case control Instruction

<h1>Exercises</h1>
Q. int v = 3^3;
ans- it's valid because in C ^ is a bitwise zor operator 
<br>
Q2.- <a href="divisible.c">Write a program to check whether a number is divisible by 97 or not.</a><br>
Q3-<a href="square.c"> Write a program to find the square of a number input by the user.</a><br>
Q4- <a href="average.c">Write a program to calculate the average of three numbers.</a><br>
Q5- <a href="asc1.c">Write a program to find the ASCII value of a given ASCII code.</a><br>
Q6- <a href="asc2.c">Write a program to find the ASCII code of a given ASCII value.</a><br>
Q7- <a href="root.c">Write a program to find the square root of a number.</a><br>












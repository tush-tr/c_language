# Chapter 5- Functions and Recursion
## What is a Function?
<strong>A function is the self contain block of statement that perform a some specific task</strong>
<br>

<p>Function is a way to break our code into chunks so than it is posible for a programmer tp reuse them</p><br>
<strong>A function is a block of code which performs a particular task</strong><br>
<p>Every C program can be a collection of these functions. Any C program contain atleast one function(). Progam execute always begin with main(). </p>
There is no limit on the number of function that might be present in C language.<br>

### Types of functions
<dl>
<dt>Library Functions</dt>
<dd>the functions that are already beed defined in the C language library are called library function.Like-- printf(), scanf()</dd>
<dt>User defined functions</dt>
<dd>A user defined function is developed by user at the time of writing a program main() function is an ex.</dd>
</dl>

### <b> Main Function</b> 
main() is specially used function in C language. Every C program must have a main() function because in every C program execution always begin with main().

1. <a href="ex1.c">Syntax of Using Functions</a>
<pre>#include<stdio.h>
void display(); //function prototype
int main(){
    display();// function call
    return 0;
}
void display(){
    printf("Hey I am a function"); //function definition
}</pre>
<strong>Here void indicates that the function returns nothing</strong>

## Function Prototype
Function prototype is a way to tell the compiler about the function we are going to define in the program.
## Function call
Function call is a way to tell the compiler to execute the funtion body at the time the call is made.
<ul>
<li>The program execution starts from the main function in the sequence the instructions are written.</li>
</ul>

## Function Definition
Contains the exact set of instructions which are executed during the function call when a function is called from main().

### 2. <a href="ex2.c">Write a program with three functions</a>
<ul>
<li>Good morning function which prints "Good Morning"</li>
<li>good afternoon function which prints "Good After noon"</li>
<li>good night function which returns "Good Night"</li>
</ul>
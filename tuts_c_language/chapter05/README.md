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

### Important points
<ul>
<li>Execution of a C program starts from main()</li>
<li>A C program can have more than one function.</li>
<li>3.<a href="ex3.c">Every function gets called directly or indirectly from main()</a></li>
</ul>

### Why use functions?
<ul>
<li>To avoid returning the same logic again and again</li>
<li>To keep track of what we are doing in a program</li>
<li>To test and check logic independently</li>
</ul>

## Passing Values to functions
We can pass values to a function and can get a value in return from a function.
<pre>int sum(int a, int b);</pre>
tha above prototype means that sum is a function which takes two values a(of type int) and b(of type int) and returns a value of type int.

<pre>
// function definition
int sum(int a,int b){ // a and b are parameters
    int c; 
    c=a+b;
    return c;
}

// calling function
sum(12,14); //12 and 14 are arguments</pre>

### 4. <a href="ex4.c">Sum program using functions.</a>

<dl>
<dt><b>Parameters</b></dt>
<dd>Parameters are tha values or variable placeholderers in the function definition.</dd>
<dt><b>Arguments</b></dt>
<dd>Arguments are the actual values passed to the function to make a call.</dd>
<dl>
<ul>
<li>A function can return only one value at a time</li>
<li>If the passed variable is changed inside the function, the function call doesn't change the value in the calling function.</li>
</ul>

<pre>int change(int a){
    a =77;   //misnomer
    return 0;
}</pre>

5.<a href="ex5.c">change is a function which changes a to 77.</a>
Calling this function
<pre>
int b=22;
change(b);
printf("b is %d",b);// output is 22
</pre>
### 6. <a href="ex6.c">Use the library functions to calculate the area of a square with side a.</a>

# Recursion
<strong>A function defined in C can call itself, this is called recursion.</strong>
A function calling itself is also called "recursive function".

### Example of a recursion
A very good example of recursion is factorial.
<pre>factorial(n)= n x (n-1) x (n-2) x (n-3) x ⋯  x 3 x 2 x 1
factorial(n)= n x factorial(n-1)
5! = 5 x 4 x 3 x 2 x 1 = 120</pre>

### 7. <a href="ex7.c">Write a program to find the factorial of a given number using recursive function method.</a>

<b>Important Notes-</b>
<br>
<ul>
<li>Recursion is sometimes the most direct way to code an algorithm</li>
<li>the condition which doesn't call the function any further in a recursive function is called as the base condition</li>
<li>sometimes due to a mistake made by the programmer, a recursive function can keep running without returning resulting is a memory error.</li>
</ul>

# Exercises

<ol>
<li><a href="q1.c">Write a program using functions to find average of three numbers</a></li>
<li><a href="q2.c">Write a function to convert celcius temperature into fahrenheit.</a></li>
<li><a href="q3.c">write a function to calculate force if attraction on a body of mass m exerted by earth(g = 9. m/s^2)</a></li>
<li><a href="q4.c">Write a program using recursion to calculate nth element of fibonacci series.</a></li>
<li><a href="q5.c">Write a recursive function to calculate the sum of first n natural numbers.</a></li>
<li><a href="q6.c">Write a program using functions to print the following pattern(first n lines)</a></li>
</ol>
<pre>
*
***
*****
</pre>

### Problem-- <a href="pr1.c">
There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.
</a>
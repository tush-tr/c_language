# Chapter 6- Pointers
<strong>A pointer is a variable which stores the address of another variable.</strong>

### The <b>address of (&)</b> operator
The address of operator is used to obtain the address of a given variable.
<ul>
<li>
Format specifier for printing pointer address is <b>'%u'</b>

</li>
<li> <b>The value at adress operator (*)
</b></li>
<li>The value at address operator is used to obtain the value present at a given memory address. It is denoted by <b>*</b></li>
</ul>
<pre>
i = 72   address of i = 87994
j = 87994  address of j = 87998
j is a pointer
j points to i
Address of operator--
&i => 87994
&j => 87998
value at address operator-
*(&i) = 72
*(&j) = 87994
</pre>

## Declaring a pointer
Syntax--
<pre>
int *j;        // declare a variable j of type //int-pointer
j = &i        // store address of i in j

just like this-------------------
int *ch_ptr //pointer to integer
char *ch_ptr //pointer to character
float *ch_ptr // pointer to float
</pre>
### 1. <a href="ex1.c">A program to demonstrate pointers.</a>

## Pointer to a Pointer
we can have a variable which  can store the address of j .
<pre>int **k
k = &j;</pre>
### 2. <a href="ex2.c">Program to demonstrate pointer to a pointer</a>

## Types of Function Calls
Based on the way we pass arguments to the function, function calls are of two types:-
<ol>
<li>Call by value</li>
<li>Call by reference</li>
</ol>

### Call by value-
The value of arguments are passed to the function.
we can't change variables of main function with another function.
<pre>
int c = sum(3,4);  // assume x=3 and y=4
</pre>
### Call by reference
The address of the variables is passed to the function as arguments.

### 3. <a href="ex3.c">program using simple function.</a>
### 4. <a href="ex4.c">Example Program(Swaping variables) using call by reference function. </a>
## Exercises-
<ol>
<li><a href="q1.c"> Write a program to print the address of a vairable.Use this address to get the value of this variable.</a></li>
<li><a href="q2.c">Write a program having a variable i. Pass this variable to a function and print its address. Are those addresses same? Why?</a></li>
<li><a href="q3.c">Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference.</a></li>
<li><a href="q4.c">Write a program using function which calculate the sum and average of two numbers.
Use pointers and print the values of sum and average in main().</a></li>
<li><a href="q5.c">write a program to print the value of a variable i by using "pointer to pointer"type of variable.</a></li>
<li><a href="q6.c">Try problem 3 using call by value and verify that it doesn't change the value of the said variable.</a></li>
</ol>
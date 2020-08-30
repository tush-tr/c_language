# Chapter 7-    Arrays <br>
<strong>An array is a collection of  <span style="background-color:rgb(245, 245, 182);"> similar </span> elements.</strong>

one variable => Capable of storing multiple similar values.

## syntax-
<pre>int marks[90];  // integer array
char name[20];  // character array or string
float percentile[90]; // float array</pre>

Note:---
Array Index starts with 0.<br>
1.<a href="ex1.c">Write a program to accept marks in 4 subjects by the user in an array and print them to the screen one by one.</a>

2.<a href="ex2.c">Write a program to accept marks of 5 students in an array and print them to the screen one by one.</a>

## 3. <a href="ex3.c">Initialization of an array</a>
<pre>int a[3]={34,45,20};
arrays can be initialized while declaration</pre>

## Arrays in memory 

<pre>int arr[3] = {1,2,3}
</pre>
1 integer = 4 bytes -- this is askable question.<br>
this will reserve 4 x3 = 12 bytes.

## Pointer Arithmetic
<strong>A pointer can be incremented to point to the next memory location of that type.</strong><br>

### 4. <a href="ex4.c">Examples on pointer arithmetic.</a>

Following operations can be performed on a pointer:-
<ol>
<li>Addition of a number to a pointer.</li>
<li>Substraction of a number from a pointer.</li>
<li>Substraction of one pointer from another.</li>
<li>Comparison of two pointer variables.</li>
</ol> 

### 5. <a href="ex5.c">Try these operations on another variable by creating poitners in a seperate program. Demonstrate all the four operations.</a>

## Accessing Arrays using pointers

if the pointer variable(pv) points to index 0, pv++ will point to index 1 & so on......
### 6. <a href="ex6.c">Examples on Accessing arrays using pointers.</a>

## Passing arrays to functions
<pre>void printarray(int *ptr,int n)
OR
void printarray(int ptr[],int n)</pre>

### 7.<a href="ex7.c">Example on accessing arrays</a>

## Multidimensional Arrays
An array can be of 2 dimension/3 dimension/n dimensions.

A 2 dimensional array can be defined as
<pre><code>
int arr[3][2] = {{1,4}
                 {7,9}
                 {11,22}};
</code></pre>

### 8.<a href="ex8.c">Example on 2-D arrays</a><br>
### 9.<a href="ex9.c">Example on 3-D arrays</a>
### 10.<a href="ex10.c">Create a 2-d array by taking input from the user.Write a display function to print the content of this 2-d array on the screen.</a>

# Exercises
<ol>
<li>
<a href="q1.c">Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.</a>
</li><br>
<li><a href="q2.c">Write a program to create an array of 10 integers and store multiplication table of 5 in it.</a></li><br>
<li><a href="q3.c">Repeat problem 2 for general input provided by the user using scanf.</a></li><br>
<li><a href="q4.c">Write a program containing a function which reverses the array passed to it.</a></li><br>
<li><a href="q5.c">Write a program containing functions which counts the number of positive integers in an array.</a></li><br>
<li><a href="q6.c">Create an array of size 3x10 containing multiplication tables of the numbers 2,7 and 9 respectively.</a></li><br>
<li><a href="q7.c">Repeat problem 7 for a custom input given.</a></li><br>
<li><a href="q8.c">create a 3-D array and print the address of its elements in increasing order.</a></li><br>
<li><a href="q9.c">create an array of size n, input the elements of the array, sum them and print the sum of the elements in a new line.</a>
</li><br>


</ol>
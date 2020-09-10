# Chapter 10 --  Dynamic Memory allocation
<p>C is a language with some fixed rules of programming. <br>
For example------ Changing the size of array is not allowed</p>

# Dynamic Memory Allocation
<p>
Dynamic memory allocation is a way to allocate memory to a data structure during the runtime. We can use DMA functions available in C to allocate and free memory during runtime.
</p>

## Functions for DMA in C
<p>
Following functions are available in C to perform Dynamic memory allocation.
</p>
<ol>
<li>malloc()</li>
<li>calloc()</li>
<li>free()</li>
<li>realloc()</li>
</ol>

## malloc() function
<p>malloc stands for memory allocation.It takes number of bytese to be allocated as an input and returns a pointer of type void.</p>
Syntax:-
<pre>
ptr = (int*)malloc(30*sizeof(int))
</pre>
<table>
<tr><td>(int*)</td><td>Casting void pointer to int</td></tr>
<tr><td>30*</td><td>space for 30 ints</td></tr>
<tr><td>sizeof(int)</td><td>returns size of 1 int</td></tr>
</table>
<strong>The expression returns a null pointer if the memory can't be allocated.</strong>

### 1. <a href="ex1.c">What is sizeof() operator ?</a>
### 2. <a href="ex2.c">Using malloc() function.</a>
### 3. <a href="ex3.c">Write a program to create a dynamic array of 5 floats using malloc().</a>
## calloc() function

<p>calloc stands for contiguous allocation.<br>It initializes each memory block with a default value of 0.</p>
SYNTAX:-
<pre>
ptr = (float*)calloc(30,sizeof(float);)
</pre>
This allocates contiguous space in memory for 30 blocks(floats).

### 4. <a href="ex4.c">Using calloc() function.</a>
If the space is not sufficient, memory allocation fails and a NULL pointer is returned.
### 5. <a href="ex5.c">Write a program to create an array of size n using calloc where n is an integer entered by the user.</a>
## free() function
<p>We can use free() function to de allocate the memory.<br>
The memory allocated using calloc/malloc is not deallocated automatically.</p>
SYNTAX:-
<pre>
free(ptr); // memory of ptr is released.
</pre>

### 6. <a href="ex6.c">Write a program to demonstrate the usage of free() with malloc().</a>

## realloc() function
<p>
Sometimes the dynamically allocated memory is insufficient or more than required.<br>
realloc is used to allocate memory of new size using the previous pointer and size.
</p>
SYNTAX:-
<pre>
ptr = realloc(ptr,newsize);
ptr = realloc(ptr,3*sizeof(int));

</pre>
ptr now points to this new block of memory capable of storing 3 integers.


### 7. <a href="ex7.c">Using realloc function.</a>
# Exercises
<ol>
<li><a href="que1.c">Write a program to dynamically create an array of size 6 capable of storing 6 integers.</a></li>
<li><a href="que1.c">Use the array in problem 1 to store 6 integers entered by the user.</a></li>
<li><a href="que3.c">Solve problem 1 using calloc().</a></li>
<li><a href="que4.c">Create an array dynamically capable of storing 5 integers. Now use realloc so that is can now store 10 integers.</a></li>
<li><a href="que5.c">Create an array of multiplication table of 7 upto 10(7x10 = 70).Use realloc to make it store 15 numbers.</a></li>
<li><a href="que6.c">Attempt problem 4 using calloc().</a></li>
</ol>
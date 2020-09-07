# Chapter 9 - Structures
<table><tr><td><b>Arrays and strings---------</b></td><td>Similar data(int,float,char)</td></tr><tr><td><b>Structures can hold---------</b></td><td>Dissimilar data</td></tr></table>

## Syntax of creating structures
<pre>struct emp{
    int code;
    float salery;  // this declare a new user defined data type 
    char name[10];
}; // semicolon is important</pre>
<b>A structure in C is a collection of variables of different types under a single name.</b>

### 1. <a href="ex1.c">Syntax of using structures. Defining structures and using user defined data types.</a><br>
### 2. <a href="ex2.c">Write a program to store the details of 3 employees from usr defined data.Use the structure declared above.</a><br>

## Why use structures?
<ul>
<li>Structures keep the data organized</li>
<li>Structures make data management easy for the programmer</li>
</ul> 

## Array of structures
Just like an array of integers, an array of floats and an array of characters, we can create an array of structures.
<pre>struct employee facebook[100]; // array of structures
// We can access the data using
    facebook[0].code = 100;
    facebook[0].salery = 12.5;</pre>
### 3. <a href="ex3.c">Making an array of structures.</a><br>

## Initializing structures
Structures can be initialized as follows:
<pre>struct employee rahul = {100,30.0,"rahul"}<br>
struct employee sorabh = {0} // all elements set to 0</pre>

### 4. <a href="ex4.c">Initializing structures</a><br>

## Structures in memory
Structures are stored in contiguous memory.
<br> 
For an array of structures,instances of structures are stored in adjacent to each other.

## Pointer to structures
A pointer to structure can be created as follows:-
<pre>
struct employee *ptr;
ptr = &e1;
</pre>
We can print structure as follows-
<pre>
printf("%d",(*ptr).code);
</pre>

### Arrow operator
Instead of writing (*ptr).code, we can use 
<pre>ptr->code = 101;</pre>

### 5. <a href="ex5.c">Write a program,define structure and use with pointer and arrow operator.</a><br>

## Passing structure to a function
A structure can be passed to a function just like any other data type.
<pre>void show(struct employee emp); // function prototype</pre>

### 6. <a href="ex6.c">Complete this show function to display the content of employee structure.</a><br>
## Typedef keyword
We can use the typedef keyword to create an alias name for data types in C. 
<br>
typedef is more commonly used with structures.
<pre>
typedef struct complex
    {
        float real;
        int roll;
        char sd[30];
    }complex; // defining
</pre>

### 7. <a href="ex7.c">Using Typedef keyword in structures</a><br>

## Exercises
<ol>
<li><a href="q1.c">Create a two dimensional vector using structures.</a></li>
<li><a href="q2.c">Write a function sumvector which returns the sum of two vectors passed to it. The vectors must be two dimensional.</a></li>
<li><a href="q3.c">Write a program to illustrate the use of arrow operator -> in C.</a></li>
<li><a href="q4.c">Write a program with a structure representing a complex number.</a></li>
<li><a href="q5.c">Create an array of 5 complex numbers created in problem 5 and display them with the help of a display function.The values must be taken as an input from the user.</a></li>
<li><a href="q6.c">Write problem 4's structure using typedef keyword.</a></li>
<li><a href="q7.c">Create a structure representing a bank account of a customer. What fields did you use and why?</a></li>
<li><a href="q8.c">Write a structure capable of storing date. Write a function to compare those dates.</a></li>
<li><a href="q9.c">Solve problem 8 for time using typedef keyword.</a></li>
</ol>
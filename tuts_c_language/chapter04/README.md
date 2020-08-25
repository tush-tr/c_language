# Chapter 4- Loop Control Instructions
### What is Loop?
<p>Loops are used to repeat one or more statements for a given condition.<br>
The versitality of computer lies in it's abiility to perform a set of instruction repeatly. This involve repeating some question of program either specify no. of time vertical.<br>
This repeative operator is done through loop control statement.</p>
<b>loops are used to repeat similar part of a code snippet efficiently </b>

## Three conditions of loop
<ul>
<li>Initialization</li>
<li>Condition</li>
<li>Increment/decrement</li>
</ul>

### 1. <a href="loop1.c">Print 1 to 100 numbers one by one</a> 
<br>

## Types of loops
<ul>
<li>While Loop</li>
<li>Do while loop</li>
<li>For loop</li>
</ul></b>

# while loop
<pre>while (/* condition is true*/)
    {
        /* code */    ---the block keeps executing as long as the condition true
    }</pre>
<img src="while-loop.png" height="400"><br>

### 2. <a href="whilel.c">Example of while loop</a><br>
<strong>If the condition never becomes false, the while loop keeps getting executed, such a loop is known as<b> infinite loop</b></strong>

### 3. <a href='qu1.c'>write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0</a>

### 4. <a href='qu2.c'>write a program to calculate simple interest for 3 sets of p,n and r.</a>
<strong>The loop counter not need to be int, it can be float as well</strong><br>

## Incement and decrement operators
<pre>i++ ----  i is increased by 1(i+1)
i--      ---- i is decreased by 1</pre>
### 5. <a href="inop.c">See an example of increment and decrement operators</a>
<strong>i++ means first print value then increment
<br>
++i means first incement then print value</strong><br>

### Post-Increment (i++)
The i++ method, or post-increment, is the most common way.
In psuedocode, the post-increment operator looks roughly as follows for a variable i:
<pre>int j = i;
i = i + 1;
return j;</pre>
Since the post-increment operator has to return the original value of i, and not the incremented value i + 1, it has to store the old version of i.
### Pre-Increment (++i)
The ++i method, or pre-increment, is much less common and is typically used by older programmers in languages such as C and C++.
<pre>
i = i + 1;
return i;
</pre>


#### <b>Important</b> 
<ul>
<li>+++ operator does not exist</li>
<li>+= is compound assignment operator<br>just like -=,+=,/=<br><pre>if i=5, i+=10 --> Incements i by 10-->15</pre></li>
</ul>

# Do-While Loop
very similar to while loop<br>
<b>While loop which executes at least once</b>
<br>
syntax
<pre><code>do
    {
        /* code */
    } while (/* condition */);</code></pre>

<dl>
<dt><b>While</b></dt>
<dd>Checks the condition and then executes the code.</dd>
<dt>
<b>Do while</b>
</dt>
<dd>Executes the code and then checks the condition.</dd></dl>

### 6. <a href="dowhile.c">Program on do while loop.</a>

### 7. <a href="qu3.c">Write a program to print first n natural numbers using do-while loop.</a>

# For Loop
Syntax
<pre>
<code>
for (initialize ; test ; increment or decrement)
    {
        /* code */
    }
</code>
</pre>
### 8. <a href="forloop.c">Write a program to print  zero to 10 numbers using for loop.</a>
<dl>
<dt><b>Initialize</b><dt>
<dd>Setting a loop counter to an initial value.</dd>
<dt><b>Test</b><dt>
<dd>Checking a condition.</dd>
<dt><b>Increment</b><dt>
<dd>Updating the loop counter.</dd>
</dl>

### 9. <a href="ex1.c">example of using for loop.</a>
### 10. <a href="qu4.c">Write a program to print first n numbers using for loop.</a>

### 11. <a href="ex2.c">Decrementing for loop.</a>

### 12. <a href="qu5.c">write a program to print n natural numbers in reverse order.</a>

### 13. <a href="13c.c">Write a program to print the table of any number</a>

## Break Statement
 The break statement is used to exit the loop irrespective of whether the condition is true or false.
 whenever a "break" is  encountered inside the loop, the control is sent outside the loop.<br>
<b>Using break statement</b>
<pre><code>for (int i = 0; i < 1000; i++)
    {
        printf("%d\n",i);
        if (i==5)
        {
            <span style="color: red;">break;</span>
        }
        
    }
</code></pre>

### 14. <a href="break.c">Using break statement inside a do while loop</a>

## Continue statement
Continue statement is used to immidiately move to the next iteration of the loop.<br>
The control is taken to the next iteration thus skipping everything below "continue" inside the loop for that iteration.<br>

<pre><code>int s =5;
    int i=0;
    while (i<10){
        if(i!=s){
            continue;
        }
        else
        {
            printf("%d",i);
            i++;
        }
    }
</code></pre>
<br>

### 15. <a href="continue.c">Using continue statement</a>

# Exercises

1. <a href="13c.c">Write a program to print a multiplication table of a given number.</a><br>
2. <a href="exer2.c">Write a program to print multiplication table of 10 in reverse order</a><br>
3. Write a program to sum first 10 natural numbers.<br><pre>
a. <a href="exer3.c">Using For loop</a>
b. <a href="exer4.c">Using While loop</a>
c. <a href="exer5.c">Using Do while loop</a></pre>
4. <a href="exer6.c">Write a program to calculate the sum of the numbers occuring in the multiplication table of 8.(Consider 8x1 to 8x10)</a>
<br>
5. <a href="exer7.c">Write a program to calculate the factorial of a given number using a for loop</a>
6. <a href="exer8.c">Repeat 8 using while loop</a>
7. <a href="exer9.c">Write a program to check whether a given number is prime or not using loops</a><br>
8. Implement 7 question with other loops
<pre>a. <a href="exer10.c">using while loop</a>
b.<a href="exer11.c">Using do while loop</a> 
</pre><br>
9. <a href="exer12.c">Write a program to reverse any number</a><br>
10. <a href="exer13.c">Write a program to add all digits of a given number</a><br>
11. <a href="exer14.c">Write a program to sort all even and odd numbers</a>




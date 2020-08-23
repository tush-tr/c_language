# Chapter3- Conditional Instructions
<br>
In C language, we must be able to execute instructions on a condition..

## Decision Making Instructions in C
### 1. If-else Statement
### 2. Switch Statement
 
## If-else Statement
### Syntax-
<pre><code>
if(condition to be checked){
    Statements-if-condition-true;
}
else{
    Statements-if-condition-false;
}</code></pre>
#### example:-
<pre><code>
int a=23;
if(a>18){
    printf("You can drive\n")
}</code></pre>
<strong>Note:- Else block is not necessary but optional.</strong>

### 1. <a href="ifbasic.c">Checking even-odd number program using if condition </a><br>

### 2. <a href="ifelse.c">take user age and tell he can drive or not</a>
<br>

## Relational Operators
used to evaluate conditions(True or false) inside the if statement.
<ul>
<li>These are binary operators</li>
<li>Relational expression always evaluated to either true or false</li>
<li>Used to form conditions in programming</li>
<li>Lower priority than arithmetic operators</li>
</ul>
<pre>== equals
>= greater than or equal to
>  greater than
<  smaller than
<= smaller than or equal to
!= not equal to</pre> 
<strong>Note:- '=' is used for assignment but '==' is used for equality check</strong><br>

### 3. <a href="votemsg.c">Program to tell that you can vote or not by taking the age</a><br>

## Logical Operators
Logical operators are used to combine two or more conditions logically.<br>
Used to provide logic to our C program.
<pre>Logical 'AND' Operator -- '&&'
is true when both conditions are true

Logical 'OR' operator-- '||'
is true when at least one of the conditions is true

Logical 'NOT' Operator-- '!'
returns true if given false and false if given true</pre>

### 4. <a href="iflogical.c">if-else condition drive program using logical operators</a>

## Else if Clause

instead of using multiple if statements, we can also use else if along with if thus formatting an if-else-if-else ladder.
<pre><code>
if (/* condition */)
{
    /* code */
}
else if (/* condition */)
{
    /* code */
}
else
{
    /* code */
}
</code></pre>
### 5. <a href="elseif.c">A basic Program on else-if clause</a> taking numbers and telling what the numbers are
### 6. <a href="leapyear.c">A leap year checking Program</a>
### 7. <a href="marks.c">The marks obtained by a student in 5 different subjects are input. Tell a devision as per the following rules--</a>
1. if marks are equal or above than 60- 1st devision
<br>
2. if marks are between 45 and 60- 2nd devision
<br>
3. if marks are between 33 and 45- 3rd devision
<br>
4. If marks are below 33-- fail
<br>

## Operator Precedence
<pre>
Priority                Operator
1st                     !                     
2nd                     *,/,%
3rd                     +,-
4th                     <,>,<=,>=
5th                     ==, !=
6th                     &&
7th                     ||
8th                     =
</pre>

## Conditional Operators
A shorthand "if-else" can be written using the conditional or ternary operators
<pre>
condition?expression1-if-true:expression2-if-false
E.G- x=(y>0)?1:0;
</pre>
<b>The conditional operator is used for making two way decision.This operator is a combination of ? and : .</b>
<ul>
<li>Denoted by ?</li>
<li>It is the only ternary operator in C</li>
<li>If condition is true,exp1 is evaluated</li>
<li>If condition is false, exp2 is evaluated</li>
<li>conditional operator can be used to replace simple "if-else" statement in symbolic form</li>
</ul>

### 8.   <a href="ternary.c">A if-else program using ternary operator</a>

## Switch Case Control Instrcution
Switch-case is used when we have to make a choice between number of alternatives for a given variable.<br>
<b>The control statement that allow to make a decision from list the no. of choices is called a switch statement.</b>
<pre><code>switch (expression)
    {
    case /* constant-expression 1 */:
        /* code */
    case /* constant-expression 2 */:
        /* code */
    case /* constant-expression 3 */:
        /* code */
    default:
        // code,
    }
    ______________________________________
    case:
    break;
    default:</code></pre>

### 9. <a href="case.c">A rating Program based on switch statement</a>

## Exercise--
1. <a href="ex1.c">write a program to find out whether a student is pass or fail, ifit requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user</a>
2. <a href="ex2.c">Calculate income tax paid by an employee to the govn as per the stats below-
<pre>
Income Slab          Tax
2.5L-5.0L            5%
5.0L-10.0L           20%
above 10.0L          30%
there is no tax below 2.5L.
</pre></a>
3. <a href="ex3.c">Write a program to determine whether a character enterd by the user is lowercase or not</a>
4. <a href="ex4.c">write a program to find greatest of four numbers entered by the user.</a>
5. <a href="ex5.c">Write a program to determine the entered is a vowel or a constant.</a>
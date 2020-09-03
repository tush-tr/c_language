# Chapter 8 - Strings

<strong>
A string is a 1-D character array terminated by a null('\0')
<pre>\0 is null character.</pre>
</strong>

<b>Null Character--</b>
 Null character is used to denote string termination characters are stored in contiguous memory locations.

### 1. <a href="ex1.c">Creating strings</a>

## Strings in memory
A string is stored just like an array in the memory.


### 2. <a href="ex2.c">Create a string using "" and print its content using a loop.</a>

## Printing Strings

A string can be printed by character using printf and %c.
But there is another convenient way to print a string.
<pre>
char s[] = "Tushar";
printf("%s",s);
</pre>

## Taking input strings from a user
we can use %s with scanf to take string input.
<pre>char s[50];
scanf("%s",s);</pre>
### 3. <a href="ex3.c">Create a string, Take input from user and print the string.</a>

Note-<b>scanf can't be used in input multi word strings with spaces</b>

## gets() and puts()
gets() is a function which can be useed to recieve a multi-word string with spaces.

### 3. <a href="ex3.c">Create a string, Take input from user a multi-word string and print the string.</a>

puts() can be used to output a string.

### 4. <a href="ex4.c">puts() example.</a>

## Declaring a string using pointers
<pre>
char *ptr = "tushar";</pre>
this tells the compiler to store the string in memory and assigned address is stored in a char pointer.
<dl>
<dt>Note</dt>
<dd>Once a string is defined using char st[]="Tushar", it can't be initialized to something else.</dd>
<dd>A string defined using pointers can be reinitialized.
<pre>ptr = "Tushar";</pre>
</dd>
</dl>

### 5. <a href="ex5.c">Reinitializing string.</a>

## Standard library functions for string

### <b>strlen()</b>
Used to count the number of characters in the string excluding the null \0 character.
<pre>int length = strlen(st);</pre>

### 6. <a href="ex6.c">get the length of the string using standard library function..</a>

### 7. <a href="ex7.c">Implement function that work same as strlen().</a>

### <b>strcpy()</b>
Used to copy the content of second string into first string passed to it.
<pre>strcpy(st2,st);</pre>

### 8. <a href="ex8.c">Copy string using strcopy() function.</a>


### <b>strcat()</b>
Used to concatenate two strings

### 9. <a href="ex9.c">Using strcat() function.</a>

### <b>strcmp()</b>
Used to compare two strings.
<br>
It returns: 0 if strings are equal
<br>
negative value: if first string mismatching character's ASCII value is not greater than second string's corresponding mismatching character. 
<br>
otherwise it returns positive value.
<pre>
strcmp("for","joke") -- positive value
strcmp("joke","for") -- negative value
</pre>

## sprintf and sscanf
A formatted string can be created with the sprintf() function. This is useful for building a string from another data types.
<pre>
char a[] = "HEllo";
char s[100];
int n = 75;
sprintf(s,"%s %d",a,n);
printf("%s\n",s);
</pre>
sscanf is used for scanning a string for values the function reads values from a string and stores them at the corresponding variable addresses.



## Exercises
<ol>
<li><a href="q1.c">Write a program to take string as an input from an user using %c and %s. Confirm that the strings are equal.</a></li>
<li><a href="ex7.c">Write your own strlen() function. </a></li>
<li><a href="q2.c">Write a function slice() to slice a string. It should change the original string such that it is now the sliced string.Take m and n as the start and ending position for slice.</a></li>
<li><a href="q3.c">Write your own version of strcpy() function from < string.h ></a></li>
<li><a href="q4.c">Write a program to encrypt a string by adding 1 to the ASCII value of its characters.</a></li>
<li><a href="q5.c">Write a program to decrypt the string encrypted using encrypte function in problem 5.</a></li>
<li><a href="q6.c">Write a program to count the occurence of a given character in a string.</a></li>
<li><a href="q7.c">Write a program to check whether a given character is present in a string or not.</a></li><br>

### <a href="prac.c">A program which takes your password or any msg and display encrypted code if you want to decrypt it can decrypt it.</a>



</ol>





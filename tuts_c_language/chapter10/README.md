# Chapter 10 - File Handling in C language

The Random Access Memory is a volatile memory and it's content is lost once the program terminates.
In order to persist the data forever we use files.
<br>
<p>
A file is data stored in a storage device.<br>
A C program can talk to the file by reading content from it and writing content to it.
</p>

## File Pointer
<p>
The <b>"File"</b> is a structure which needs to be created for opening the file.<br>
A file pointer is a pointer to this structure of the file.
</p>
File pointer is needed for communication between the file and the program.<br>
Syntax:---
<pre>
File *ptr;
ptr = fopen("filename.ext","mode");
</pre>

## File opening modes in C
C offers the programmers to select a mode for opening a file.
<table>
<tr><td><b>"r"</b></td><td>Open for reading</td><td>If the file does't exist,fopen returns null</td></tr>
<tr><td><b>"rb"</b></td><td>Open for reading in binary</td><td>If the file does't exist,fopen returns null</td></tr>
<tr><td><b>"w"</b></td><td>Open for writing</td><td>If the file exist the content will be over write</td></tr>
<tr><td><b>"wb"</b></td><td>Open for writing in binary</td><td>If the file exist the content will be over write</td></tr>
<tr><td><b>"a"</b></td><td>Open for append</td><td>If the file does't exist,it will be created</td></tr>
</table><br>

### 1. <a href="ex1.c">Writing a file using w mode.</a><br>
### There are two types of files
<ol>
<li>Text files.(.txt, .c)</li>
<li>Binary files.(.jpg, .dat)</li>
</ol>

## Reading Files
A file can be opened for reading as follows:
<pre>FILE *ptr;
ptr = fopen("Exam.txt","r");
int num;</pre>

We can read an integer from the file uisng 
<pre>fscanf(ptr,"%d",&num);</pre>

## Closing the file
It's very important to close the file after read or write.
<pre>fclose(ptr);</pre>

### 2. <a href="ex2.c">Take input integers and a string from a text file and print on the screen.</a><br>

### 3. <a href="ex3.c">Modfiy the above program to check whether the file exists or not before opening the file.</a><br>

## Writing to a file
<pre>FILE *ptr;
ptr = fopen("write.txt","w");
fprintf(ptr,"%d",num);</pre>

### 4. <a href="ex4.c">Example of writin to a file</a><br>
### 5. <a href="ex5.c">Get input from user of numbers and write into the file.</a><br>

## fgetc() and fputc()
<p>fgetc and fputc are used to read and write a character from / to a file.</p>
<pre>fgetc(ptr)   // -- used to read a character from file
fputc('c',ptr); // --- used to write character 'c' to the file</pre>

### 6.<a href="ex6.c">Using fgetc() function.</a><br>
### 7.<a href="ex7.c">Using fputc() function.</a><br>

## EOF : End of File

fgetc() returns EOF when all  the characters from a file have been read. So we can write a check like below to detect end of file.
<pre>while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        // code
    }</pre>

### 8. <a href="ex8.c">Reading a Full File.</a>
<br>

# Exercises
<ol>
<li><a href="que1.c">Write a prorgam to read three integers from a file.</a></li>
<li><a href="que2.c">Write a program to generate multiplication table of a given number in text format.Make sure that the file is readable and well formatted.</a></li>
<li><a href="que3.c">Write a program to read a text file character by character and write its content twice. in a seperate file.</a></li>
<li><a href="que4.c">Take name and salery of two employees as input from the user and write them to a text file in the following format.
<br>
<pre>name1,3300<br>name2,7700</pre></a></li>
<li><a href="que5.c">Write a program to modify a fille containing an integer to double its value.</a></li>


</ol>
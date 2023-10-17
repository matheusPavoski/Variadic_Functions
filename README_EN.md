# Variadic_Functions

This repository serves as a learning resource to understand variadic functions in C programming. It includes practical examples that demonstrate the usage of the stdarg.h library and essential functions like va_start, va_arg, etc. Explore the code to gain proficiency in handling functions with a variable number of arguments, a powerful feature in C programming.

## Introduction
Variadic functions accept a variable number of parameters, which is a fundamental concept to grasp. Up until now, we've known that every function needs to have a defined number of parameters. But how does the printf function accept an arbitrary number of arguments? The answer lies in the stdarg.h library. It contains the functions va_start, va_arg, va_copy, and va_end, which allow us to work with variadic functions.

### stdarg.h Library

Including the stdarg.h library declares a type called va_list and defines three macros for traversing a list of arguments whose quantity and types are undefined in the function call. The stdarg.h library is an essential tool for dealing with functions that accept a variable number of arguments.

<p align="center">
  <img src="Screenshot from 2023-10-17 14-00-09.png" alt="man stdarg">
</p>

## Examples of Usage

The best way to understand variadic functions is through practical examples. Below, we present a simple example of how to use the va_start and va_arg functions:

<pre><code>
#include &lt;stdio.h&gt;
#include &lt;stdarg.h&gt;

int sum(int num_args, ...) 
{
    va_list args;
    
    int total = 0;
    va_start(args, num_args);

   int i = 0;
   while (i < num_args)
   {
    total += va_arg(args, int);
    i++;
  }

    va_end(args);

    return total;
}

int main() 
{
    int total = sum(4, 10, 20, 30, 40);
    printf("The sum is: %d\n", total);
    return 0;
}
</code></pre>
In this example, the function sum accepts a variable number of integer arguments and returns their sum.

## To Compile and Execute

To compile the above example, use a C compiler like cc, as follows:
<code>
cc example.c -o example
</code>
Then, run the generated program:

<code>
./example
</code>

[Leia este README em Português](./README.md)

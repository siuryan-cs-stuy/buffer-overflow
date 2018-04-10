# buffer-overflow

Cyan<br>
Ryan Siu, Connie Lei, Andrew Wong<br>
Period 9<br>

## What is buffer overflow?

A __buffer overflow__ is when user input to a program, while writing data to a __buffer__, causes the unintentional overwriting of adjacent memory. This can be exploited, termed a __buffer overflow attack__.

## The Stack

The __stack__ is an example of a FIFO data structure, with two operations: _push_ (adding to the top) and _pop_ (removing from the top). In many operating systems, each program has its own stack, and each stack is used to store local variables and return addresses of functions in that program.

| __Pushing to a stack__   | ![push](http://www.cse.scu.edu/~tschwarz/coen152_05/Images/wk6a1.jpg) |
|--------------------------|-----------------------------------------------------------------------|
| __Popping from a stack__ | ![pop](http://www.cse.scu.edu/~tschwarz/coen152_05/Images/wk6a2.JPG)  |

For example, let's say we have the following program in C:

```c
void foo( int input ) {
    char buffer[5];
    printf("Hello!");
}

int main() {
    foo( 1 );
    return 0;
}
```

The stack would look something like this:

<table>
  <tr><td>buffer[0] buffer[1] buffer[2] ...</td></tr>
  <tr><td>argument of foo</td></tr>
  <tr><td>address of return</td></tr>
  <tr><td>stack before calling foo</td></tr>
</table>

When the function `foo` is called, the calling function's address of return (where the calling function is in memory) is pushed onto the stack. Zeroes are then pushed onto the stack for local variables--including the argument for `foo` and the characters in the `buffer` array.

## Programming Example



## Real-life Attacks


### Examples in History



## Stack Protection



/*
 * An include, and it is the way to import the contents of one file into
 * this source file. C has a convention of using .h extensions for header files,
 * which contain lists of functions to use in your program.
 *
 * - header files contain lists of functions
 */
#include <stdio.h>

/* this is a comment. */

/*
 * A more complex version of the main function you’ve been using so far.
 * How C programs work is that the operating system loads your program,
 * and then it runs the function named main. For the function to be totally
 * complete it needs to return an int and take two parameters:
 * - an `int` for the argument count and
 * - an array of `char *` strings for the arguments.
*/
int main(int argc, char *argv[])
{
  int distance = 100;

  // this is also a comment
  printf("You are %d miles away.\n", distance);

  return 0;
}

/*
# Notes

If have `%` formatter in printf but no extra arguments are supplied,
compiler emits warning (but compiles successfully).

```
❯ make exercises/ex1
cc     exercises/ex1.c   -o exercises/ex1
exercises/ex1.c:25:20: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
  printf("You are %d miles away.\n");
                  ~^
1 warning generated.
```

But it'll print garbage value

```
❯ ./exercises/ex1
You are 1800076896 miles away.
```
*/

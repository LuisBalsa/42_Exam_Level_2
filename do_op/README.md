# Assignment: do_op

## Problem Statement

Write a program called `do_op` that takes three strings as command-line arguments:
- The first and the third string are representations of base-10 signed integers that fit in an `int`.
- The second string is an arithmetic operator chosen from: `+`, `-`, `*`, `/`, or `%`.

The program must display the result of the requested arithmetic operation, followed by a newline. If the number of parameters is not 3, the program just displays a newline.

You can assume that the strings have no mistakes or extraneous characters. Negative numbers, in input or output, will have one and only one leading `-`. The result of the operation will fit in an `int`.

## Examples

Example 1:
```
$ ./do_op "123" "*" 456 | cat -e
56088$
```

Example 2:
```
$ ./do_op "9828" "/" 234 | cat -e
42$
```

Example 3:
```
$ ./do_op "1" "+" "-43" | cat -e
-42$
```

Example 4:
```
$ ./do_op | cat -e
$
```

## Solution

The given problem requires performing a basic arithmetic operation on two integers based on the provided operator and displaying the result. The solution involves parsing the command-line arguments, converting them into integers, and performing the operation using a helper function.

```c
#include <stdio.h>
#include <stdlib.h>

int calc(int nbr1, int nbr2, char c) {
    if (c == '+')
        return nbr1 + nbr2;
    if (c == '-')
        return nbr1 - nbr2;
    if (c == '*')
        return nbr1 * nbr2;
    if (c == '/')
        return nbr1 / nbr2;
    if (c == '%')
        return nbr1 % nbr2;
    return 0;
}

int main(int ac, char **av) {
    int nbr1, nbr2;
    if (ac == 4) {
        nbr1 = atoi(av[1]);
        nbr2 = atoi(av[3]);
        printf("%d", calc(nbr1, nbr2, av[2][0]));
    }
    printf("\n");
    return 0;
}
```

The program consists of two functions: `calc` and `main`. Let's understand each function in detail.

### `calc` function

The `calc` function takes three parameters: `nbr1`, `nbr2`, and `c`. It performs the arithmetic operation specified by the character `c` on the integers `nbr1` and `nbr2` and returns the result.

- If `c` is `'+'`, it performs addition and returns the sum of `nbr1` and `nbr2`.
- If `c` is `'-'`, it performs subtraction and returns the difference between `nbr1` and `nbr2`.
- If `c` is `'*'`, it performs multiplication and returns the product of `nbr1` and `nbr2`.
- If `c` is `'/'`, it performs division and returns the quotient of `nbr1` divided by `nbr2`.
- If `c` is `'%'`, it performs modulo division and returns the remainder when `nbr1` is divided by `nbr2`.

### `main` function

The `main` function is the entry point of the program. It first checks if the number of command-line arguments is equal to 4 (`ac == 4`). If not, it simply prints a newline character and exits.

If there are exactly 4 command-line arguments, it proceeds to convert the first and third arguments

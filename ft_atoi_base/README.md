
# ft_atoi_base

## Objective
The objective of this assignment is to write a function `ft_atoi_base` that converts a string representation of a number in a given base (up to base 16) to an integer in base 10.

## Approach
The function `ft_atoi_base` takes two parameters: `str`, which is a pointer to the string representation of the number, and `str_base`, which represents the base of the number. The function uses the following steps to convert the string to an integer:

1. Initialize `sign` to 1, which represents the sign of the number.
2. Initialize `nbr` to 0, which will store the converted integer.
3. Skip any leading whitespace characters by iterating over `str` until a non-whitespace character is found.
4. Check if the first non-whitespace character is a minus sign ('-'). If it is, set `sign` to -1 and move to the next character.
5. Iterate over the remaining characters of `str` until a character is encountered that is not a valid digit in the given base.
6. For each valid digit, multiply `nbr` by `str_base` and add the decimal value of the digit to `nbr`. The decimal value is calculated based on the ASCII value of the digit character and the base.
7. Finally, multiply `nbr` by `sign` to account for the sign of the number and return the result.

## Helper Functions
The code also includes two helper functions:

### ft_isdigit
The `ft_isdigit` function checks if a character `c` is a valid digit in the given base. It takes two parameters: `c`, the character to check, and `base`, the base of the number. The function compares `c` with the valid digit characters for the given base and returns 1 if `c` is a valid digit, and 0 otherwise.

### ascii
The `ascii` function calculates the decimal value of a character `c` based on its ASCII value. It is used in the `ft_atoi_base` function to determine the decimal value of a valid digit character.

## Example
Here is an example usage of the `ft_atoi_base` function:

```c
#include <stdio.h>

int main(void)
{
    const char *str = "12FDB3";
    int base = 16;
    int result = ft_atoi_base(str, base);
    printf("Result: %d\n", result);
    return 0;
}
```

In this example, the string "12FDB3" is converted to the decimal number 1921699 in base 10.


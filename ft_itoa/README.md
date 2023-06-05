### Subject: `ft_itoa`

#### Description
The task is to write a function called `ft_itoa` that converts an integer to a null-terminated string. The function should allocate memory for the resulting string and return it.

#### Function Signature
```c
char *ft_itoa(int nbr);
```

#### Function Parameters
- `nbr`: An integer that needs to be converted to a string.

#### Return Value
The function should return a pointer to the allocated string.

#### Allowed Functions
- `malloc`: Used for dynamic memory allocation.

### Code Explanation

The implementation of the `ft_itoa` function is as follows:

```c
#include <stdlib.h>

int nbrlen(int n)
{
    int i = !n;
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int nbr)
{
    int sign = nbr < 0;
    int len = nbrlen(nbr) + sign;
    char *str = (char *)malloc(sizeof(char *) * (len + 1));
    if (!str)
        return (NULL);
    str[len--] = '\0';
    if (sign)
    {
        *str = '-';
        str[len--] = -(nbr % 10) + '0';
        nbr = -(nbr / 10);
    }
    while (len - sign >= 0)
    {
        str[len--] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (str);
}
```

The `ft_itoa` function utilizes an auxiliary function called `nbrlen`, which calculates the number of digits in the given integer `nbr`. The `nbrlen` function is implemented separately as follows:

```c
int nbrlen(int n)
{
    int i = !n;
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}
```

The `ft_itoa` function itself takes the input integer `nbr` and performs the following steps:

1. It determines whether the number is negative by checking if `nbr` is less than 0. If it is negative, the `sign` variable is set to 1, indicating a negative number.
2. It calculates the length of the resulting string by calling the `nbrlen` function and adding the `sign` value to account for the negative sign, if applicable.
3. It allocates memory for the string using `malloc` with the size of `(len + 1)` to accommodate the null terminator.
4. It checks if the memory allocation was successful. If not, it returns `NULL`.
5. It sets the null terminator at the end of the allocated string (`str[len--] = '\0'`).
6. If the number is negative, it sets the negative sign at the beginning of the string (`*str = '-'`) and converts the last digit of the absolute value of `nbr` to a character and assigns it to `str[len--]`. Then, it updates `nbr` to the absolute value of `nbr` divided by 10.
7. It enters a loop that converts each digit of the absolute value of `nbr` to a character and assigns it to `str[len--]`. It then updates `nbr` by dividing it by 10.
8. Finally, it returns the resulting string `str`.

This implementation uses dynamic memory allocation to allocate memory for the resulting string, taking into account the sign and number of digits in the input integer. The resulting string is stored in the allocated memory and returned as the function's result.

#### Diagram

```
   +------------------+
   |   ft_itoa        |
   +------------------+
              |
              |
              V
    +------------------+
    |   nbrlen         |
    +------------------+
              |
              |
              V
    +------------------+
    |   Memory         |
    |   Allocation     |
    +------------------+
              |
              |
              V
    +------------------+
    |   Set Null       |
    |   Terminator     |
    +------------------+
              |
              |
              V
    +------------------+
    |   Handle Sign    |
    +------------------+
              |
              |
              V
    +------------------+
    |   Convert Digits |
    +------------------+
              |
              |
              V
    +------------------+
    |   Return Result  |
    +------------------+
```

In this diagram, the flow starts with the `ft_itoa` function, which calls the `nbrlen` function to determine the length of the resulting string. After that, the memory allocation is performed, followed by setting the null terminator at the end of the allocated string. The code then handles the sign of the number, converting the digits and storing them in the allocated memory. Finally, the resulting string is returned.

Note: This diagram is a simplified representation and does not capture all the details of the code.


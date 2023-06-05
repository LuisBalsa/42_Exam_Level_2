## Assignment: `str_capitalizer`

### Problem Statement

Write a program that takes one or several strings as command-line arguments and capitalizes the first character of each word (if it's a letter) while converting the remaining characters to lowercase. The program should display the resulting strings on the standard output, each followed by a newline character.

A "word" is defined as a part of a string delimited either by spaces/tabs or by the start/end of the string. If a word consists of only one letter, it must be capitalized.

If there are no command-line arguments, the program should simply display a newline character.

### Examples

```
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
```

### Implementation

Below is the explanation of the code:

```c
#include <unistd.h>

int ascii(char c, int l)
{
    if (!l && (c >= 'a' && c <= 'z'))
        return (-32);
    if (l && (c >= 'A' && c <= 'Z'))
        return (32);
    return 0;
}

int main(int ac, char **av)
{
    int i;
    int k = 1;
    if (ac > 1)
    {
        while (av[k])
        {
            i = 0;
            while (av[k][i])
            {
                if (i == 0)
                    av[k][i] += ascii(av[k][i], 0);
                else if (av[k][i - 1] == ' ')
                    av[k][i] += ascii(av[k][i], 0);
                else
                    av[k][i] += ascii(av[k][i], 1);
                write(1, &av[k][i], 1);
                i++;
            }
            write(1, "\n", 1);
            k++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}
```

The program starts by defining a helper function `ascii`, which takes a character `c` and a boolean flag `l`. This function returns an integer value (-32 or 32) based on the character's case and the flag value. It converts lowercase letters to uppercase by adding -32 and vice versa by adding 32.

The `main` function checks if there are more than one command-line arguments (`ac > 1`). If so, it iterates over each argument starting from index 1 (`k = 1`). For each argument, it initializes a variable `i` to 0 and starts a nested loop to process each character of the argument.

Inside the nested loop, it applies the capitalization logic. If `i` is 0, it capitalizes the character by adding the value returned by `ascii(av[k][i], 0)` to `av[k][i]`. If the previous character (at index `i - 1`) is a space, it also capitalizes the current character. Otherwise, it converts the character to lowercase by adding the

 value returned by `ascii(av[k][i], 1)` to `av[k][i]`.

After updating the character, it writes it to the standard output using the `write` function. Finally, it writes a newline character (`"\n"`) and increments `i`. The process continues until all characters of the current argument are processed.

Once all arguments are processed, it checks if there were no arguments (`ac <= 1`). In that case, it simply writes a newline character to the standard output. Finally, the program returns 0 to indicate successful execution.

The code correctly implement the required functionality of capitalizing the first character of each word and converting the rest to lowercase.

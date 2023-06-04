
## Subject: Last Word

The subject of the assignment is to write a program that takes a string as input and displays its last word followed by a newline character.

A word is defined as a section of the string delimited by spaces or tabs, or by the start/end of the string.

The program should handle the following cases:
- If the number of parameters is not exactly 1, or there are no words in the input string, it should display a newline character.
- If there is only one word in the input string, it should display that word followed by a newline character.

## Implementation

The implementation of the program follows the requirements of the subject. Below is the explanation of the code:

```c
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2) {
        while (av[1][i])
            i++;
        i -= i > 0;
        while (av[1][i] == ' ' && i > 0)
            i--;
        while (av[1][i] != ' ' && i > 0)
            i--;
        while (av[1][i] == ' ')
            i++;
        while (av[1][i] && av[1][i] != ' ') {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
```

The `main` function takes two parameters: `ac` (argument count) and `av` (argument vector). 

The program first checks if the number of parameters (`ac`) is exactly 2, which indicates that there is one input string provided. If the condition is satisfied, it proceeds with finding and printing the last word.

The variable `i` is initialized to 0 and used as an index to traverse the input string `av[1]`.

The following steps are performed to find the last word:
1. Find the length of the input string by incrementing `i` until reaching the null character (`\0`).
2. Decrease `i` by 1 if it is greater than 0 (to handle empty strings).
3. Decrement `i` until the last space character is found or until `i` becomes 0.
4. Increment `i` while skipping any trailing spaces.
5. Print the characters from `av[1][i]` until a space character or the end of the string is encountered using the `write` system call.

Finally, after the loop, a newline character is printed using `write` regardless of whether a word was found or not.

The program uses the `write` function from the `unistd.h` header to write characters to the standard output (stdout).

## Flowchart


```
      +-----------------------+
      |    Start of program   |
      +-----------------------+
                  |
                  |
                  v
           +--------------+
           | Check params |
           +--------------+
                  |
          +-------|-------+
          |               |
          v               |
   +--------------+       |
   |   No words   |       |
   +--------------+       |
          |               |
          |   +-------------------+
          |   | Find last word   |
          |   +-------------------+
          |               |
          |   +-------------------+
          +-->|  Print last word  |
              +-------------------+
                      |
                      |
                      v
               +------------+
               |  Print \n  |


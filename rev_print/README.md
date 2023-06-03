
## rev_print

### Subject

Write a program that takes a string, and displays the string in reverse followed by a newline. If the number of parameters is not 1, the program displays a newline.

### Code Explanation

The given code is written in the C programming language and uses the `write` function from the `unistd.h` library. Here's a breakdown of the code:

```c
#include <unistd.h>

int main(int ac, char **av) {
    int i = 0;
    
    if (ac == 2) {
        while (av[1][i])
            i++;
        while (av[1][--i])
            write(1, &av[1][i], 1);
    }
    write(1, "\n", 1);
    return 0;
}
```

- The program accepts command-line arguments `ac` (argument count) and `av` (argument vector). `ac` represents the total number of command-line arguments, and `av` is an array of strings containing the arguments.
- The variable `i` is initialized to 0 to serve as an index for iterating through the characters of the input string.
- The condition `if (ac == 2)` checks if the number of arguments is equal to 2, which means there is one string argument provided.
- Inside the `if` block, the code enters a loop that finds the length of the string. It increments `i` until it reaches the null-terminating character (`'\0'`).
- After determining the length of the string, the code enters another loop that starts from the last character of the string (`av[1][i]`) and writes each character to the standard output using the `write` function. The loop decrements `i` until it reaches the first character of the string.
- Finally, the newline character (`'\n'`) is written to the standard output using `write` outside the `if` block.

### Flowchart
```c
Start
|
|__ Is ac == 2?
|   |
|   |__ Yes
|   |  |
|   |  |__ Initialize i = 0
|   |  |
|   |  |__ Is av[1][i] != '\0'?
|   |     |
|   |     |__ Yes
|   |     |  |
|   |     |  |__ Increment i
|   |     |  |
|   |     |  |__ Go back to "Is av[1][i] != '\0'?"
|   |     |
|   |     |__ No
|   |        |
|   |        |__ Is av[1][i] != first character?
|   |           |
|   |           |__ Yes
|   |           |  |
|   |           |  |__ Write av[1][i]
|   |           |  |
|   |           |  |__ Decrement i
|   |           |  |
|   |           |  |__ Go back to "Is av[1][i] != first character?"
|   |           |
|   |           |__ No
|   |              |
|   |              |__ Write newline character
|   |              |
|   |              |__ End
|   |
|__ No
   |
   |__ Write newline character
   |
   |__ End
```

The flowchart illustrates the control flow of the code. It starts with the condition `ac == 2`. If true, it initializes `i` to 0 and enters a loop to find the length of the string. Then, it enters another loop to write the characters of the string in reverse order. Once all characters are written, it writes a newline character. If the condition `ac == 2` is false, it directly writes a newline character.

Overall, the code takes a string as input and prints it in reverse, followed by a newline character, if there is exactly one command-line argument provided.

## Subject: snake_to_camel

### Problem Description
The task is to write a program that takes a single string in `snake_case` format and converts it into a string in `lowerCamelCase` format.

A `snake_case` string is a string where each word is in lowercase, separated by an underscore `_`.

A `lowerCamelCase` string is a string where each word begins with a capital letter except for the first one.

### Input
The program expects a single command-line argument, which is the `snake_case` string to be converted.

### Output
The program prints the converted `lowerCamelCase` string to the standard output.

### Approach
1. Initialize a variable `i` to 0.
2. Check if the program has received exactly one command-line argument.
3. Iterate over each character in the input string using a `while` loop.
4. Inside the loop:
   - If the current character is an underscore `_`, skip it and convert the next character to uppercase by subtracting 32 from its ASCII value.
   - Write the current character to the standard output using the `write` function.
   - Increment `i` to move to the next character.
5. After the loop ends, write a newline character `\n` to the standard output.
6. Return 0 to indicate successful execution.

### Code Explanation
```c
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == '_')
            {
                i++;
                av[1][i] -= 32;
                i += write(1, &av[1][i], 1);
            }
            if (av[1][i] && av[1][i] != '_')
                i += write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
```

1. The program starts by including the necessary header file `unistd.h`, which provides the `write` function.
2. The `main` function is defined, which takes command-line arguments `ac` (argument count) and `av` (argument vector).
3. It initializes an integer variable `i` to 0.
4. It checks if the program has received exactly two command-line arguments (the program name and the input string).
5. If there are two arguments, it enters the `if` block and starts a `while` loop to iterate over the characters of the input string.
6. Inside the loop:
   - It checks if the current character is an underscore `_`.
   - If it is, it increments `i` to skip the underscore and converts the next character to uppercase by subtracting 32 from its ASCII value.
   - It writes the current character to the standard output using the `write` function and increments `i` to move to the next character.
   - If the current character is not an underscore, it writes it to the standard output and increments `i`.
7. After the loop ends, it writes a newline character `\n` to the standard output.
8. Finally, it returns 0 to indicate successful execution.

### Flowchart

```
Start
|
|-- Check command-line arguments
|   |
|   |-- Exactly 2 arguments
|   |   |
|   |   |-- Iterate over the input string
|   |   |   |
|   |   |   |-- Current character is underscore
|   |   |   |   |
|   |   |   |   |-- Skip underscore
|   |   |   |   |
|   |   |   |   |-- Convert next character to uppercase
|   |   |   |   |
|   |   |   |   |-- Write character to standard output
|   |   |   |   |
|   |   |   |   |-- Increment index
|   |   |   |
|   |   |   |-- Check if next character exists
|   |   |   |   |
|   |   |   |   |-- Next character exists and not an underscore
|   |   |   |   |   |
|   |   |   |   |   |-- Write next character to standard output
|   |   |   |   |   |
|   |   |   |   |   |-- Increment index
|   |   |   |
|   |   |   |-- No more characters
|   |   |   |   |
|   |   |   |   |-- Write newline character to standard output
|   |
|   |-- Other number of arguments
|       |
|       |-- No specific handling in the code
|
|-- Write newline character to standard output
|
|-- End
```


The flowchart above illustrates the logical flow of the program. It starts by checking the number of command-line arguments. If there are exactly two arguments, it enters the loop to iterate over the characters of the input string. Inside the loop, it checks if the current character is an underscore. If it is, it skips the underscore, converts the next character to uppercase, and writes it to the standard output. If the current character is not an underscore, it directly writes it to the standard output. After processing all characters, it writes a newline character and ends the program.

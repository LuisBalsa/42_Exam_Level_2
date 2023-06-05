
## Assignment: rot_13

### Subject

Write a program that takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead in alphabetical order. 'z' becomes 'm' and 'Z' becomes 'M'. The case remains unaffected. The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

### Code Explanation

The provided code solves the rot_13 assignment using the following steps:

1. The `ascii` function is defined to determine the ASCII value change for each character.
   - If the character is a lowercase letter between 'a' and 'm' (inclusive), or an uppercase letter between 'A' and 'M' (inclusive), it returns 13.
   - If the character is a lowercase letter between 'n' and 'z' (inclusive), or an uppercase letter between 'N' and 'Z' (inclusive), it returns -13.
   - Otherwise, it returns 0.

2. In the `main` function, the code checks if the number of arguments is equal to 2 (the program name and one input string).
   - If there are two arguments, the code proceeds to the next step. Otherwise, it prints a newline and exits.

3. The code iterates over each character in the input string using a while loop and an index `i`.
   - It adds the ASCII value change determined by the `ascii` function to the current character `av[1][i]`.
   - It writes the modified character to the standard output using the `write` function.
   - It increments `i` to move to the next character in the input string.

4. After processing all characters in the input string, the code writes a newline character to the standard output.


```
Original: a b c d e f g h i j k l m n o p q r s t u v w x y z
Rotated:  n o p q r s t u v w x y z a b c d e f g h i j k l m
```

For each lowercase letter, the corresponding rotated letter is 13 spaces ahead in alphabetical order. The same principle applies to uppercase letters. Lowercase 'a' becomes 'n', 'b' becomes 'o', and so on. Similarly, uppercase 'A' becomes 'N', 'B' becomes 'O', and so on.

Please note that this is a circular rotation, meaning that if the letter 'z' is rotated, it wraps around to the beginning of the alphabet. For example, 'z' becomes 'm' and 'Z' becomes 'M'.


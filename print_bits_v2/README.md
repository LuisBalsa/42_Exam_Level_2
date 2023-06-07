## Subject: Printing Bits in Binary

### Problem Description

The task is to write a function that takes a byte and prints its binary representation without a newline at the end. The function should be declared as follows:

```c
void print_bits(unsigned char octet);
```

For example, if the input byte is 2 (00000010 in binary), the function should print "00000010".

### Solution

The provided code implements the `print_bits` function correctly. Let's go through the code and understand how it works.

```c
void print_bits(unsigned char octet)
{
    int c = 0b10000000;
    int i;
    while (c)
    {
        i = ((octet & c) > 0) + '0';
        write(1, &i, 1);
        c = c >> 1;
    }
}
```

The function takes an unsigned char `octet` as input and starts by initializing an integer `c` with the binary value 10000000. This value represents the leftmost bit in an 8-bit binary number. 

Inside the `while` loop, the code checks if the bitwise AND operation between `octet` and `c` is greater than 0. If it is, it means that the corresponding bit in `octet` is set (1); otherwise, it's not set (0). This result is then converted to a character by adding the ASCII value of '0'. 

The converted character `i` is then written to the standard output using the `write` function, which prints the character without adding a newline. Finally, the value of `c` is right-shifted by 1, effectively moving to the next bit position.

This process continues until all bits of `octet` have been processed, as `c` becomes zero and the loop terminates.

### Example Usage

Here are a few examples demonstrating the usage of the `print_bits` function:

```c
print_bits(255);
// Output: 11111111

print_bits(128);
// Output: 10000000

print_bits(2);
// Output: 00000010
```

The `print_bits` function correctly prints the binary representation of the input byte, as expected.



```
Start
|
|---> Declare and initialize 'c' as 0b10000000 (128)
|
|---> Enter while loop
|      |
|      |---> Check if 'c' is non-zero
|      |      |
|      |      |---> Bitwise AND 'octet' and 'c'
|      |      |      |
|      |      |      |---> Is the result greater than 0?
|      |      |      |      |
|      |      |      |      |---> Yes:
|      |      |      |      |      |
|      |      |      |      |      |---> Convert 1 to character '1'
|      |      |      |      |      |
|      |      |      |      |      |---> Write character '1' to standard output
|      |      |      |      |
|      |      |      |      |---> No:
|      |      |      |      |      |
|      |      |      |      |      |---> Convert 0 to character '0'
|      |      |      |      |      |
|      |      |      |      |      |---> Write character '0' to standard output
|      |      |
|      |      |---> Right-shift 'c' by 1
|
|---> Continue loop until 'c' becomes zero
|
|---> End
```

This text flowchart breaks down the steps executed in the `print_bits` function. It starts with the initialization of `c` and then enters a while loop. Within the loop, it checks if `c` is non-zero and performs the bitwise AND operation between `octet` and `c`. Depending on the result, it converts it to a character ('0' or '1') and writes it to the standard output. Finally, it right-shifts `c` by 1 to move to the next bit position. The loop continues until `c` becomes zero, and then the function ends.

## Subject: pgcd

### Description
Write a program that takes two strings representing two strictly positive integers that fit in an `int`. The program should display their highest common denominator followed by a newline (always a strictly positive integer). If the number of parameters is not 2, display a newline.

### Examples

Input:
```
./pgcd 42 10
```
Output:
```
2
```

Input:
```
./pgcd 42 12
```
Output:
```
6
```

Input:
```
./pgcd 14 77
```
Output:
```
7
```

Input:
```
./pgcd 17 3
```
Output:
```
1
```

Input:
```
./pgcd
```
Output:
```

```

### Implementation

The provided code already solves the problem correctly. Here's a breakdown of the implementation:

1. The program starts by declaring variables `n1` and `n2` to store the two input integers, `i` to iterate through the numbers, and `com` to store the common divisor.

2. The code checks if the number of command-line arguments (`ac`) is 3, indicating that two integers have been provided as inputs.

3. If there are two inputs, the program converts the string arguments to integers using `atoi` and assigns them to `n1` and `n2`.

4. The code then starts a loop from 1 to the smaller of the two numbers (`n1` and `n2`).

5. Inside the loop, it checks if the current number (`i`) is a divisor of both `n1` and `n2`. If it is, the variable `com` is updated to store the common divisor.

6. After the loop completes, the program displays the value of `com`, which represents the highest common divisor.

7. Finally, the program prints a newline character to format the output correctly.

Overall, the program calculates the highest common divisor using a simple iterative approach by checking all numbers from 1 up to the smaller of the two input integers. It updates the common divisor whenever it finds a number that divides both input integers.

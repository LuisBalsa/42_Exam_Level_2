## ft_range

### Subject

Write a C function `ft_range` that takes two integers `start` and `end` as parameters. The function should allocate an array of integers using `malloc()`, fill it with consecutive values starting from `start` and ending at `end`, and return a pointer to the first element of the array. The array should include both `start` and `end`.

### Implementation

```c
#include <stdlib.h>

int *ft_range(int start, int end) {
    int i = 1;
    i -= 2 * (end < start);
    int len = (end - start) * i + 1;
    int *array = (int *)malloc(sizeof(int) * len);
    
    while (len--)
        array[len] = start + (len * i);
    
    return array;
}
```

The implementation starts by initializing `i` to 1. This variable is used to control the direction of filling the array. If `end` is less than `start`, `i` is set to -1, indicating that the array should be filled in a decreasing order. Otherwise, `i` remains as 1, indicating an increasing order.

The variable `len` is calculated as the difference between `end` and `start`, multiplied by `i`, plus 1. This determines the size of the array to be allocated.

A dynamic array of integers, `array`, is allocated using `malloc()` with a size equal to `len` times the size of an integer.

A while loop is used to fill the array. Starting from the last index of the array, each element is assigned a value based on the `start` value and the index, multiplied by `i`. This ensures that the array is filled in the desired order, either increasing or decreasing.

Finally, the function returns the pointer to the first element of the array.

### Flowchart

```mermaid
graph LR
A[Start] --> B[Initialize i]
B --> C[Calculate len]
C --> D[Allocate array]
D --> E[Fill array]
E --> F[Return array]
```

The flowchart above illustrates the steps followed by the implementation. It starts by initializing `i`, then calculates the length of the array. After that, the array is allocated and filled, and finally, the function returns the array pointer.

### Examples

1. Calling `ft_range(1, 3)` will return an array containing the elements 1, 2, and 3.
2. Calling `ft_range(-1, 2)` will return an array containing the elements -1, 0, 1, and 2.
3. Calling `ft_range(0, 0)` will return an array containing the element 0.
4. Calling `ft_range(0, -3)` will return an array containing the elements 0, -1, -2, and -3.

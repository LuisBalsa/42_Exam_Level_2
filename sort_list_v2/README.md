### Sort List

#### Subject

You are given the task to implement the `sort_list` function, which takes a linked list `lst` and a function pointer `cmp` as parameters. The function should sort the elements in the list based on the order defined by the `cmp` function, and return a pointer to the first element of the sorted list. The `cmp` function determines the order of two elements in the list.

#### Approach

To solve the problem, I used a simple sorting algorithm called Bubble Sort. Here's how the `sort_list` function works:

1. Initialize two pointers: `temp_lst` and `dummy`, both pointing to the head of the list.
2. Iterate through the list until the end (`lst && lst->next`).
3. Compare the current element (`lst->data`) with the next element (`lst->next->data`) using the `cmp` function.
4. If the elements are not in the right order (cmp returns 0), swap their positions.
   - If the current element is the head of the list (`lst == temp_lst`), update `temp_lst` to the next element (`temp_lst = lst->next`) and adjust the pointers accordingly.
   - If the current element is not the head, update the pointers to swap the current element with the next element.
5. Move the `dummy` pointer to the next position.
6. Repeat steps 3-5 until the entire list is sorted.
7. Return the updated `temp_lst`, which now points to the sorted list.

#### Code Explanation

Here is the code for the `sort_list` function:

```c
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *temp_lst = lst;  // Pointer to track the head of the sorted list
    t_list *dummy = lst;     // Pointer to track the previous element in each iteration

    while (lst && lst->next)
    {
        if (!cmp(lst->data, lst->next->data))  // If elements are not in the right order
        {
            if (lst == temp_lst)  // If current element is the head of the list
            {
                temp_lst = lst->next;
                lst->next = temp_lst->next;
                temp_lst->next = lst;
                dummy = temp_lst;
            }
            else  // If current element is not the head
            {
                lst = lst->next;
                dummy->next->next = lst->next;
                lst->next = dummy->next;
                dummy->next = lst;
                lst = temp_lst;
            }
        }
        else  // If elements are in the right order, move to the next element
        {
            dummy = lst;
            lst = lst->next;
        }
    }
    return temp_lst;  // Return the pointer to the sorted list
}
```

The `sort_list` function takes the linked list `lst` and the function pointer `cmp` as parameters. It initializes two pointers, `temp_lst` and `dummy`, to the head of the list. Then, it iterates through the list using a while loop.

Inside the loop, it compares the current element (`lst->data`) with the next element (`lst->next->data`) using the `cmp` function. If the elements are not in the right order, a series of pointer manipulations is performed to swap their positions.

After each iteration, the `dummy` pointer is moved to the next position, and the process continues until the entire list is sorted. Finally, the updated `temp_lst`, which points to the sorted list, is returned.



#### Example Usage

Here is an example usage of the `sort_list` function:

```c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int ascending(int a, int b)
{
    return (a <= b);
}

int main()
{
    // Create the linked list
    t_list *node = malloc(sizeof(t_list));
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));

    node->data = 1;
    node->next = node1;
    node1->data = 2;
    node1->next = node2;
    node2->data = 5;
    node2->next = node3;
    node3->data = 3;
    node3->next = node4;
    node4->data = 4;
    node4->next = NULL;

    // Sort the linked list
    t_list *sorted_list = sort_list(node, ascending);

    // Print the sorted list
    while (sorted_list)
    {
        printf("%d\n", sorted_list->data);
        sorted_list = sorted_list->next;
    }

    // Free the allocated memory
    free(node4);
    free(node3);
    free(node2);
    free(node1);
    free(node);

    return 0;
}
```

In the example, a linked list is created with elements [1, 2, 5, 3, 4]. The `sort_list` function is called with the `ascending` function as the comparison function. The sorted list is then printed to the console.

The expected output will be:

```
1
2
3
4
5
```

This indicates that the list has been sorted in ascending order..

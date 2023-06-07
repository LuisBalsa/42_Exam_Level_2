#include "list.h"
//#include "../../subjects/list.h"
//#include <stdio.h>
//#include <stdlib.h>

/*int ascending(int a, int b)
{
	return (a <= b);
}*/

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*temp_lst = lst;
	t_list	*dummy = lst;
	
	while(lst && lst->next)
	{
		if(!cmp(lst->data, lst->next->data))
		{
			if(lst == temp_lst)
			{
				temp_lst = lst->next;
				lst->next = temp_lst->next;
				temp_lst->next = lst;
				dummy = temp_lst;
			}
			else
			{
				lst = lst->next;
				dummy->next->next = lst->next;
				lst->next = dummy->next;
				dummy->next = lst;
				lst = temp_lst;
			}
		}
		else
		{
			dummy = lst;
			lst = lst->next;
		}
	}
	return (temp_lst);
}

/*int main()
{
	t_list* node = malloc(sizeof(t_list));
	t_list* node1 = malloc(sizeof(t_list));
	t_list* node2 = malloc(sizeof(t_list));
	t_list* node3 = malloc(sizeof(t_list));
	t_list* node4 = malloc(sizeof(t_list));
	
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

	t_list* sorted_list = sort_list(node, *ascending);

	while (sorted_list)
	{
		printf("%d\n", sorted_list->data);
		sorted_list = sorted_list->next;
	}

	free(node4);
	free(node3);
	free(node2);
	free(node1);
	free(node);

	return 0;
}*/

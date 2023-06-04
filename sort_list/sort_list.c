#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*temp_lst = lst;
	int	temp_data;
	if(!lst->next)
		return (lst);
	while(lst->next)
	{
		if(!cmp(lst->data, lst->next->data))
		{
			temp_data =lst->next->data;
			lst->next->data = lst->data;
			lst->data = temp_data;
			lst = temp_lst;
		}
		else
		lst = lst->next;
	}
	return (temp_lst);
}

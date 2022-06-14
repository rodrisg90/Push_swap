#include "push_swap.h"

int	check_sorted(t_Node *head_ref)
{
	while (head_ref->next != NULL)
	{
		if (head_ref->index > head_ref->next->index)
			return (0);
		head_ref = head_ref->next;
	}
	return (1);
}

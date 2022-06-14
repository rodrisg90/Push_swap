#include "push_swap.h"

void	push_B(t_Node **b_Ref, t_Node **a_Ref)
{
	t_Node	*newNode;

	newNode = *a_Ref;
	if (newNode == NULL)
	{
		return ;
	}
	*a_Ref = newNode->next;
	newNode->next = *b_Ref;
	*b_Ref = newNode;
	write(1, "pb\n", 3);
}

void	push_A(t_Node **b_Ref, t_Node **a_Ref)
{
	t_Node	*newNode;

	newNode = *b_Ref;
	if (newNode == NULL)
	{
		return ;
	}
	*b_Ref = newNode->next;
	newNode->next = *a_Ref;
	*a_Ref = newNode;
	write(1, "pa\n", 3);
}

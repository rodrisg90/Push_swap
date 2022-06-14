#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>
# include "libft.h"

typedef struct s_Node
{
	int				data;
	int				index;
	int				true;
	int				insertion;
	int				operations;
	struct s_Node	*next;
}			t_Node;

int		check_sorted(t_Node *head_ref);
void	push_B(t_Node **b_Ref, t_Node **a_Ref);
void	push_A(t_Node **b_Ref, t_Node **a_Ref);

#endif

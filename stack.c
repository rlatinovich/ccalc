#include "ccalc.h"

int stk_init(struct int_stack *stk)
{
	stk->root = NULL;
	stk->size = 0;
	return SUCCESS;
}

int stk_push(struct int_stack *stk, int n)
{
	struct int_node *nnode = 
		(struct int_node*) malloc(sizeof(struct int_node));
	if (NULL == nnode) 
		return FAIL;

	struct int_node *tnode = stk->root;

	nnode->value = n;
	nnode->next = tnode;
	
}

int stk_pop(struct int_stack *stk)
{


	return SUCCESS;
}

int stk_peek(struct int_stack stk)
{
	
	return SUCCESS;
}

void stk_print(struct int_stack stk)
{
	struct int_node *temp;
	temp = stk.root;

	printf("size: %d\n", stk.size);

	while (temp != NULL)
	{
		temp = temp->next;
		printf("%d\n", temp->value);
	}
}
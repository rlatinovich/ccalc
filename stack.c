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

	nnode->value = n;
	nnode->next = stk->root;
	stk->root = nnode;

	stk->size++;

	return SUCCESS;	
}

int stk_pop(struct int_stack *stk)
{
	int v;
	struct int_node *tnode;

	if (NULL == stk->root)
		return FAIL;

	tnode = stk->root;
	v = stk->root->value;
	
	stk->root = tnode->next;

	free(tnode);

	return v;
}

int stk_peek(struct int_stack stk)
{
	return stk.root->value;
}

void stk_print(struct int_stack stk)
{
	struct int_node *temp;
	temp = stk.root;

	printf("size: %d\n", stk.size);

	while (temp != NULL)
	{
		printf("%d\n", temp->value);
		temp = temp->next;
	}
}

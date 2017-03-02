#ifndef _STACK_H_
#define _STACK_H_

struct int_node
{
	int value;
	struct int_node *next;
};

struct int_stack
{
	int size;
	struct int_node root;
};

int stk_init(struct int_stack*);
int stk_push(struct int_stack*, int);
int stk_pop(struct int_stack*);
int stk_peek(struct int_stack);

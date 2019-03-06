#include "../include/clist.h"


void init_list(struct intrusive_list * list)
{
	list->head = 0;
}

void add_node(struct intrusive_list * list, struct intrusive_node * node)
{
	if(!node) return;
	if(list->head)
	{
		list->head->prev = node;
		node->next = list->head;
		node->prev = 0;
		list->head = node;
	}
	else
	{
		list->head = node;
		node->prev = node->next = 0;
	}	
}

void remove_node(struct intrusive_list * list, struct intrusive_node * node)
{
	if(!node) return;
	if(node->prev && node->next)
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
	}
	else if(node->next)
	{
		list->head = node->next;
		node->next->prev = node->prev;
	}
	else if(node->prev)
	{
		node->prev->next = node->next;
	}
	else
	{
		list->head = node->next = node->prev = 0;
	}
	
}

int get_length(struct intrusive_list * list)
{
	int length = 0;
	struct intrusive_node * node;
	for(node = list->head; node != 0; node = node->next) length++;
	return length;
}

#include "../include/clist.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_COMMAND_SIZE 8
#define COMMANDS_SIZE 6

struct position_node
{
  int x, y;
  struct intrusive_node node;
};
#define container_of(ptr) (struct position_node *)((char *)(ptr) - 2 * sizeof(int)) 

void remove_position(struct intrusive_list * list, int x, int y)
{
	int x1, y1;
	struct position_node * pnode;
	struct intrusive_node * node;
	struct intrusive_node test_node;
	add_node(list, &test_node);
	for(node = list->head->next; node != 0; node = node->next)
	{
		pnode = container_of(node);
		if(pnode->x == x && pnode->y == y)
		{
			node = node->prev;
			remove_node(list, &(pnode->node));
			free(pnode);
		}
	}
	remove_node(list, list->head);
}

void add_position(struct intrusive_list * list, int x, int y)
{
	struct position_node * node = malloc(sizeof(struct position_node));
	node->x = x;
	node->y = y;
	add_node(list, &(node->node));
}

void show_all_positions(struct intrusive_list * list)
{
	int x, y;
	struct position_node * pnode;
	struct intrusive_node * node;
	for(node = list->head; node != 0; node = node->next)
	{
		pnode = container_of(node);
		printf("(%d %d) ", pnode->x, pnode->y);
	}
	printf("\n");
}

void remove_all_positions(struct intrusive_list * list)
{
	struct position_node * node;
	while(list->head){
		node = container_of(list->head);
		remove_node(list, list->head);
		free(node);
	}
}

int strcmp(char * line1, char * line2)
{
	while((*line1) == (*line2) && (*line1) != 0 && (*line2) != 0)
	{
		line1++;
		line2++;
	}
	if((*line1) == 0 && (*line2) == 0) return 1;
	return 0;
}

int main()
{
	struct intrusive_list * list = malloc(sizeof(struct intrusive_list));
	init_list(list);
	char commands[COMMANDS_SIZE][MAX_COMMAND_SIZE] = {
	{"add"}, {"rm"}, {"print"}, {"rma"}, {"len"}, {"exit"}
	};
	int x, y;
	int com = -1;
	char command[32];
	int ip;
	int flag = 1;
	char c = 1;
	while(flag)
	{
		ip = 0;
		scanf("%c", &c);
		while(c != '\n' && c != ' ')
		{
			command[ip++] = c;
			scanf("%c", &c);
		}
		command[ip] = 0;
		
		com = -1;
		for(int i = 0; i < COMMANDS_SIZE; i++)
		{
			if(strcmp(command, commands[i]))
			{
				com = i;
				break;
			}
		}
		//printf("%s %d", command, com);
		switch(com)
		{
		default:
			printf("Unknown command\n");
			break;
		case 0:
			scanf("%d %d", &x, &y);
			scanf("%c", &c);
			add_position(list, x, y);
			break;
		case 1:
			scanf("%d %d", &x, &y);
			scanf("%c", &c);
			remove_position(list, x, y);
			break;
		case 2:
			show_all_positions(list);
			break;
		case 3:
			remove_all_positions(list);
			break;
		case 4:
			printf("%d\n", get_length(list));
			break;
		case 5:
			remove_all_positions(list);
			flag = 0;
			break;
		}
	}
	free(list);
  /* usage

     intrusive_list_t l;
     init_list(&l);

     add_position(&l, 10, 10);
     add_position(&l, 20, 20);

     show_all_positions(&l);

     return 0;
  */
}

#include "../include/clist.h"

struct position_node
{
  int x, y;
  struct intrusive_node * node;
};

void remove_position(intrusive_list * list, int x, int y)
{ // removes all (x, y) pairs

}

void add_position(intrusive_list * list, int x, int y)
{

}

void show_all_positions(intrusive_list * list)
{

}

void remove_all_positions(instrusive_list * list)
{

}

char ** split(char * line, int len, char symbol)
{
	int length = 0;
	int size = 0;
	for(int i = 0; i < len; i++)
		if(line[i] == symbol) size++;
	char ** lines = malloc(sizeof(char *) * size);
	for(int i = 0; i < len; i++)
	{
		if(
	}
}

int main()
{

  /* usage

     intrusive_list_t l;
     init_list(&l);

     add_position(&l, 10, 10);
     add_position(&l, 20, 20);

     show_all_positions(&l);

     return 0;
  */
}

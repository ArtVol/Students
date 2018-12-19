#include <stdio.h>
#include "../include/functions.h"

void logDebug(char message)
{
	char * mess;
	printf("----Log----\n------------\nMessage: ");
	switch(message)
	{
	case '!':
		printf("Main finished");
		break;
	case 'd':
		printf("DoComputation finished");
		break;
	case 'm':
		printf("Max finished");
		break;
	default:
		printf("Unknown flag");
		break;
	}
	printf("\n------------\n");
}

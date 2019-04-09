#include "../include/algorithm.h"

void logDebug(char in) {
 if( in == '!'){
	printf("End of programm\n");
} else if(in == 'd') {
	printf("DoComputation success\n");
} else if(in == 'm'){
	printf("Max success\n");
} else {
	printf("Unknown char\n");
}
}

#include "init.h"

int initialise( int init )
{
	int ret=0;
	if( init == 0 ) ret = 0;
	if( init == 1 ) ret = 1;

	printf("Initialise\r\n");
	
	return ret;	
}

#include "outputs.h"

int write_outputs( int outputs )
{
	int ret=0;
	if( outputs == 0 ) ret = 0;
	if( outputs == 1 ) ret = 1;
	
	printf("Outputs\r\n");
	
	return ret;	
}

#include "processing.h"

int processing( int processing )
{
	int ret=0;
	if( processing == 0 ) ret = 0;
	if( processing == 1 ) ret = 1;
	
	printf("Processing");
	
	return ret;	
}

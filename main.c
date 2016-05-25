#include "main.h"

int rv=0, rv1=0, rv2=0, rv3=0, rv4=0;

int main(void)
{
	rv1 = initialise(0);
	
	for(;;)
	{
		rv2 = read_inputs(0);
		rv3 = processing(0);
		rv4 = write_outputs(0);
		rv = rv1 | rv2 | rv3 | rv4;
		if( rv != 0 ) break;
	}
	return rv;
}

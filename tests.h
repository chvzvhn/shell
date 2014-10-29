
#include <string.h>

int testParseCmd() {
	char * input = "ls -o1 -o2 -o3";
	char ** output = { "ls" , "-o1" , "-o2" , "-o3", "\0" };
	char * testOut;
	parseCmd( input , testOut );
	
	int i;
	for ( i = 0 ; i < 5 ; i++ ) {
		if ( strcmp ( testOut , output ) != 0 ) return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}


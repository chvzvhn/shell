
#include "tests.h"
#include <string.h>

char ** parseCmd( char * input );

int main( int argc , char * argv[] ) {
	
	if ( testParseCmd() == EXIT_FAILURE) perror("parseCmd not working\n" )
	
	return EXIT_SUCCESS;
}

char **  parseCmd( char * input ) {
	/* 
	 * Takes the users command input and 
	 *  parses it into an argument vector
	 *  of NULL terminated strings 
	 *  terminated by a NULL pointer
	 */

	// count the number of white spaces
	int cmdCount = 0;

	char * tmp;
	char * unused;
	strcpy( tmp , input );
	
	char * word = strtok_r( tmp , " \t" , &unused );

	while ( word != NULL ) {
		cmdCnt++;
		word = strtok_r( NULL , " \t" , &unused );
	}

	char ** output = (char **) malloc( (cmdCnt + 1) * sizeof(char *) );
	
	strcpy( tmp , input );

	word = strtok_r( tmp , " \t" , &unused );
	int pos = 0

	while( word != NULL ) {
		output[pos] = (char *) malloc( sizeof(word) * sizeof(char) );
		output[pos] = word;
		pos++;

		word = strtok_r( NULL , " \t" , &unused );
	}

	output[pos] = (char *) malloc( sizeof(char) );
	output[pos] = "\0";

	return output;
}


	

	

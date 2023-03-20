#include <stdio.h>

#define NL 0

main()
{
	int c, nl;
	
	nl = NL;
		
	while((c=getchar()) != EOF)
		if ( c == '\n' )
			++nl;
	
	printf("%d\n", nl);
}
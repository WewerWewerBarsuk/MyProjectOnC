#include <stdio.h>

main()
{
	int c,i,j;	
	int digit[10];
	
	for(i = 0; i <= 10; i++)
		digit[i] = 0;
	
	while((c = getchar())!= EOF)
	{
		if (c == '\n')
			putchar('\n');		
		else if(c == 'w')
			++digit[0];
		else if (c == 'q')
			++digit[1];
		else if (c == 'e')
			++digit[2];
		else
			++digit[3];
		}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 1; j <= digit[i];j++)
		{
			if( i == 0 && j == 1 )
				putchar('w');
			else if( i == 1 && j == 1)
				putchar('q');
			else if( i == 2 & j == 1)
				putchar('e');
			else if( i == 3 & j == 1)
				putchar('o');
			
			putchar('*');
			
			if (j == digit[i])
				putchar('\n');
		}
	}
}
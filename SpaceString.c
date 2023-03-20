#include <stdio.h>
#include <string.h>

main()
{
	{
	int c,j;
	
	j = 'z';
	bool flag = false;
	
	while((c=getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (j == ' ')
				flag = true;
		
		}
		j = c;
		
		if (flag == false)
			putchar(c);
		else
		{
			flag = false;
			j = 'x';
		}
	}
	
}
	
}
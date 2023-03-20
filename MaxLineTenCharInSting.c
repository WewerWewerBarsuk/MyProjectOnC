#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int l
);
void copy(char to[MAXLINE][MAXLINE], char from[], int countstring);

main ()
{
	int len,i;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE][MAXLINE];
	int countstring = 10;

	max = 0;
	

		while((len = getline(line, MAXLINE)) > 0 )
		{
			if (len > 10)
			{			
				if (len > max)
				{
					max = len;
					copy(longest, line, countstring);
				}
			}
		}
	if(max > 0)
	{
		while( countstring >= 0)
		printf("%s", longest[countstring][MAXLINE]);
		countstring--;
	}
		
	

	return 0;
}

int getline(char s[], int lim)
{
	int c, i, k=0	;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
		s[i] = c;

	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}

void copy(char to[MAXLINE][MAXLINE], char from[], int str)
{
	int i;
	i = 0;
	while(str >= 0)
	{
		while ((to[str][i] = from[i]) != '\0')
			++i;
	str--;
	}
}
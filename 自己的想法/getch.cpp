# include <stdio.h>
# include <conio.h>
# include <stdlib.h>

int main(void)
{
	char c;
	c = getch();
	switch(c)
	{
		case 27:
			exit(0);
			break;
		case 1:
		    printf("hehe"); 
		    break;
	}
	
	return 0;
}

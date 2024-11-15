#include <stdio.h>

int main()
{
	printf("'stdin' file number is %d\n",fileno(stdin));
	printf("'stdin' file number is %d\n",fileno(stdout));
	printf("'stdin' file number is %d\n",fileno(stderr));

	return(0);
}

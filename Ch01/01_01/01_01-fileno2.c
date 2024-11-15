#include <stdio.h>

int main()
{
	FILE *f[3];

	/* file opened without error checking */
	for(int i=0; i<3; i++)
		f[i] = fopen("temp","w");

	for(int i=0; i<3; i++)
		printf("File n%d's number is %d\n",i,fileno(f[i]));

	fclose(f[0]);
	puts("\nClosing first file...\n");

	for(int i=1; i<3; i++)
		printf("File n%d's number is %d\n",i,fileno(f[i]));

	FILE *f4 = fopen("temp","w");
	puts("\nOpening another file...\n");

	for(int i=1; i<3; i++)
		printf("File n%d's number is %d\n",i,fileno(f[i]));

	printf("The newly opened file's number is %d\n",fileno(f4));

	for(int i=1; i<3; i++)	
		fclose(f[i]);
	
	fclose(f4);

	return 0;
}

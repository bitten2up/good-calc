#include <stdio.h>

int main(int argc, char** argv){
	if (argc!=3)
	{
		printf("put the values to add in this format %s NUMBER_1 NUMBER_2\n", argv[0]);
		return 1;
	}
	const char* a=argv[1];
	const char* b=argv[2];
	const char c=a[0]+b[0];
	printf("the answer is: %c\n", c);
}

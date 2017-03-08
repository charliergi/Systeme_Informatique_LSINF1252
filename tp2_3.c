#include <stdio.h>
main(int argc, char *argv[])
{
	char *ptr = "Test";
	while(*ptr != '\0'){
	
	printf("%c",*ptr);
	printf("%p\n",ptr);
	ptr++;
}
}

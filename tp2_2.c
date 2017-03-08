#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[])
{
int result = 1;
int bit = atoi(argv[1]);
	while(bit % 2 == 0)
	{
		bit=bit>>1;
		result=result*2;
	}
printf("lower = %d\n",result);

/*printf("%d\n",bit % 2);*/
}

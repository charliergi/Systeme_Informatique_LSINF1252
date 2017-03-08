#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int tab[5] = (int *)malloc(sizeof(int)*5);
	*tab={1, 2, 3 ,4 ,5};
	printf("%p\n", *tab);
return 0;
}

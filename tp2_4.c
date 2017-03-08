#include <stdio.h>
struct foo_t {
char a;
int b;
};

int main (int argc, char *argv[]){
struct foo_t test = {'a', 5};
printf("%ld bytes\n",sizeof(test));
return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct fract_t {
        int num;
        int denum;
};

/*void swap(struct fract_t a, struct fract_t b);*/
int main(int argc, char *argv[])
{

struct fract_t test1;
struct fract_t test2;
test1.num=1;
test1.denum=1;
test2.num=2;
test2.denum=2;
/*swap(&test1,&test2);*/
printf("%d\n",test1.num);
return 0;
}
void swap(struct fract_t *a, struct fract_t *b){
int saved_1 = a.num;
int saved_2 = a.denum;
a.num = b.num;
a.denum = b.denum;
b.num = saved_1;
b.denum = saved_2;
}


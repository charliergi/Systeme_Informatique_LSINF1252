#include <stdlib.h>
#include <stdio.h>
typedef struct vector_t {
  int size;
  float *v;
} Vector;
// initialise le vecteur à la valeur du réel
struct vector_t* init(int *a, float *b){ // float useless
	struct vector_t* test = (Vector *)malloc(sizeof(Vector));
	test->size=*a;
	test->v=b;
	return test;
}
// récupère le nième élément
float get(Vector *, int b){

}
// fixe la valeur du nième élément
void set(struct vector_t *, int a, float b){}
// supprime un vecteur
void destroy(struct vector_t *){}

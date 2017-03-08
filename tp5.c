#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
/// ATTENTION gcc tp5.c -lpthread ///// pour compiler


////// QUESTION 2 ///////////////
//CREATE ecrit pour creer des variables qui creent le thread --> besoin de pointeur
//JOIN veut juste lire les données donc pas besoin de modifier. --> pas besoin de pointeur

/////////// QUESTION 1 ///////////////
// (void *) est le type nécessaire pour passer en paramètre des arguments pour une methode executee par le thread en QUESTION
// d'abord creer une structure 
struct charint{
    int i;
    char c;
};

// fonction a executer dans le thread
void *f(void * ci){ 
    struct charint* cis = (struct charint *) ci;
    printf("%d, %i\n", cis->i, cis->c);
    return NULL; // ??? on est sense retourner un pointeur void*.
}
 int main(){
// declarer la structure
struct charint ci;
ci.i = 1;
ci.c = 's';
int count = 0;
while(count<1000000){
    pthread_t thread ; // on a mis le thread complet sur la stack (donc pas thread_t *thread qui renvoie un pointeur vers nulle part)


    int x  = pthread_create(&thread,NULL, &f, (void *) &ci );
    if (!x) {// renvoie l'adresse vers la stack (NULL pour les arguments, regarder manpage pour infos,   )
    pthread_join(thread, NULL);
    count ++ ;  
    return EXIT_SUCCESS;
    }
    else{
        return EXIT_FAILURE;
    }
}
printf("%d", count); 
return 0;
}

//// QESTION 6 //////////////
// stop le thread vs stop le programme
///// QUESTION 7 /////////////
// pas de p_thread join, donc ca ne sert  a rien 
// ca ne bloque pas le programme, 
// une fois qu'on a pthread create, on a fini le create, et donc on ne peut plus acceder a v après le launch
// on ne laissse pas le temps que le thread finisse son travail, car on a coupe son processus
/////////////////////// QUESTION 1 //////////////////////////
/*
 * initialise un tableau de 40 mo et utilise la localite spatiale
**/
int *memory;
memory = (int *)malloc(10000000*sizeof(int));
int i;
for(i=0;i<10000000;i++){
*(memory + 1) = 1252;
}

/*
 * initialise un tableau qui utilise pas bien le cache (le cache contient des elements ininteressants)
 * et fais des sauts avec le tableau qui est plus gros que le cache.
 */
int main(){
    int taille = 200*1000*1000;
    int *grostableau = (int *)malloc(taille*sizeof(int));
    int i=0;
    for(i,i<taille;i=(i+1000001)%taille){
        grostableau[i]=1252;
    }
    free(*grostableau);
    return EXIT_SUCCESS;
}
//////////////////// QUESTION 2 ///////////////////////////////

/*
 * calculer le temps --> attention : comparer les micros sec et sec car invariant que micro_s [0-999]
 */
 struct timeval{
    long tv_secs;
    long tv_usecs;
 }
 /*
  * Question 3 : ligne par ligne car colonne par colonne, on va devoir passer de colonne à colonne dans le cache.
  */ 
  
  
  /*
   * Question 4 : code assembleur de ce code.
   */
   if(a>0){ 
       b=1; 
    }
    else{ 
        b=0; 
    }
    
    compl $0 , %eax ; // compare 0 à a, stocke le resultat (SF, ZF)
    jg L1 // jump à L1 si SF = 0 (le resultat n'est pas negatif) et ZF = 0 (le resultat est pas = 0)
    movel $0 , %ecx ; // b=0
    jmp L2  // Saute b=1
L1 :movl $1 %ecx ; // Met 1 à %ecx (b) --> b=1
L2 : ///// suite du programme //// 
    
///////////////////////// QUESTION 1 BIS ///////////////////////////////
ADRESSE | VALEUR
        |
        |
        |
        |
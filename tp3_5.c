#include <stdio.h>
int main(int argc, char *argv[]){ // regarder quel element est le suivant dans les int stockés dans la pile.
	int tab [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	if(**(tab+1)==2){
		printf("ligne d'abord\n");
	}
	else if(**(tab+1)==4){
		printf("colonne d'abord\n");
	}
	else {
		printf("erreur");
	}
//printf("%d\n", **(tab + 1)); // gcc fait automatiquement +1 au niveau de l'adresse au lieu de +1 bit (donc passe au int suivant au lieu d'avancer d'un bit)
return 0;
}

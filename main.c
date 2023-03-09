// fct 1 tab de alea de 1 à 6
// fct 2 tab chiffre devien lettre (P = 1 ...)
//fct 3 saisir --> 4 valeur de int et les fout dans un tab
// fct rangement --> 2 param un tab (vide <-- rangement alea 0 et 2) + une variable²
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void afficher(int tab[4]){
    for(int i = 0; i < 4; i++ ){
        printf("%d, ", tab[i]);
    }
}


// ------------------------------------------------ 1ER GRANDE FONCTION : COMPO ----------------------------------
int ft_petite_verif(int tab[4], int x){
    int i=0;
    while(i<4){
        if (tab[i] == x && tab[i] != 0){
            return 9;
        }
        i++;
    }
    return 0;
}

int verifZero(int tab[4]){
    for (int i = 0; i < 4; i++)
    {
        if(tab[i] == 0){
            return 1;
        }        
    }
    return 0;
}

// composition :
void ft_creer_compo(int tab[4]){

    int x;
    int i = 0;
    int verif = 1;
    while(verif != 0){
        x = rand() % 6 + 1;
        int isGood = ft_petite_verif(tab, x);
        if(isGood == 0){
            tab[i] = x;
            i++;
        }
        verif = verifZero(tab);
    }
    afficher(tab);

}
// ------------------------------------------------ 1ER GRANDE FONCTION : COMPO ----------------------------------


// ------------------------------------------------ 2E GRANDE FONCTION : ANALOGIE (LETTRE = CHIFFRE) ----------------------------------

define {
    
}

void ft_converter(int tab[4]){



}




int main(){
    srand(time( NULL ) );
    int tab[4] = {0,0,0,0};
    ft_creer_compo(tab);
    


}
#include <stdio.h>
int main(){
    int i;
    int n_aumentata=0;
    int n_diminuita=0;
    float temp;
    for(i=0; i<10; i++){
        printf("Inserisci la temperatura: ");
        scanf("%f", &temp);
        if(temp>5){
            n_aumentata++;
        }
        else if (temp<5) {
            n_diminuita++;
        }
    }
    printf("La temperatura e' aumentata %d volte.\n", n_aumentata);
    printf("La temperatura e' diminuita %d volte.", n_diminuita);

}

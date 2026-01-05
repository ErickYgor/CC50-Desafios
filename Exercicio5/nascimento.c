#include <stdio.h>

int main(void){

    int populacao, numeroFinal, ano = 0;

    do{
        printf("Digite a populacao inicial: ");
        scanf("%d", &populacao);
    }while(populacao < 9);
    
    do{
        printf("Digite a populacao final: ");
        scanf("%d", &numeroFinal);
    }while(numeroFinal <= populacao);
    

    while (populacao < numeroFinal) {
        int nascimento = populacao / 3; 
        int morte = populacao / 4;     
        
        populacao = populacao + nascimento - morte;
        ano++;
    }

    printf("Anos necessarios: %d\n", ano);

}
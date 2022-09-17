#include <stdio.h>
#include <stdlib.h>


void LerVetor()
{
    int vetor[3],i;
    printf("Digite os elementos do vetor:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Elemento %d:\n",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("Vetor:\n[ ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("]\n");
}
int main(){
    LerVetor();
    return 0;
}
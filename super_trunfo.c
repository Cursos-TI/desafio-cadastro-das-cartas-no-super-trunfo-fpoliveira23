#include <stdio.h>
#include <stdlib.h> 

int main(void) 
{
    //variáveis de entrada 

    char estado1,estado2;
    char cod1[]="000",cod2[]="000";
    char cidade1[100],cidade2[100];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int pontosturistico1,pontosturistico2;

    // entrada variaveis estado 1
       
    printf("Digite o estado : \n");   
    scanf("%c",&estado1);    

    printf("Digite o codigo do cidade : \n");    
    scanf("%s",cod1);
    
    printf("Digite a cidade sem espaco: \n");    
    scanf("%s",cidade1);   

    printf("Digite a populacao : \n");      
    scanf("%d",&populacao1);
    
    printf("Digite a area : \n");   
    scanf("%f",&area1);

    printf("Digite o pib : \n");       
    scanf("%f",&pib1);

    printf("Digite a quantidade de pontos turisticos : \n");      
    scanf("%d",&pontosturistico1);

    // entrada variaveis estado 2

    printf("Digite o estado : \n");
    scanf(" %c",&estado2);

    printf("Digite o codigo do cidade : \n");
    scanf("%s",cod2);

    printf("Digite a cidade sem espaco: \n");
    scanf("%s",cidade2);

    printf("Digite a populacao : \n");
    scanf("%d",&populacao2);

    printf("Digite a area : \n");
    scanf("%f",&area2);

    printf("Digite o pib : \n");
    scanf("%f",&pib2);

    printf("Digite a quantidade de pontos turisticos : \n");
    scanf("%d",&pontosturistico2);

    //saida
    //carta1
    printf("Carta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",cod1);
    printf("nome da cidade: %s\n",cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f Km2\n",area1);
    printf("PIB: %.2f bilhoes de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n",pontosturistico1);

    //carta2
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",cod2);
    printf("nome da cidade: %s\n",cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f Km2\n",area2);
    printf("PIB: %.2f bilhoes de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",pontosturistico2);

    system("pause");
    return 0;

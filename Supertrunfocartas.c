#include <stdio.h>


int main() {

   char codigo[20];
   char nomeCidade[20];
   char estado [20];
   int Carta1, Carta2;
   unsigned  populacao,b2populacao;
   float Área,b2Área;
   float PIB,b2PIB;  
   int numeroturisticos,b2numeroturisticos;
   char Codigo[20];
   char b2nomeCidade[20];
   char Estado [20];
   float soma;
   float soma2;
   float SuperPoder;

//carta 01
   printf("Carta1 \n");

   printf("Estado = "); 
   scanf("%s",estado);

   printf("População = "); 
   scanf("%d",&populacao);

   printf("Nome da cidade = "); 
   scanf("%s",nomeCidade);

   printf(" Área = ");
   scanf("%f", &Área);

   printf("Código = "); 
   scanf("%s",codigo);

   printf(" PIB = ");
   scanf("%f", &PIB);

   printf("Número de pontos turistico = ");
   scanf("%d",&numeroturisticos);

   soma = (populacao + Área) / 2;

   soma2 = (PIB + populacao) /2;
 
 
   //retorno de informações
   printf("Carta 01 \n");
   printf("Estado: %s\n População: %d\n", estado , populacao);
   printf("Nome da Cidade: %s\n", nomeCidade);
   printf(" Código: %s\n Área : %f\n",codigo, Área);
   printf("PIB:%f\n  Número de ponto Turístico: %d\n", PIB , numeroturisticos );
   printf("Densidade Populacional: %.2f\n", soma);
   printf("PIB per Capita: %.2f\n", soma2);


   
  //carta 02

    printf("Carta2 \n");

    printf("Estado = "); 
    scanf("%s", Estado);

    printf(" População = "); 
    scanf("%d",&b2populacao);
    
    printf("Nome da cidade = "); 
    scanf("%s", b2nomeCidade);

    printf(" Área = ");
    scanf("%f", &b2Área);
    
    printf("Código = "); 
    scanf("%s", Codigo);

    printf(" PIB = ");
    scanf("%f", &b2PIB);


    soma = (b2populacao + b2Área) / 2;

    soma2 = (b2PIB + b2populacao) /2;

     

    printf(" Número de pontos turistico = ");
    scanf("%d",&b2numeroturisticos);
  //retorno de informações
    printf(" Carta 02 \n");
    printf("Estado: %s\n População: %d\n", Estado , b2populacao);
    printf("Nome da Cidade: %s\n", b2nomeCidade);
    printf("Área : %f\n  Código: %s\n ",Codigo , b2Área);
    printf("Seu PIB: %f\n  Número de pontos Turístico: %d\n", b2PIB , b2numeroturisticos);
    printf("Densidade Populacional: %.2f\n", soma);
    printf("PIB per Capita: %.2f\n", soma2);

 // comparações finais e ganhador;
   printf( "  população: %u\n", (populacao) > (b2populacao));
   printf( "  Área: %d\n", (Área)>(b2Área));
   printf( "  PIB: %d\n", (PIB)> (b2PIB)); 
   printf( " Pontos turístico: %d\n",(numeroturisticos)>(b2numeroturisticos));
   printf( " Densidade Populacional %d\n", (soma) < (soma));
   printf( " PIB per Capital %d\n", (soma2) > (soma2));
   printf("Super Poder %d\n", (Carta1)>(Carta2));

    return 0;
}

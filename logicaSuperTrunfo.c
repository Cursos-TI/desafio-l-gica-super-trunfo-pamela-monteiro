#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {


     // Estado 1
     char estado1[3];  
     char codigo1[10];
     char cidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int pontos_turisticos1;
 
     // Estado 2
     char estado2[3];
     char codigo2[10];
     char cidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontos_turisticos2;
 
     // Entrada de dados primeiro estado
     printf("Digite o estado 1:\n");
     scanf("%s", estado1);
 
     printf("Digite o codigo da cidade:\n");
     scanf("%s",codigo1);
 
     printf("Digite o nome da cidade:\n");
     scanf("%s", cidade1);
 
     printf("Digite a População:\n");
     scanf("%d", &populacao1);
 
     printf("Digite a área:\n");
     scanf("%f", &area1);
 
     printf("Digite o PIB:\n");
     scanf("%f", &pib1);
 
     printf("Digite o numero de Pontos Turisticos:\n");
     scanf("%d", &pontos_turisticos1);
 
     
       // Entrada de dados estado2
 
       printf("Digite o estado 2:\n");
       scanf("%s", estado2);
   
       printf("Digite o codigo da cidade:\n");
       scanf("%s", codigo2);
   
       printf("Digite o nome da cidade:\n");
       scanf("%s", cidade2);
   
       printf("Digite a População:\n");
       scanf("%d", &populacao2);
   
       printf("Digite a área:\n");
       scanf("%f", &area2);
   
       printf("Digite o PIB:\n");
       scanf("%f", &pib2);
   
       printf("Digite o numero de Pontos Turisticos:\n");
       scanf("%d", &pontos_turisticos2);


    
       if(populacao1>= populacao2){
        printf("População 1 é maior ou igual a população 2.\n");
       }else{
        printf("População 2 é menor que População 1\n");
       }

       if(area1<= area2){
        printf("Area 1 é menor ou igual a Area 2\n");
       }else{
        printf("A area1 é maior que a area2\n");
       }

       if(pib1== pib2){
        printf("O PIB 1 é igual ao PIB2\n");
       }else{
        printf("O PIB 1 não é igual ao PIB 2\n");
       }

       if(pontos_turisticos1>pontos_turisticos2){
        printf("A cidade 1 tem mais pontos turisticos que a cidade 2\n");
       }else{
        printf("A cidade 1 não tem mais pontos turisticos que a cidade 2\n");
       }
       

       printf("Resultado:\n");

       if(populacao1>= populacao2){
        printf("O estado 1 Venceu, com a maior população!\n");
       }else{
        printf("O estado 2 venceu, com maior população!\n");
       }

       if(area1<= area2){
        printf("O estado 1 Venceu, com a  maior area!\n");
       }else{
        printf("O estado 2 Venceu, com a  maior area!\n");
       }

       if(pib1== pib2){
        printf("O estado 1 Venceu, com o maior PIB!\n");
       }else{
        printf("O estado 2 Venceu, com o maior PIB!\n");
       }

       if(pontos_turisticos1>pontos_turisticos2){
        printf("O estado 1 Venceu, com mais pontos turisticos!\n");
       }else{
        printf("O estado 2 Venceu, com mais pontos turisticos\n");
       }



    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}

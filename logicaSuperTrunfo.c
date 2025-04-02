#include <stdio.h>
int main() {
    //código reciclado do trabalho anterior
    //dados predefinidos, de acordo com o pedido do desafio
    unsigned long int populacao, populacao2;
    int ponto_, ponto_2;
    int cidade, city;
    float area, area2;
    float PIB, PIB2;
    char estado [20], state [20];
    char nome [30], nome_ [30];
    float pib_;
    float pib_2;
    float demo;
    float demo2;
    
    //Estrutura do projeto anterior
    printf ("Bem vindo ao Super Trunfo! \n");
    printf ("Neste jogo, teremos que cadastrar cartas de cidades com suas informações e atributos.\n");
    printf ("Em seguida faremos uma comparação das cartas com base nos atributos apresentados.\n");
    printf ("Agora vamos cadastrar duas cartas. \n");
    
    //início da coleta de dados
    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &estado);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidade \n");
    scanf("%d", &cidade);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%d", &populacao);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos Km² a sua cidade possui: \n");
    scanf ("%f", &area);            
    printf("Excelente! Por último, informe o PIB (em bilhão) da sua cidade: \n");
    scanf("%f", &PIB);
    printf(" \n");
    printf ("Finalizamos a primeira carta! Agora vamos criar a segunda. \n");
    printf(" \n");
    
    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &state);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidade \n");
    scanf("%d", &city);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome_);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%d", &populacao2);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_2);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos Km² a sua cidade possui: \n");
    scanf ("%f", &area2);            
    printf("Excelente! Por último, informe o PIB (em bilhão) da sua cidade: \n");
    scanf("%f", &PIB2);
    printf(" \n");
    
    //início da exibição das cartas prontas
    printf("Agora que cadastramos as suas duas cartas, vamos vizualizar o resultado da comparação: \n");
    printf(" \n");
    printf("Código do município: %s%d \n", estado, cidade);
    printf("Estado: %s \n", estado);
    printf("Cidade: %d \n", cidade);
    printf("Nome: %s \n", nome);
    printf("População: %d habitantes \n", populacao);
    printf("Quantidade de pontos turísticos: %d \n", ponto_);
    printf("Área da cidade: %.2f Km² \n", area);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB);
    
    demo = populacao / area;
    
    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo);
    
    pib_ = (PIB*1000000000  / populacao);
        
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_);
    printf(" \n");
    printf("Código do município: %s%d \n", state, city);
    printf("Estado: %s \n", state);
    printf("Cidade: %d \n", city);
    printf("Nome: %s \n", nome_);
    printf("População: %d habitantes \n", populacao2);
    printf("Quantidade de pontos turísticos: %d \n", ponto_2);
    printf("Área da cidade: %.2f Km² \n", area2);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB2);
    
        demo2 =  populacao2 / area2;
        
    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo2);
    
        pib_2 = (PIB2*1000000000 / populacao2);
        
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_2);
    printf(" \n");
    
    //após a apresentação das cartas, realiza-se a comparação
    printf("==================================== \n");
    printf("RESULTADO DA COMPARAÇÃO (Atributo - População): \n");
    printf("Carta %s%d - %s: %d \n", estado, cidade, nome, populacao);
    printf("Carta %s%d - %s: %d \n", state, city, nome_, populacao2);
    
    //uso das condicionais para a comparação e exibição dos resultados
    if (populacao > populacao2){
        printf("Resultado: Carta %s%d (%s) venceu! \n", estado, cidade, nome);
    } else{
        printf("Resultado: Carta %s%d (%s) venceu! \n", state, city, nome_);
    } if (populacao == populacao2){
        printf("Resultado: Não houve vencedor (empate) \n.");
    }
    printf("==================================== \n");
        return 0;
    }
#include <stdio.h>

int main() {
    //código reciclado dos trabalhos anteriores
    unsigned long int populacao, populacao2;
    int ponto_, ponto_2;
    int cidade, city;
    int escolha, escolha2;
    int condicao, condicao2;
    char estado [20], state [20];
    char nome [20], nome_ [20];
    //constante diferente utilizada para trazer a mudança de variáveis no fim do código
    const char *delta = "you", *delta2 = "you";
    float area, area2;
    float PIB, PIB2;
    float pib_, pib_2; 
    float demo, demo2;
    float valor1, valor2, valor3, valor4;

    //Estrutura dos projetos anteriores
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
    scanf ("%lu", &populacao);
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
    scanf ("%lu", &populacao2);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_2);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos Km² a sua cidade possui: \n");
    scanf ("%f", &area2);            
    printf("Excelente! Por último, informe o PIB (em bilhão) da sua cidade: \n");
    scanf("%f", &PIB2);
    printf(" \n");
    
    //início da exibição das cartas prontas
    printf("Agora que cadastramos as suas duas cartas, vamos vizualizar o que temos: \n");
    printf(" \n");
    printf("=======================================================\n");
    printf("Código do município: %s%d \n", estado, cidade);
    printf("Estado: %s \n", estado);
    printf("Cidade: %d \n", cidade);
    printf("Nome: %s \n", nome);
    printf("População: %lu habitantes \n", populacao);
    printf("Quantidade de pontos turísticos: %d \n", ponto_);
    printf("Área da cidade: %.2f Km² \n", area);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB);
    
    demo = populacao / area;
    
    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo);
    
    pib_ = (PIB*1000000000  / populacao);
        
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_);
    printf("========================================================\n");
    printf(" \n");
    printf("======================================\n");
    printf("Código do município: %s%d \n", state, city);
    printf("Estado: %s \n", state);
    printf("Cidade: %d \n", city);
    printf("Nome: %s \n", nome_);
    printf("População: %lu habitantes \n", populacao2);
    printf("Quantidade de pontos turísticos: %d \n", ponto_2);
    printf("Área da cidade: %.2f Km² \n", area2);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB2);
    
    demo2 =  populacao2 / area2;
        
    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo2);
    
    pib_2 = (PIB2*1000000000 / populacao2);
        
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_2);
    printf("=========================================================\n");
    printf(" \n");
    
    //após a apresentação das cartas, realiza-se a comparação

    //espaço de escolha do usuário
    printf("Agora que temos as cartas, faremos a comparação entre dois atributos das mesmas. \n");
    printf("Para selecionar o atributo de comparação basta selecionar o número correspondente.\n");
    printf("Por exemplo, para comparar as populações de ambas as cartas digite 1. \n");
    printf("\n");
    //estrutura de escolha do usuário
    printf("Hora de escolher! Selecione o número correspondente ao atributo de sua escolha.\n");
    printf("\n");
    printf("Digite '1' para Realizar a comparação populacional.\n");
    printf("Digite '2' para Realizar a comparação da área.\n");
    printf("Digite '3' para Realizar a comparação PIB.\n");
    printf("Digite '4' para Realizar a comparação do número de pontos turísticos.\n");
    printf("Digite '5' para Realizar a comparação da densidade demográfica.\n");
    scanf("%d", &escolha);
    printf("=========================================================== \n");

    //estrutura de resultados
    switch (escolha)
    {
    //uso das condicionais para a comparação e exibição dos resultados
    //aqui ocorre a troca dos valores pelos seus correspondentes numéricos
    case 1:
        valor1 = (unsigned long int) populacao;
        valor2 = (unsigned long int) populacao2;
        delta = "POPULAÇÃO";
        printf("Hora de escolher o segundo atributo! Selecione o número correspondente ao segundo atributo.\n");
        printf("\n");
        printf("Digite '2' para Realizar a comparação da área.\n");
        printf("Digite '3' para Realizar a comparação PIB.\n");
        printf("Digite '4' para Realizar a comparação do número de pontos turísticos.\n");
        printf("Digite '5' para Realizar a comparação da densidade demográfica.\n");
        scanf("%d", &escolha2);
        break;
    case 2:
        valor1 = area;
        valor2 = area2;
        delta = "ÁREA";
        printf("Hora de escolher o segundo atributo! Selecione o número correspondente ao segundo atributo.\n");
        printf("\n");
        printf("Digite '1' para Realizar a comparação populacional.\n");
        printf("Digite '3' para Realizar a comparação PIB.\n");
        printf("Digite '4' para Realizar a comparação do número de pontos turísticos.\n");
        printf("Digite '5' para Realizar a comparação da densidade demográfica.\n");
        scanf("%d", &escolha2);
        break;
    case 3:
        valor1 = PIB;
        valor2 = PIB2;
        delta = "PIB";
        printf("Hora de escolher o segundo atributo! Selecione o número correspondente ao segundo atributo.\n");
        printf("\n");
        printf("Digite '1' para Realizar a comparação populacional.\n");
        printf("Digite '2' para Realizar a comparação da área.\n");
        printf("Digite '4' para Realizar a comparação do número de pontos turísticos.\n");
        printf("Digite '5' para Realizar a comparação da densidade demográfica.\n");
        scanf("%d", &escolha2);
        break;
    case 4:
        valor1 = ponto_;
        valor2 = ponto_2;
        delta = "PONTOS TURÍSTICOS";
        printf("Hora de escolher o segundo atributo! Selecione o número correspondente ao segundo atributo.\n");
        printf("\n");
        printf("Digite '1' para Realizar a comparação populacional.\n");
        printf("Digite '2' para Realizar a comparação da área.\n");
        printf("Digite '3' para Realizar a comparação PIB.\n");
        printf("Digite '5' para Realizar a comparação da densidade demográfica.\n");
        scanf("%d", &escolha2);
        break;
    case 5:
        valor1 = demo;
        valor2 = demo2;
        delta = "DENSIDADE DEMOGRÁFICA";
        printf("Hora de escolher o segundo atributo! Selecione o número correspondente ao segundo atributo.\n");
        printf("\n");
        printf("Digite '1' para Realizar a comparação populacional.\n");
        printf("Digite '2' para Realizar a comparação da área.\n");
        printf("Digite '3' para Realizar a comparação PIB.\n");
        printf("Digite '4' para Realizar a comparação do número de pontos turísticos.\n");
        scanf("%d", &escolha2);
        break;
    default:
        printf ("Opção inválida!");
        break;
    } 

    //exibição final das comparações ocorridas
    switch (escolha2)
    {
    case 1:
        valor3 = (unsigned long int) populacao;
        valor4 = (unsigned long int) populacao2;
        delta2 = "POPULAÇÃO";
        break;
    case 2:
        valor3 = area;
        valor4 = area2;
        delta2 = "ÁREA";
    break;
    case 3:
        valor3 = PIB;
        valor4 = PIB2;
        delta2 = "PIB";
    break;
    case 4:
        valor3 = ponto_;
        valor4 = ponto_2;
        delta2 = "PONTOS TURÍSTICOS";
    break;
    case 5:
        valor3 = demo;
        valor4 = demo2;
        delta2 = "DENSIDADE DEMOGRÁFICA";
    break;
    
    default:
        printf("Opção inválida \n");
        break;
    }

    //exibição final das comparações ocorridas
    printf("================================================ \n");
    printf("RESULTADO DA COMPARAÇÃO: \n");
    printf("Carta %s%d - %s \n", estado, cidade, nome);
    printf("Carta %s%d - %s \n", state, city, nome_);
    
    condicao = valor1 > valor2 ? 1 : 0;
    valor3 == demo ? (condicao2 = valor3 < valor4 ? 1: 0) : (condicao2 = valor3 > valor4 ? 1: 0);
    
    printf("Atributos escolhidos: %s e %s\n", delta, delta2);
    printf("Valores da 1º carta: %.3f // %.3f \n", valor1, valor3);
    printf("Valores da 2º carta: %.3f // %.3f \n", valor2, valor4);

    if (condicao == 1)
    {
        printf("%s vanceu a primeira comparação (%s).\n", nome, delta);
    } else if (condicao ==0)
    {
        printf("%s venceu a primeira comparação (%s).\n", nome_, delta);
    } else{
        printf("Houve um empate na primeira comparação (%s).\n", delta);
    }
    if (condicao2 == 1)
    {
        printf("%s vanceu a segunda comparação (%s).\n", nome, delta2);
    } else if (condicao2 ==0)
    {
        printf("%s venceu a segunda comparação (%s).\n", nome_, delta2);
    } else{
        printf("Houve um empate na segunda comparação (%s).\n", delta2);
    }

    printf("Soma dos valores das cartas:\n");
    printf("%.2f  //  %.2f \n", (valor1 + valor3), (valor2 + valor4));

    if ((valor1 + valor3) > (valor2 + valor4))
    {
        printf("%s tem uma soma de pontos maior\n", nome);
    } else if ((valor1 + valor3) < (valor2 + valor4))
    {
        printf("%s tem uma soma de pontos maior\n", nome_);
    } else {
        printf("Ocorreu um empate na soma.\n");
    }
    if ((condicao == 1 && condicao2 == 1 || ((valor1 + valor3) > (valor2 + valor4))))
    {
        printf("%s venceu!\n", nome);
    } else if (condicao == 0 && condicao2 == 0 || ((valor1 + valor3) < (valor2 + valor4)))
    {
        printf("%s venceu!\n", nome_);
    } else {
        printf("Ocorreu um empate!\n");
    }

    printf("================================================ \n");
    return 0;
}
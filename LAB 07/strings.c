// STRINGS ======================================================================================================



// 1: Faça um programa que leia uma string e a imprima

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main ()
{
    char str[50]; 

    printf("\n- Digite uma frase qualquer: ");
    gets(str); 


    printf("\n%s", str); 


    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 2) Faça um programa que conte o número de 1’s que aparecem em uma string. Exemplo: “0011001” -> 3

#include <stdio.h>
#include <string.h> 

int main ()
{
    char str[250];
    int i, numero=0; 


    // Recebendo o nummero:
    printf("\n- Digite um numero qualquer: ");
    fgets(str, 250, stdin);


    // Contabilizando a quantidade de uns que achou na string:
    for(i = 0; i < 250; i++)
    {
        if (str[i]=='1')
        {
            numero++; 
        }
    }


    // Resultado:    
    printf("\n- Dado o numero apresentado, a quantidade de 1's presente no numero eh [ %d ]", numero); 


    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 3) Faça um programa que receba uma palavra e a imprima de trás-para-frente

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main ()
{
    char str[30];
    int i, tamanho; 

    // Lendo o que o usuario digitou, e colocando numa string:
    printf("Apresente uma palavra: ");
    fgets(str, 30, stdin); 


    // Pondo o tamanho da string numa variavel;
    tamanho = strlen(str); 


    // Apresentando o resultado:
    printf("Essa palavra de tras pra frente eh: \n");

    for(i = tamanho; i >= 0; i--)
    {
        printf("%c", str[i]); 
    } 

            
    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 4)  Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.


#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main ()
{
    char str[50], caractere;
    int i, vogal=0;

    // Lendo a string, e armazenando
    printf ("\n- Digite uma palavra qualquer: ");
    fgets (str, 50, stdin);


    // Conta de quantas vogais tem na plavra. Strlen contará o tamanho da string, garantindo uma repetição segura no for. O if contabiliza as vogais em minusculo, e o else if ocntabiliza as vogais em maiusculo.
    for(i=0; i < strlen(str); i++)
    { 
        if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') )
        {
            vogal++;
        } 
        else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') )
        {
            vogal++;
        }
    }

    printf ("\n- A palavra tem [ %d ] vogais.\n", vogal); 


    // Capturando um caracter, e substituindo as vogais pelo caractere lido:
    printf("\n- Agora digite UM caractere qualquer: ");
    scanf("%c", &caractere);

    for(i=0; i<strlen(str); i++)
    { 
        if( (str[i]=='a')||(str[i]=='i')||(str[i]=='e')||(str[i]=='o')||(str[i]=='u') )
        {
            str[i]=caractere;
        } 
        else if ( (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U') )
        {
            str[i]=caractere;
        }
    }


    // Resultado:
    printf("\n- Todas as vogais da palavra apresentada foram substituidas pelo caractere '%c', e o resultado ficou: \n ", caractere); 
    printf("> %s ", str); 
    
    printf("\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 5) Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.

#include <stdio.h>
#include <string.h>

int main()
{
    char str [250];
    int i = 0, tam_5;

    // Recebendo a frase em maiusculo:
    printf("\n- Digite uma frase toda em maisculo para converter em tudo minusculo: ");
    fgets(str, 250, stdin);

    
    // Atribuindo a uma variavel o tamanho da string, mpara não quebrar a string:
    tam_5 = strlen(str);


    // Lidando com a conversão usando a tabela ASCII:
    for (i = 0; i < tam_5; i++)
    {
        if ((str[i] >= 65 || str[i] <= 90) && (str[i] != 32) && (str[i] != 10))
        {
            str[i] += 32;
        }
    }
    

    // Resultado:
    printf("\n- A frase ficou convertida da seguinte forma: %s ", str);


    // Fim:
    printf("\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 6) Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.

#include <stdio.h>
#include <string.h>

int main()
{
    char str [100];
    int j = 0, i = 0, x;


    // Gravando a string:
    printf("\n- Digite uma frase toda em minusculo: ");
    fgets(str, 100, stdin);

   // Atribuindo a uma variavel o tamanho da string, mpara não quebrar a string:
    x = strlen(str);


    // Lidando com a conversão usando a tabela ASCII:
    for (i = 0; i < x; i++)
    {
        if ((str[i] >= 97 || str[i] <= 122) && (str[i] != 32) && (str[i] != 10))
        {
            str[i] -= 32;
        }
    }


    // Resultado:
    printf("\n- A frase ficou convertida da seguinte forma: %s ", str);


    // Fim:
    printf("\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 7) Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os espaços em branco do vetor e depois escrever o vetor resultante.

#include <stdio.h>
#include <string.h>

int main()
{
    char str [500];
    int j = 0, i = 0, tam_07;

    // Gravando a string:
    printf("\n- Digite uma frase qualquer: ");
    fgets(str, 500, stdin);

    
    // Pondo o tamanho da string numa variavel para faciitar:
    tam_07 = strlen(str);


    // For que deleta os espaços:
    for (i = 0; i < tam_07; i++)
    {
        if (str[i] == 32)
        {
            str[i] += 95;
        }
    }


    // Printf do resultado:
    printf("\n- A frase com os espaços apagadas ficou da seguinte forma: %s", str);


    // Fim:
    printf("\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 8) Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.

#include <stdio.h>
#include <string.h>

int main()
{
    char stg [100], l1, l2;
    int i = 0, tam_08;

    // Gravando a string, obtendo a letra para substituir e a letra péla qual quer substituir:
    printf("\n- Digite uma frase: ");
    fgets(stg, 100, stdin);

    printf("\n- Agora escolha uma letra da frase acima:  ");
    scanf(" %c", &l1);

    printf("\nE por ultimo, uma troca equivalente.\n\n- Digite uma letra para fazer a substitucao: ");
    scanf(" %c", &l2);


    // Pondo o tamanho da string numa variavel para faciitar:
    tam_08 = strlen(stg);


    // For que faz a substituicao:
    for (i = 0; i < tam_08; i++)
    {
        if (stg[i] == l1)
        {
            if (l2 >= 65 || l2 < 90)
            {
                stg[i] = l2;
            }
            else if (l2 >= 97 || l2 <= 122)
                stg[i] = l2;
        }
    }


    // Resultado:
    printf("\n- O resultado da substituicao ficou da seguinte forma: \n=== %s", stg);


    // Fim:
    printf("\nFim do programa!\n\n");       return 0;
}
// ===============================================================================================================



// 9) Faça um programa que preencha uma matriz de string com os modelos de cinco carros (exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
// Calcule e mostre:
// (a) O modelo de carro mais econômico;
// (b) Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1.000 quilômetros.

#include <stdio.h>
#include <string.h>

int main()
{
    char stg [5][200];
    int vet[5], i, modelo = 0, pos_mod = 0, x;
    

    // For para lidar com o armazenamento do modelo do carro:
    for (i = 0; i < 5; i++)
    {
        printf("\n- Digite modelos de carro: ");
        fgets(stg[i], 200, stdin);
    }


    // Vetor para armazenar quantos km cada modelo faz com 1L:
    for (i = 0; i < 5; i++)
    {
        printf("\n- Com 1 litro de combustivel, quantos quilometros percorre o: %s", stg[i]);
        fflush(stdin);
        scanf("%d", &vet[i]);
    }
    

    // Organização do terminal:
    printf("\n=======================================================");


    // For para achar o modelo mais economico. Sendo "modelo" a variavel que armazena o modelo, e "pos_mod" a posição do modelo mais economico.
    for (i = 0; i < 5; i++)
    {
        if (vet[i] > modelo)
        {
            modelo = vet[i];
            pos_mod = i;
        }
    }


    // Resultado do carro com maior autonia:
    printf("\n\nA maior autonomia com %d km/l eh do: %s", vet[pos_mod], stg[pos_mod]);


    // Organização do terminal:
    printf("\n=======================================================\n");



    // For que lidará com o calculo da performando de cada um em 1000 quilometros:
    for (i = 0; i < 5; i++)
    {
        x = 1000 / vet[i];
        printf("\n> Em um percurso de 1000km gasta %d L de combusivel. Esse eh o: %s", x, stg[i]);
    }


    // Fim:
    printf("\n================== Fim do programa! ===================\n\n");      return 0;
}
// ===============================================================================================================



// 10) Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.

// ===============================================================================================================



// 11) Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o segmento S[I..J].

// ===============================================================================================================



// 12) O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
// Exemplo      :
// String       : a ligeira raposa marrom saltou sobre o cachorro cansado
// Nova string  : D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

// ===============================================================================================================



// 13) Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
// Exemplo:
// ovo
// arara
// Socorram-me, subi no ônibus em Marrocos
// Anotaram a data da maratona

// ===============================================================================================================



// 14)  Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.

// ===============================================================================================================



// 15) Faça um programa que contenha um menu com as seguintes opções:
// (a) Ler uma string S1 (tamanho máximo 20 caracteres);
// (b) Imprimir o tamanho da string S1;
// (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;
// (d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
// (e) Imprimir a string S1 de forma reversa;
// (f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
// (g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
// (h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
// (i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring


// ===============================================================================================================



// 16) Faça um programa que encontre o conjunto de 5 dígitos consecutivos na sequência abaixo que gere o maior produto:

/*
7316717653133062491922511967442657474235534919493496983520312774506326239578
3180169848018694788518438586156078911294949545950173795833195285320880551112
5406987471585238630507156932909632952274430435576689664895044524452316173185
6403098711121722383113622298934233803081353362766142828064444866452387493035
8907296290491560440772390713810515859307960866701724271218839987979087922749
2190169972088809377665727333001053367881220235421809751254540594752243525849
0771167055601360483958644670632441572215539753697817977846174064955149290862
5693219784686224828397224137565705605749026140797296865241453510047482166370
4844031998900088952434506585412275886668811642717147992444292823086346567481
3919123162824586178664583591245665294765456828489128831426076900422421902267
1055626321111109370544217506941658960408071984038509624554443629812309878799
2724428490918884580156166097919133875499200524063689912560717606058861164671
0940507754100225698315520005593572972571636269561882670428252483600823257530
*/

// ===============================================================================================================

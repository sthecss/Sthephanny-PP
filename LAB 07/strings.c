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

    for(i=0; i < strlen(str); i++)
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

#include <stdio.h>
#include <string.h>

int main()
{
    char stg [1][250];
    int i = 0, vet[100], forma_de_pagamento, pagamento = 0;
    
    // Recebendo o nome da mercadoria, seguido do valor dela:
    for (i = 0; i < 1; i++)
    {
        printf("\n- Digite o nome da mercadoria: ");
        fgets(stg[i], 250, stdin);
    }

    for (i = 0; i < 1; i++)
    {
        printf("\n- Qual o valor do(a) %sR$ ", stg[i]);
        fflush(stdin);
        scanf("%d", &vet[i]);
    }


    // Lidando com a forma de pagamento.
    for (i = 0; i < 1; i++)
    {
        printf("\n(1) Pagamento a vista\n(2) Pagamento parcelado\n- Digite o numero referente a operacao: ");
        scanf("%d", &forma_de_pagamento);
    
        if (forma_de_pagamento == 1)
        {
            pagamento = vet[i] * 0.9;
            printf("\n> > > %s", stg);                                                  // Printf string
            printf("!! Tera desconto de 10%% sobre o valor total !!");       
            printf("\n> Sendo o valor do produto R$%d...", vet[i]);
            printf("\n> Descontando os 10%%, o valor a ser pago sera de: R$%d;\n", pagamento);
        }
        else if (forma_de_pagamento == 2)
        {
            printf("\n> > > %s", stg);
            printf("!! O produto nao tem desconto !!");
            printf("\n> Sendo o valor do produto R$%d...", vet[i]);
            printf("\n> O valor a ser pago parcelado eh de: R$%d;\n", vet[i]);
        }
    }


    // Fim:
    printf("\n================== Fim do programa! ===================\n\n");      return 0;
}
// ===============================================================================================================



// 11) Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o segmento S[I..J].

#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int i = 0, j = 0;


    // Gravando a sequenciad e numeros, e obtendo onde iniciar e onde terminar:
    printf("\n- Digite uma sequencia de numeros inteiros nao-negativos quaisquer: ");
    fgets(S, 100, stdin);

    printf("\n- Defina a posicao inicial em [i]: ");
    scanf("%d", &i);

    printf("\n- Defina a posicao final em [j]: ");
    scanf("%d", &j);


    // Organização do terminal:^
    printf("\n> Portando...\n\n");


    // While para printar a sequencia, iniciando onde o usuario definiu como inicio, e parando onde ele determinou como final:
    while (i <= j)
    {
        printf("%c", S[i]);
        i++;
    }


    // Fim:
    printf("\n\n================== Fim do programa! ===================\n\n");      return 0;
}
// ===============================================================================================================



// 12) O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.
// Exemplo      :
// String       : a ligeira raposa marrom saltou sobre o cachorro cansado
// Nova string  : D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

#include <stdio.h>
#include <string.h>

int main()
{
    char stg[300];
    int i, tam_12;


    // Obtendo a string:
    printf("\n- Vamos criptografar!\n\n- Digite a frase:\n| ");
    fgets(stg, 300, stdin);


    // Tamanho da string numa variavel para facilitar:
    tam_12 = strlen(stg);


    // For que "criptografa" a frase:
    for (i = 0; i < tam_12; i++)
    {
        stg[i] = stg[i] + 3;
        if(stg[i] == '#')
        {
            stg[i] = ' ';
        }
    }


    // Resultado:
    printf("\n- Usando o codigo de Cesar, a criptrografia ficou da seguinte forma:\n|%s", stg);


    // Fim:
    printf("\n\n================== Fim do programa! ===================\n\n");      return 0;
}
// ===============================================================================================================



// 13) Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
// Exemplo:
// ovo
// arara
// Socorram-me, subi no ônibus em Marrocos
// Anotaram a data da maratona

#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 


int main ()
{
    char str [250];
    int i, tam_13, j = 0, pos=0;

    // Obtendo  a string e gravando:
    printf("\n!! Palindromos !!\n- Digite uma frase qualquer para verificar se e palindromo: ");
    fflush(stdin);
    fgets(str, 250, stdin);



    // Copiando a string indice por indice:
    tam_13 = strlen(str);

    for (i = 0; i < tam_13; i++)
    {
        while(str[i] == 32)
        {
            for ( j = i; j < tam_13 - 1; j++)
            {
                str[j] = str [j +1];
            }
            str[j] = '\0';
        }
    }




    // Estetica do terminal
    printf("\n==========================================================\n");



    // Printando para verificação:
    tam_13 = strlen(str) - 1;

    for (i = 0; i < tam_13; i++)
    {
        printf("Posicao %d = %c | Posicao %d = %c\n", i, str[i], tam_13 - i - 1, str[ tam_13 - i - 1]);

        if (str[i] != str [tam_13-i-1])
        {
            pos = 1;
        }
    }



    // Estetica do terminal
    printf("==========================================================\n");



    // Printando resultado:
    if ( pos == 0)
    {
        printf ("\n< < < < Eh um palindromo! > > > >");
    }
    else
        printf ("\n< < < < Nao eh um palindromo > > > >");

    

    // Fim:
    printf("\n\n================== Fim do programa! ===================\n\n");      return 0;
}


// ===============================================================================================================



// 14)  Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    
    int num = 0;

    printf("\n- Digite a primeira string: ");
    fflush(stdin);
    scanf("%100[^\n]", str1);
    fflush(stdin);

    printf("\n- Digite a segunda string: ");
    fflush(stdin);
    scanf("%100[^\n]", str2);
    fflush(stdin);

    do
    {
        printf("\n- Agora o numero de caracteres que voce quer concatenar: ");
        scanf("%d", &num);  

    } while (strlen(str2) < num);


    str2[num] = '\0';

    printf("\n===========================================================\n\n> O resultado concatenado eh:\n>> %s", strcat(str1, str2));
    
    
    // Fim:
    printf("\n\n==================== Fim do programa! =====================\n\n");      return 0;
}
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


#include <stdio.h>
#include <string.h>


int main()
{
    char str[100], str2[200], stra[20], opcao, caract, novo_car;

    int contg = 0, result = 0, start = 0, tam = 0;

    do
    {
		// Estetica do terminal
		printf("\n==========================================================");


		// Menu:
        printf("\n\t !! Por favor escolha uma opcao !! \n==========================================================\n");
        printf("\n(a) Ler uma string S1 (tamanho maximo 20 caracteres)\n\n");
        printf("(b) Imprimir o tamanho da string S1\n\n");
        printf("(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparacao\n\n");
        printf("(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação\n\n");
        printf("(e) Imprimir a string S1 de forma reversa\n\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario\n\n");
        printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuário\n\n");
        printf("(h) Verificar se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuário\n\n");
        printf("(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual e o tamanho da substring.\n\n");
        
		printf("\n>> Digite a letra referente a sua escolha: ");
        scanf("%c", &opcao);


		// ASCII para verificação de letras a até i minusculas:
        if (opcao >= 97 || opcao <= 105)
            opcao = opcao - 32;

    } while (opcao < 65 || opcao > 73);


	// Estetica do terminal
	printf("\n..........................................................\n");


    // Case 'a':
	if ( opcao == 'a' || opcao == 'A')
	{

		fflush(stdin);
		printf("\n- Escreva a string de no maximo 20 caracteres: ");
		fflush(stdin);
		fgets(stra, 20, stdin);

		tam = strlen(stra)-1;

		printf("\n- O tamanho eh de [ %d ], portanto eh uma string", tam);

		if ( tam <= 20)
			printf (" < < valida! > >\n");
		else 
			printf(" < < invalida! > >\n");

        // Fim:
        printf("\n\n================== Fim do programa! ===================\n\n");      return 0;
    }
	


	// Gravando a primeira string para as demais opcoes:
	if (opcao >= 65 && opcao <= 73)
	{
		fflush(stdin);
		printf("\n- Escreva a primeira string: ");
		fgets(str, 100, stdin);
	}



	// Particularidades de cada questão:
    fflush(stdin);
    switch (opcao)
    {

        case 'B':
            printf("\n- O tamanho da string escrita eh [ %d ]", strlen(str)-1);
            break;


        case 'C':
			printf("\n- Escreva uma segunda string para comparacao: ");
			fflush(stdin);
			fgets(str2, 200, stdin);

            printf("\nTendo em mente as seguintes afirmacoes:\n\n- [0] o resultado para strings iguais \t- E qualquer coisa diferente disso um sinal de serem diferentes\n\n- O resultado da comparacao das duas eh de [ %d ]", strcmp(str, str2));
            break;


        case 'D':
            printf("\n- Digite uma segunda string para concatenacao: ");
			fflush(stdin);
            scanf("%200[^\n]", str2);
			fflush(stdin);

            printf("\n> > %s", strcat(str2, str));
            break;


        case 'E':
            printf("\n A string de forma reversa eh: ");

            for (contg = strlen(str) ; contg > -1 ; contg--)
                printf("%c", str[contg]);
            
			break;


        case 'F':

            printf("- Digite o caractere que quer contar, com base na frase acima: ");
			fflush(stdin);
            scanf("%c", &caract);
			fflush(stdin);

            for (contg = 0; contg < 20; contg++)
            {
                if (str[contg] == caract)
                    result++;
            }
            printf("\n- O [ %c ] aparece na frase [ %d ] vezes", caract, result);
            break;


        case 'G':
            
            printf("\n- Considerando a frase acima, digite um caractere para mudar: ");
            scanf("%c", &caract);
            fflush(stdin);
            printf("\n- Agora digite um caractere para substitui-lo: ");
            scanf("%c", &novo_car);

            for (contg = 0; contg < 20; contg++)
            {
                if (str[contg] == caract)
                {
                    str[contg] = novo_car;
                }
                    
            }
            printf("\n- Com isso a frase ficou:\n> > %s", str);
            break;


        case 'H':
            printf("\n- Digite a substring para verificar se ela existe na primeira: ");
			fflush(stdin);
            scanf("%200[^\n]", str2);
			fflush(stdin);
            
            result = strstr(str, str2);

            if (result)
                printf("\n- A substrings foi achada!!");
            else
                printf("\n- OPS! A substring não foi achada!");
            break;


        case 'I':
            printf("\n- Digite a posicao que voce desejar iniciar na substring: ");
            scanf("%d", &start);
            fflush(stdin);
            printf("\n- Digite o tamanho da substring: ");
            scanf("%d", &tam);

        
			for (contg = start; contg < (start + tam); contg++)
			{
				fflush(stdin);
				printf("\n- a string formada foi: %c", str[contg]);
			}
			break;
    }

    // Fim:
    printf("\n\n================== Fim do programa! ===================\n\n");      return 0;
}

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

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char str[1001]={
7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,9,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0};
    int produto, maior_produto = 0, voltas, meta = 1000, m1, m2, m3, m4, m5, i=0, j=0, k=1, carac;
    float parada=1, linha=1;

    // Apresentando o conjunto de numeros:
    printf("\n======================= Considere a sequencia abaixo =======================\n");

    
    // Printf da sequencia do enunciado:
    printf("\n7316717653133062491922511967442657474235534919493496983520312774506326239578\n3180169848018694788518438586156078911294949545950173795833195285320880551112\n5406987471585238630507156932909632952274430435576689664895044524452316173185\n6403098711121722383113622298934233803081353362766142828064444866452387493035\n8907296290491560440772390713810515859307960866701724271218839987979087922749\n2190169972088809377665727333001053367881220235421809751254540594752243525849\n0771167055601360483958644670632441572215539753697817977846174064955149290862\n5693219784686224828397224137565705605749026140797296865241453510047482166370\n4844031998900088952434506585412275886668811642717147992444292823086346567481\n3919123162824586178664583591245665294765456828489128831426076900422421902267\n1055626321111109370544217506941658960408071984038509624554443629812309878799\n2724428490918884580156166097919133875499200524063689912560717606058861164671\n0940507754100225698315520005593572972571636269561882670428252483600823257530\n");

   
   // Contabilizando a equencia com base na string str [1001]:
   for ( voltas = 0 ; voltas < meta; voltas++)
    {
        produto = str[voltas] * str[voltas+1] * str[voltas+2] * str[voltas+3] * str[voltas+4];

        if (produto > maior_produto)
        {
            maior_produto = produto;
            m1 = str[voltas];
            m2 = str[voltas+1];
            m3 = str[voltas+2];
            m4 = str[voltas+3];
            m5 = str[voltas+4];
            linha = (parada/76);
        }
        parada++;
    }


    // ============ Sobre as variaveis 'parada' e 'linha' ============
    // Podemos achar a linha da sequinte forma:
    // Dividiremos o valor do caractere que achou a sequencia (que foi achado pela variavel "parada"), pela quantidade de caracteres por linha, que é 76. Com isso conseguiremos obter onde aproximadamentente é a linha. Sendo que o valor inteiro é a linha completa, um valor decimal significará o valor inteiro posterior. Ex: 3.5 significaria a quarta linha, porém a sequencia se inicia na metade dela.


    // Resultado:
    printf("\n- O maior produto pertecence a sequencia de numeros [%d x %d x %d x %d x %d]\n. Sendo o resultado [ %d ]\n\nOBS: A sequencia esta na [%.f] linha", m1, m2, m3, m4, m5, maior_produto, ceil(linha));

	
    // Fim:
    printf("\n\n============================ Fim do programa! =============================\n\n");      return 0;
}
// ===============================================================================================================

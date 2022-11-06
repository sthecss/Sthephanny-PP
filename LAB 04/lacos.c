/* 
  ALuna       : Sthephanny Caroline da Silva Santos;
  Matricula   : 12211BCC044;
  lAB 04      : LAÇOS;
  Recebido    : 26/10;
  Entrega     :
  Uberlandia 2022.
*/


// ==================== Exercicio 01 ====================
// Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num=0, lugar=1, contagem=0;
    do 
    {
        for (num = 3; contagem != 15; contagem++)
        {
            if ((num%3)==0)
            {
                printf("%d eh o %do multiplo de 3.\n", num, lugar);
                lugar++;
            }
            num++;
        }
    } while (contagem != 15);
    
    printf("\nFim do programa!\n\n");           return 0;
}         */
// ======================================================


// ==================== Exercicio 02 ====================
/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes.
- A primeira vez deve usar a estrutura de repetição for;
- A segunda while;
- A terceira do-while;                                */
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i=0, num=1, contagem=100;

    // ============= Primeiro Caso: For  =================
    for (i = 0; i < contagem; num++)
    {
        printf("%d\n",num);
        i++;
        if (i==100)
        {
            break;
        }
    }
    // ============= Segundo Caso: While =================
    i=0;
    num=1;
    while (i<contagem)
    {
        printf("%d\n",num);
        num++;
        i++;
        if (i==100)
        {
            break;
        }
    }
    // ============= Terceiro Caso: Do-While ============
    i=0;
    num=1;
    contagem=0;
    do
    {
        printf("%d\n",num);
        num++;
        i++;

            if (i==100)
            {
                break;
            }

    } while (i>contagem);


    printf("\n\nFim do programa!\n\n");         return 0;

}                                                    */
// ======================================================


// ==================== Exercicio 03 ====================
// Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i, num=10, contagem=-1;

    for (i = 10; i > contagem; num--)
    {
        printf("%d\n",num);
        i--;
        if (i==-1)
        {
            break;
        }
    }

    printf("\nF I M !\n\n");         return 0;
}       */
// ======================================================


// ==================== Exercicio 04 ====================
// Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil).
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int i=0, num=0, contagem=0;

    for (i=100100; i > contagem; )
    { 
        printf("%d\n", num);
        contagem = contagem+1000;
        num = num+1000;

        if (contagem==100100)
        {
            break;
        }
    }

    printf("\nFim do programa!\n\n");       return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 05 ====================
// Faça um programa que peça ao usuário para digitar 10 valores e some-os.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, num=1, contagem=0, ns, soma=0;

    for (i = 10 ; i > contagem; num++)
    {
        printf("\nDigite o %do numero: ",num);
        scanf("%d", &ns);
        contagem++;
        soma = soma + ns;

        if (num >= 10)
        {
            printf("\n- A soma dos 10 numeros eh de: %d.", soma);
            break;
        }
    }

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 06 ====================
// Faça um programa que leia 10 inteiros e imprima sua média.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, num=1, contagem=0, ns, soma=0;

    for (i = 10 ; i > contagem; num++)
    {
        printf("\nDigite o %do numero: ",num);
        scanf("%d", &ns);
        contagem++;
        soma = soma + ns;

        if (num >= 10)
        {
            printf("\n- A media dos 10 numeros eh de: %d.", soma/10);
            break;
        }
    }

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 07 ====================
// Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, num=1, contagem=0, ns, soma=0;

    for (i = 10 ; i > contagem; num++)
    {
        printf("\nDigite o %do numero: ",num);
        scanf("%d", &ns);

        if (ns>0)
        {
            soma = soma + ns;
        }

        contagem++;

        if (num >= 10)
        {
            printf("\n- A media dos 10 numeros, desconsiderando os negativos, eh de: %d.", soma/10);
            break;
        }
    }

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 08 ====================
// Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numerador=1, contagem=0, ns, maior=0, menor=0;

    for (i = 10 ; i > contagem; numerador++)
    {
        printf("\nDigite o %do numero: ",numerador);
        scanf("%d", &ns);

        if (ns>maior)
        {
            maior = ns;
        }

        else if (ns<menor)
        {
            menor= ns;
        }

        contagem++;

        if (numerador >= 10)
        {
            printf("\n- O maior numero apresentado eh: %d\n- O menor numero apresentado eh: %d.", maior, menor);
            break;
        }
    }
}                                                      */
// ======================================================


// ==================== Exercicio 09 ====================
// Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.
//*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int i=0, num=0, contador=0, nq, resto=0, lugar=1;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &nq);

    for (i=nq; contador<nq; contador++)
    {
        if (nq%2 != 0)
        {
            printf("\n- O %do numero natural impar eh: %d.", lugar, nq);
            lugar++;
            nq++;
        }
    }


    printf("\n\nFim do programa!\n\n");          return 0;
}                                                   //*/
// ======================================================


// ==================== Exercicio 10 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 11 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 12 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}      */
// ======================================================


// ==================== Exercicio 13 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 14 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 15 ====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================

// ==================== Exercicio 16 ====================
/* Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre dois números:
- Adição (opção 1)
- Subtração (opção 2)
- Multiplicação (opção 3)
- Divisão (opção 4).
- Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída (opção 5).                                */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    int op, n1, n2;

        do
        {
            do
            {
                printf("\nCalculadora!\n1. Adicao.\n2. Subtracao.\n3. Multiplicacao.\n4. Divisao.\n5. Sair.\nDigite o numero referente a operacao que deseja operar: ");
                scanf ("%d", &op);

                if ( (op <1) || (op>6))
                {
                    printf("> > Opcao invalida. < <\n");
                }

                if (op == '5')
                {

                }
            } while ( (op<1) || (op>5) );

            switch (op)
            {
                case 1:
                printf("Digite dois numeros: ");
                scanf("%d %d", &n1, &n2);

                printf("A soma dos dois numeros eh igual a: %d\n", (n1+n2));
                break;

                case 2:
                
                if (n1>n2)
                printf("Digite dois numeros: ");
                scanf("%d %d", &n1, &n2);

                if (n1>n2)
                {
                    printf("A subtracao dos dois numeros eh igual a: %d\n", (n1-n2));
                } else
                    printf("A subtracao dos dois numeros eh igual a: %d\n", (n2-n1));
                break;

                case 3:
                printf("Digite dois numeros: ");
                scanf("%d %d", &n1, &n2);
                printf("A multiplicacao dos dois numeros eh igual a: %d\n", (n1*n2));
                break;

                case 4:
                printf("Digite dois numeros: ");
                scanf("%d %d", &n1, &n2);

                if (n1>n2)
                {
                    printf("A subtracao dos dois numeros eh igual a: %d\n", (n1/n2));
                } else
                    printf("A subtracao dos dois numeros eh igual a: %d\n", (n2/n1));
                 
                break;

                case 5:
                printf("\n> Fim do programa! <\n");
                return 0;
            }
        } while (op!=5);
}                                                      */
// ======================================================


// ==================== Exercicio 17 ====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 18 ====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 19 ====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 20 =====================
//
/*
int main()
{
    
    int num = 2, resultado = 0, contador = 0, divisao = 0, alcance;
    
    printf("Digite um número para saber se é primo: \n");
    scanf("%d", &alcance);
    

    printf("O numero 0 NAO e primo!\n");    
    printf("O numero 1 NAO e primo!\n");

    inicio:
    if (num <= alcance)
    {
        for (contador = 2; contador < num; contador++)
        {
            resultado = 0;
            divisao = num % contador;

            if (divisao == 0)
            {
                resultado = resultado + 1;
                break;
            }
        }
        
        if (resultado == 1)
            printf("O numero %d NAO e primo!\n", num);
            
        if (resultado == 0)
            printf("O numero %d > > EH < < primo!\n", num);
        num++;
        goto inicio;
    }
    
        
    return 0;
}       */
// ======================================================


// ==================== Exercicio 21 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================


// ==================== Exercicio 22 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}      */
// ======================================================


// ==================== Exercicio 23 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){



    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}       */
// ======================================================

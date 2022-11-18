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
                printf("[ %d ] eh o [ %do ] multiplo de 3.\n", num, lugar);
                lugar++;
            }
            num++;
        }
    } while (contagem != 15);
    
    printf("\nFim do programa!\n\n");           return 0;
}                                                      */
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
        printf("[ %d ]\n",num);
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
        printf("{ %d }\n",num);
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
        printf("(( %d ))\n",num);
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

    printf("\n- - Contagem Regressiva - - \n\n");

    for (i = 10; i > contagem; num--)
    {
        printf("[ %d ]\n",num);
        i--;
        if (i==-1)
        {
            break;
        }
    }

    printf("\nF I M !\n\n");         return 0;
}                                                    */
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
        printf("[ %d ]\n", num);
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
        printf("\nDigite o ( %do ) numero: ",num);
        scanf("%d", &ns);
        contagem++;
        soma = soma + ns;

        if (num >= 10)
        {
            printf("\n- - A soma dos 10 numeros eh de: { %d } - -", soma);
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
        printf("\nDigite o ( %do ) numero: ",num);
        scanf("%d", &ns);
        contagem++;
        soma = soma + ns;

        if (num >= 10)
        {
            printf("\n- - A media dos 10 numeros eh de: [ %d ] - -", soma/10);
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

int main ()
{

    int i, num=1, contagem=0, ns, soma=0;

    for (i = 10 ; i > contagem; num++)
    {
        printf("\nDigite o ( %do ) numero: ",num);
        scanf("%d", &ns);

        if (ns>0)
        {
            soma = soma + ns;
        }

        contagem++;

        if (num >= 10)
        {
            printf("\n- - A media dos 10 numeros, desconsiderando os negativos, eh de: { %d } - -", soma/10);
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
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    // Lógica empregada: O número qualquer lido (int nq) determinará a meta (int meta) de quantos numeros impares deverão ser achados. 

    int num=0, contador=0, nq, resto=0, lugar=1, meta=0;

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &nq);

    meta=nq;

    do 
    {

        if (nq%2 != 0)
        {
            printf("\n- O %do numero natural impar do numero lido eh: %d.", lugar, nq);
            lugar++;
        }
        
        contador++;
        nq++;

    } while(lugar<=meta);


    printf("\n\nFim do programa!\n\n");          return 0;
}                                                   */
// ======================================================


// ==================== Exercicio 10 =====================
// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num=0, contagem=0, meta=50, S50=0;

    do 
    {
        
        if (num%2 == 0)
        {
            S50= S50 + num;
            contagem++;
        }

        num++;

    } while (contagem<=meta);

    
    printf("\n- - A soma dos 50 primeiros pares eh igual a: [ %d ] - -", S50);

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                       */
// ======================================================


// ==================== Exercicio 11 =====================
// Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numq, num=1, contagem=0, start=0;

    printf ("Digite um numero qualquer: ");
    scanf("%d", &numq);

    do
    {
        printf("\n%d", start);
        start = num;
        num++;
        contagem++;

    } while (contagem<=numq);

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 12 =====================
// Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número, com exceção dele próprio.
// Ex: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int num=1, contador=1, numq, soma=0, meta, teste;

    printf("\n- Digite um numero qualquer: ");
    scanf("%d", &numq);

    meta = numq;

    do
    {
        teste = numq % num;

        if (teste == 0)
        {
            soma = soma + num;
        }

        contador++;
        num++;

    } while (contador<meta);
    
    printf("- A soma dos divisores de %d eh igual a: [ %d ]", numq, soma);

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                   */
// ======================================================


// ==================== Exercicio 13 =====================
// Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int num= 1, teste3, teste5, meta=1000, soma=0;

    do
    {
        teste3 = num % 3;
        teste5 = num % 5;

        if (teste3==0)
        {
            soma = soma + num;
        }
        
        else if (teste5==0)
        {
            soma = soma + num;
        }
        
        num++;

    } while (num< meta);

    printf("\n- A soma de todos os numeros abaixo de 1000, multiplos de 3 ou 5 eh de: [ %d ].", soma);
    
    printf("\n\nFim do programa!\n\n");          return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 14 =====================
// Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int d1, d2, vezes, i;
  
    printf("\n- Vamos girar os dados...\n");

    // Para aleatorizar as vezes. Um pseudo-aletatório, limitado a 100 para facilitar.
    srand(time(NULL));
    vezes= rand() % 100;


    printf("\n- - Sera rodado %d vezes os dados! - - \n", vezes);


    for (i = 0; i < vezes; i++)
    {
        d1 =  1 + ( rand() % 6 );
        d2 =  1 + ( rand() % 6 );

        printf("\n- Dado 1: %d\n", d1);
        printf("- Dado 2: %d\n", d2);
        
        if (d1 > d2)
        {
            printf("[ D1 > D2 ]\n");
        }

        else if (d1 < d2)
        {
            printf("[ D2 > D1 ]\n");
        } 

        else if (d1 == d2) 
        {
            printf("[ D1 = D2 ]\n");
        }
    }

    printf("\nFim do programa!\n\n");          return 0;
}                                                   */
// ======================================================


// ==================== Exercicio 15 ====================
// Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num, quad, cubo, raiz, key=1;

   while(key>=0)
   {
       printf("\nDigite o número: "); scanf("%f", &num);

       quad = num*num;
       cubo = num*num*num;
       raiz = sqrt(num);

       if(num>0)
       {
           printf("\nquadrado: %.2f", quad);
           printf("\ncubo: %.2f", cubo);
           printf("\nraiz: %.2f\n", raiz);
       }
       else cond= -1;
   }

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                   */
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
// Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze)
    {
        chico += 0.02;
        ze += 0.03;
        ano++;
        printf("Chico: %.2f\tZe: %.2f\tPassado %d ano(s)\n", chico, ze, ano);
    }
    printf("\n[ Sao necessarios %d anos! ]", ano);

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                       */
// ======================================================


// ==================== Exercicio 18 ====================
// Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Faça programa que determine o salário atual do funcionário.
/*
int main()
{
    int ano;
    double salario = 2000, aumento_salario;

    aumento_salario = salario * 0.015;

    printf("\n- Ano [1995]\t Salario [R$%.3lf]\n", salario);
    
    for (ano = 1996; ano <= 2022; ano++) {
        salario += aumento_salario;
        aumento_salario *= 2;      

        printf("Ano [%d]\t Salario [R$%.3lf]\n", ano, salario);
    }

    printf("\nSalario em 2022 eh R$%.3lf\n\n", salario);

    return 0;

}  */
// ======================================================


// ==================== Exercicio 19 ====================
// Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int saque, nt = 100, cont;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    for (cont = 1; cont <= 7; cont++)
    {
        printf("\nSera entregue %d notas de %d\n", saque / nt, nt);
        saque = saque % nt;

        switch(cont)
        {
            case 1: nt = 50;
            break;

            case 2: nt = 20;
            break;

            case 3: nt = 10;
            break;

            case 4: nt = 5;
            break;

            case 5: nt = 2;
            break;

            case 6: nt = 1;
            break;
        }
    }

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 20 =====================
/* Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.   */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int num = 2, restd = 0, cont = 0, divisao = 0, nscan = 0, soma = 0;
    
    printf("Digite um numero que seja diferente de 0 e 1 para saber se ele e primo, em seguida sera apresentada a soma de todos os primos até ele: ");
    scanf("%d", &nscan);
    
    inicio:
    if (num <= nscan)
    {
        for (cont = 2; cont < num; cont++)
        {
            restd = 0;                     divisao = num % cont;

            if (divisao == 0)
            {
                restd++;
                break;
            }

        }
        
        if (restd == 1)
        {
            printf("");
        }
            
        if (restd == 0)
        {
            printf("O numero [ %d ] eh um primo!\n", num);
            soma = soma + num;
        }
           
        num++;
        goto inicio;
    }

    printf("[ A soma dos primos eh: %d ] ", soma);

    printf("\n\nFim do programa!\n\n");         return 0;
}                                                    */
// ======================================================


// ==================== Exercicio 21 =====================
//  Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são números informados pelo usuário.
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, result= 0, cont = 0, divisao = 0, meta = 0, soma = 0, amnt = 0;
        
        printf("Digite um intervalo para saber quantos primos existem: \n");
        scanf("%d %d", &amnt, &meta);
        
        Comeco:
        if (amnt <= meta)
        {
            for (cont = 2; cont <  amnt; cont++)
            {
                result = 0;
                divisao = (num + amnt) % cont;

                if (divisao == 0)
                {
                    result = result + 1;
                    break;
                }
            }
            
            if (result == 1)
            {
                printf("");
            }
                
            if (result == 0)
            {
                soma = soma + 1;
            }
            
            amnt++;
            goto Comeco;
        }
    
    printf("A quantidade de numeros primos e: %d", soma);
        
}                                                      */
// ======================================================


// ==================== Exercicio 22 =====================
// Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois dígitos é 9009 = 91*99.
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N1,N2,rev,ran,final = 0;

    for (N1 = 999; N1 >= 100; N1--)
    {
        for (N2 = N1; N2 >= 100; N2--)
        {
            ran = N1 * N2;
            while (ran != 0)
            {
                rev = rev * 10 + (N1 * N2) % 10;
                ran = ran / 10;
            }
            if (rev == (N1 * N2))
            {
                printf("\nO maior palindromo eh %d x %d = %d", N1, N2, N1 * N2);
                final++;
                break;
            }
            rev = 0;
        }

        if  (final == 1)     break;
    }

    printf("\n\nFim do programa!\n\n");          return 0;
}                                                      */
// ======================================================


// ==================== Exercicio 23 =====================
/* Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do chamado Triangulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21                                      */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int linhas, cont, vx;
    char letra = 65;

    printf("Digite a quantidade de linhas desejada: ");       scanf("%d", &linhas);

    for (vx = 1; vx <= linhas; vx++)
    {
        for (cont = 1; cont <= vx; cont++)
        {
            printf("%c ", letra);
            if (letra == 90)
                letra = 64;
            letra = letra + 1;     
        }
        
        printf("\n");
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
}                                                  */
// ======================================================

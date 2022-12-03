// ================================= VETORES =================================



/* 1)  Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.O programa deve executar os seguintes passos:

a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.                  */

#include <stdio.h>

int main ()
{

    int i=0;

    // (a)
    int A[6]={1,0,5,-2,-5,7};   

    // (b)
    int soma = (A[0]) + (A[1]) + (A[5]);
    printf("\n- A soma de %d + %d + %d = %d\n", (A[0]), (A[1]), (A[5]), soma);        // (c)

    // (c)
    A[4] = 100;

    // (d)
    printf("\n- Cada valor do vetor A, um em cada linha: \n", A[6]);

    for (i = 0; i < 6;i++)
    {
        printf("[ %d ]\n", A[i]);
    }

    printf("\nFim do progama!\n\n");return 0;

}
// ===========================================================================



// 2) Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.

#include <stdio.h>

int main()
{
    int vet[8];
    int i, numx, numy;

    // Lendo os valores:
    for (i = 0; i < 8; i++)
    {
        printf("Apresente um valor para posicao: %d\n", i);
        scanf("%d", &vet[i]);
    }


    //  Recebendo as posições para somar:
    printf("\n- Digite a primeira posicao que voce deseja somar:\n");
    scanf("%d", &numx);

    printf("\n- Digite a segunda posicao que voce deseja somar:\n");
    scanf("%d", &numy);


    // Resultado:
    printf("\n- A soma das duas posicoes desse vetor eh: [ %d ]\n", vet[numx] + vet[numy]);

    printf("\nFim do programa!\n\n");       return 0; 
}
// ===========================================================================



// 3) Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa

#include <stdio.h>

int main()
{
    int vet [6];
    int i=0, j=0;


    // Recebendo valores para guardar:
    for (i = 0; i < 6; i++)
    {
        printf("\n - Digite um valor para guardar em [ %d ] \n", i);
        scanf("%d", &vet[i]);
    }


    // Apresentação da ordem inversa do que foi apresentada:
    printf("\n- A ordem inversa desses numeros: \n");

    for (i=5; i>=0; i--)
    {
    printf ("[ %d ] \t", vet[i]);
    }


    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===========================================================================



// 4) Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontramo maior e o menor valor.

#include <stdio.h>

int main ()
{
    int i, vetor[5], maior, menor, PosicaoMaior, PosicaoMenor=0;

    // Gravando os 5 valores:
    for (i=0; i<5; i++)
    {
        printf ("\n- Apresente um valor para a posicao %d de um vetor: \n", i);
        scanf ("%d", &vetor[i]);
    }


    // Arrumando qual será o maior vetor:
    maior=vetor[0];
    
    for (i=0; i<5; i++)
    {
        if (maior< vetor[i])
        {
            maior=vetor[i];
            PosicaoMaior=i;
        }
    }


    // Arrumando qual será o menor vetor:
    menor= vetor[0];

    for (i=1; i<5; i++)
    {
        if (menor>vetor[i])
        {
            menor= vetor[i];
            PosicaoMenor=i;
        }
    }


    // Printando o vetor para verificação:
    printf("\n- Por ordem apresentada, ficou guardado os seguintes numeros:\n");
    for (i=0; i<5; i++)
    {
        printf ("\t[ %d ]", vetor[i]);
    }

    printf("\n"); //Só quebra de linha.


    // Demonstrando resultado:
    printf ("\n- O maior valor eh: %d\t- A posicao eh: %d", maior, PosicaoMaior);
    printf("\n- O menor valor eh: %d\t- A posicao eh: %d", menor, PosicaoMenor);


    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===========================================================================



// 5) Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela.  

#include <stdio.h>

int main()
{
    int vet[50], i;


    // Escrevendo o vetor com base na formula dada:
    for(i = 0; i < 50; i++)
    {
		vet[i] = (i + 5 * i) %(i+ 1);
        printf(" [%d] ", vet[i]);
    }
 
    return 0;
}
// ===========================================================================



// 6) Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas respectivas posições no vetor. 

#include <stdio.h>

int main ()
{

    int i, j;
    int vetor[10];


        // Gravando os 10 valores:
        for (i=0; i<10; i++)
        {
            printf ("\n- Apresente um valor para a posicao [ %d ] de um vetor: ", i);
            scanf ("%d", &vetor[i]);
        }

    
        // Printando o vetor para verificação:
        printf("\n- Por ordem apresentada, ficou guardado os seguintes numeros: ");

        for (i=0; i<10; i++)
        {
            printf ("\t[ %d ]", vetor[i]);
        }


        //Só quebra de linha.
        printf("\n"); 

        // Verificacao de primo:

        for (i=0; i < 10; i++ )
        {
            int res=0;

            for (j = 2; j < vetor[i]; j++)
            {
                if (vetor[i] % j ==0)
                {
                    res++;
                }
            }

            if (res==0)
            printf("\n- O numero %d eh primo, na posicao %d.", vetor[i], i);

        }

        //Só quebra de linha.
        printf("\n"); 
    
    printf("\n\nFim do programa!\n\n");       return 0;
}
// ===========================================================================



// 7) Faça um programa que receba 6 números inteiros e mostre:
// - Os números pares digitados;
// - A soma dos números pares digitados;
// - Os números ímpares digitados;
// - A quantidade de números ímpares digitados; 

#include <stdio.h>

int main ()
{

    int i,                // valor que varia do vetor
        j,                // contagem de voltas
        soma_pares,       // armazena a soma
        qtd_impares=0     // quantidade de pares
        ;

    int strg_num[6];    // Vetor


        // Gravando os 6 valores:
        for (i=0; i<6; i++)
        {
            printf ("\n- Apresente um valor para a posicao [ %d ] do vetor: ", i);
            scanf ("%d", &strg_num[i]);
        }

    
        // Printando o vetor para verificação:
        printf("\n- Por ordem apresentada, ficou guardado os seguintes numeros: ");
        for (i=0; i<6; i++)
        {
            printf ("\t[ %d ]", strg_num[i]);
        }


        //Só quebra de linha.
        printf("\n"); 


        // Sobre os numeros:
        for (j = 0; j < 6;  j++)
        {
            if (strg_num[j] % 2 == 0)
            {
                printf("\n- O numero %d eh par!", strg_num[j]);
                
                soma_pares = soma_pares + strg_num[j];
            }

            if (strg_num[j] % 2 != 0)
            {
                printf("\n- O numero %d eh impar!", strg_num[j]);
                qtd_impares++;
            }

        }


        // Printf dos resultados
        
        printf("\n\n{ A soma dos numeros pares digitado foi: [ %d ] }", soma_pares);
        printf("\n\n{ A quantidade e numeros impares digitado foi: [ %d ] }", qtd_impares);


        //Só quebra de linha.
        printf("\n");
    
    printf("\nFim do programa!\n\n");       return 0;
}
// ===========================================================================



// 8) Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.

#include <stdio.h>

int main()
{

    int num_dif [10];
    int i=0, certinho;

        // Gravando os 6 valores:
        for (i=0; i < 10; i++)
        {
            printf ("\n- Apresente um valor para a posicao [ %d ] do vetor: ", i);
            scanf ("%d", &num_dif[i]);

            for (certinho=0; certinho < i; certinho++)
            {
                if (num_dif[i] == num_dif [certinho])
                {
                    printf("\n [ Numero repetido, calma la! ]");
                    i--;
                }
            }
        }


        // Printando o vetor para fonalzar:
        printf("\n- Por ordem apresentada, ficou guardado os seguintes numeros: ");
        
        for (i=0; i < 10; i++)
        {
            printf ("\t[ %d ]", num_dif[i]);
        }

    printf("\nFim do programa!\n\n");       return 0;  
}
// ===========================================================================





// ******************************** MATRIZES ********************************

// 1) Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui. 

#include <stdio.h>
#include <conio.h>

int main ()
{
  int matriz[4][4],i, j, qtd_maiores=0;
  
  printf ("\n- Digite valor para os elementos da matriz\n");
  
    for ( i=0; i<4; i++ )
    {
        for ( j=0; j < 4; j++ )
        {
            printf ("\tElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[ i ][ j ]);


            if (matriz [i][j] > 10)
            {
                qtd_maiores++;
            }
        }
    }
    
    printf("\n- Tem ( %d ) maiores que 10 nos numeros apresentados.", qtd_maiores);

    printf("\nFim do programa!\n\n");       return 0;  
}
// **************************************************************************



// 2) Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.

#include <stdio.h>

int main ()
{

    int matriz_quinta [5][5];
    int i, j;

    for (i = 0; i < 5 ; i++)
    {
        for (j = 0; j < 5 ; j++)
        {
            printf("\nElemento [%d] [%d] = 0", i, j);

            if (i == j)
            {
                printf("\nElemento [%d] [%d] = 1", i, j);
            }
        }

    }
    printf("\nFim do programa!\n\n");       return 0;  
}
// **************************************************************************



// 3) Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz_m_valor [4][4];
    int i, j, m_num=0, colun, lin;


    //Mensagem:
    printf("\n- Preencha a matriz: \n\n");


    // Lendo a matriz:
    for (i=0; i < 4; i++)
    {
        for (j=0; j < 4; j++)
        {
            printf ("\tElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz_m_valor[ i ][ j ]);
        }
    }


    //Mensagem:
    printf("\n- A matriz ficou:\n");


    // Printando a matriz:
    for ( i=0; i<4; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            printf ("\nElemento [%d] [%d] = %d", i, j, matriz_m_valor[ i ][ j ]);

            if (m_num < matriz_m_valor [i][j])
            {
                m_num   = matriz_m_valor [i][j];
                colun   = j;
                lin     = i;
            }
        }
    }

    // Resulado da maior:
    printf("\n\n- A maior valor lido foi %d, na linha [%d] e coluna [%d]", m_num, lin, colun);
    

    printf("\nFim do programa!\n\n");       return 0;  
}
// **************************************************************************



// 4) Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz_busca [5][5];
    int i, j, m_num=0, busca, certo, coluna, linha;


    //Mensagem:
    printf("\n- Preencha a matriz: \n\n");


    // Lendo a matriz:
    for (i=0; i < 5; i++)
    {
        for (j=0; j < 5; j++)
        {
            printf ("\tElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz_busca[ i ][ j ]);
        }
    }

    // Leitura de um valor:
    printf("\n- Digite um valor para ser buscado: ");
    scanf("%d", &busca);

    //Mensagem:
    printf("\n- A matriz ficou:\n");


    // Printando a matriz:
    for ( i=0; i < 5; i++ )
    {
        for ( j=0; j < 5; j++ )
        {
            printf ("\n Elemento [%d] [%d] = %d ", i, j, matriz_busca[ i ][ j ]);

            if (busca == matriz_busca[ i ][ j ])
            {
                certo++;
                coluna = j;
                linha = i;
            }
        }
    }

    // Resultado da busca:
    if (busca > 0)
    printf("\n\n- O numero %d foi achado!\nLinha [%d] e coluna [%d]", busca, linha, coluna);
    else
    printf("\n Nao encontrado!");


    printf("\n\nFim do programa!\n\n");       return 0;  
}
// **************************************************************************



// 5) Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:
// A[i][j] = 2i + 7j - 2            se i < j;
// A[i][j] = 3i^2 - 1               se i = j;
// A[i][j] = 4i^3 – 5j^2 + 1        se i > j:

#include <stdio.h>
#include <time.h>

int main ()
{

    int matriz_cond [10][10];
    int i, j, m_num=0, busca, certo, coluna, linha;


    //Mensagem:
    printf("\n- Preencha a matriz: \n\n");


    // Lendo a matriz:
    for (i=0; i < 5; i++)
    {
        for (j=0; j < 5; j++)
        {
            printf ("\tElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz_cond[ i ][ j ]);
        }
    }

    // Leitura de um valor:
    printf("\n- Digite um valor para ser buscado: ");
    scanf("%d", &busca);

    //Mensagem:
    printf("\n- A matriz ficou:\n");


    // Printando a matriz:
    for ( i=0; i < 5; i++ )
    {
        for ( j=0; j < 5; j++ )
        {
            printf ("\n Elemento [%d] [%d] = %d ", i, j, matriz_cond[ i ][ j ]);

            if (busca == matriz_cond[ i ][ j ])
            {
                certo++;
                coluna = j;
                linha = i;
            }
        }
    }
    
    printf("\n\nFim do programa!\n\n");       return 0;
}
// **************************************************************************



// 6) Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.

#include <stdio.h>

int main()
{
    
    int matriz[4][4];
    int i, j, k, l;
    
    // Lendo a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            do
            {
                printf("Apresente o valor de uma matriz. MATRIZ [%d][%d]", i, j);
                scanf("%d", &matriz[i][j]);
            } while (matriz[i][j] < 0 && matriz[i][j] > 21);
        }
    }

    // Tranformação:
    for ( k = 0; k < 4; k++)
    {
        for (l = 0; l < 4; l++)
        {
            printf("[%d] ", matriz[k][l]);
        }
        printf("\n");
    }

    printf("\n");


    // Print:
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (j> i)
            {
                matriz[i][j] = 0;
            }
        }   
    }

    // Print nova matriz:
    for ( k = 0; k < 4; k++)
    {
        for ( l = 0; l < 4; l++)
        {
            printf("[%d] ", matriz[k][l]);
        }
        printf("\n");
    }
    
    
    printf("\n\nFim do programa!\n\n");       return 0;  
}
// **************************************************************************



// 7)

// **************************************************************************



// 8)

// **************************************************************************
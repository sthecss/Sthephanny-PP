/* 
  ALuna       : Sthephanny Caroline da Silva Santos;
  Matricula   : 12211BCC044;
  lAB 03      : CONDICIONAIS;
  Recebido    : 21/10
  Entrega     : 
  Uberlandia 2022.
*/


// ==================== Exercicio 01 =====================
// Faça um programa que receba dois números e mostre qual deles é o maior.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int x1, x2;
    printf("Digite dois numeros reais, e sera mostrado o de maior valor: ");
    scanf("%d""%d", &x1, &x2);

    if (x1 > x2) {
      printf("O maior eh: %d.\n", x1);
    }

    if (x2 > x1) {
      printf("O maior eh: %d.\n", x2);
    }

    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 02 =====================
// Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num, raiz_quad;
    printf("\nDigite um valor: ");
    scanf("%f", &num);

    if (num > 0){
      raiz_quad = sqrt(num);
      printf("A raiz quadrada desse numeros eh de:%.4f\n", raiz_quad);
    }

    if (num < 0){
      printf("ERRO. O numero que digitou eh negativo.\n");
    }

    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 03 =====================
// Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num, raiz_quad, expo;
    printf("\nDigite um valor real: ");
    scanf("%f", &num);
    if (num > 0){
        raiz_quad = sqrt(num);
        printf("A raiz quadrada desse numeros eh de: %.4f\n", raiz_quad);
    }
    if (num < 0){
        expo = pow(num, 2); 	
        printf("Esse numero ao quadrdo eh de: %.f\n", expo);
  }
    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 04 =====================
/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado;
- A raiz quadrada do número digitado.
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num, raiz_quad, expo;
    printf("\nDigite um valor real: ");
    scanf("%f", &num);

    if (num > 0){
        raiz_quad = sqrt(num);
        printf("A raiz quadrada desse numeros eh de: %.4f\n", raiz_quad);
        expo = pow(num, 2); 	
        printf("Esse numero ao quadrdo eh de: %4.f\n", expo);
    }

    if (num < 0){
        printf("ERRO. O numero que digitou eh negativo. Redigite.\n");
    }

    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
//*/
// ======================================================


// ==================== Exercicio 05 =====================
// Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int num, zero;
    zero= 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("O numero digitado eh par.\n", num);
    }

    if ((num%2) != zero){
        printf("O numero eh impar.\n", num);
    }

    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 06 =====================
// Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float x1, x2, xS;
    printf("\nDigite dois numeros inteiros separados por espaco: ");
    scanf("%f" "%f", &x1, &x2);

    if (x1 > x2) {
      printf("%.f eh maior.\n", x1);
      printf("E a diferenca entre ambos eh: %.f\n", (x1-x2));
    }

    if (x2 > x1) {
      printf("%.f eh maior.\n", x2);
      printf("E a diferenca entre ambos eh: %.f\n", (x2-x1));
    }

    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 07 =====================
// Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem: “Números iguais”
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float x1, x2, xS;
    printf("\nDigite dois numeros inteiros separados por espaco: ");
    scanf("%f" "%f", &x1, &x2);
    if (x1 > x2) {
      printf("- %.f eh maior.\n", x1);
    }
    if (x2 > x1) {
      printf("- %.f eh maior.\n", x2);
    }
    if (x1 == x2){
      printf("- Numeros iguais.\n");
    } 
    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 08 =====================
// Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float N1, N2;
    printf("Digite duas notas: ");
    scanf("%f" "%f", &N1, &N2);
    if((N1>0, N1<=10)&&(N2>0, N2<=10)){
    printf("A media das notas apresentadas eh de: %.2f", (N1+N2)/2);
    } 
    if ((N1<0, N1>10)&&(N2<0,N2>10)){
      printf("Nota invalida.");
    }
    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


// ==================== Exercicio 09 =====================
// Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima“Empréstimo concedido”
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

  int salario, emprestimo, equivalencia, salario_20;

    printf("Digite o salario e o valor da prestacao do emprestimo:");
    scanf("%d" "%d", &salario, &emprestimo);

    salario_20 = salario/5;

    if (salario_20 > emprestimo){
      printf("Emprestimo concedido");
    }

    if (salario_20 < emprestimo){
      printf("Emprestimo nao concedido");
    }

    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 10 =====================
/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) – 58,0
- Mulheres: (62,1 * h) – 44,7
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    char genero;
    float H, M, halt, peso_IDM;
        printf("Se for homem digite H, se for mulher digite M: ");
        scanf("%c", &genero);

    switch( genero )
        {
            case 'H':
                printf("Digite sua altura em metros: ");
                scanf("%f", &halt);
                printf("Seu peso ideal eh: %.2f\n", (72.7 * halt) - 58);
                break;

            case 'M':
                printf("Digite sua altura em centimetros: ");
                scanf("%f", &halt);
                printf("Seu peso ideal eh: %.2f\n", (62.1 * halt) - 44.7);
                break;
        }
    printf("\nFim do programa!\n\n");
    system("pause");
    return 0;
} 

*/
// ======================================================


// ==================== Exercicio 11 =====================
// Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem: “Número inválido.

///*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int num, num_01, num_00, num_02, num_03,soma;
    printf("Digite um numero: \n");
    scanf("%d", &num_00);

    while (/* condition */)
    {
      /* code */
    }
    
    num_01 = num_00%10;       num_00 = num_00/10;
	  num_02 = num_00%10;       num_00 = num_00/10;
	  num_03 = num_00%10;       num_00 = num_00/10;

    
    soma= num_01+num_02+num_03;

    printf("A some eh: %d\n", soma);

    printf("Fim do programa!\n\n");
    system("pause");
    return 0;

} 
//*/
// ======================================================


// ==================== Exercicio 12 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 13 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 14 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 15 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 16 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
//*/
// ======================================================


// ==================== Exercicio 17 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 18 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 19 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


// ==================== Exercicio 20 =====================
// 
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


    printf("Fim do programa!\n\n");
    system("pause");
    return 0;
} 
*/
// ======================================================

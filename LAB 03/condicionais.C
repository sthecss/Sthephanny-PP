/* 
  ALuna       : Sthephanny Caroline da Silva Santos;
  Matricula   : 12211BCC044;
  lAB 03      : CONDICIONAIS;
  Recebido    : 21/10
  Entrega     : 
  Uberlandia 2022.
*/


// ==================== Exercicio 01 =====================
/* Faça um programa que receba dois números e mostre qual deles é o maior. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int x1, x2;
    printf("\nDigite dois numeros reais, e sera mostrado o de maior valor: ");
    scanf("%d""%d", &x1, &x2);

        (x1 > x2) ? printf("O maior eh: %d.\n", x1) :
                    printf("O maior eh: %d.\n", x2) ;


    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 02 =====================
/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num;
    printf("\nDigite um valor: ");
    scanf("%f", &num);

        (num > 0) ? printf("A raiz quadrada desse numeros eh de:%.2f\n", sqrt(num)) :
                    printf("ERRO. O numero que digitou eh negativo.\n") ;

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 03 =====================
/*Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num;
    printf("\nDigite um valor real: ");
    scanf("%f", &num);

        (num > 0) ? printf("A raiz quadrada desse numeros eh de: %.2f\n", sqrt(num)) :
                    printf("Esse numero ao quadrado eh: %.f\n", pow(num, 2)) ;

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 04 =====================
/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado;
- A raiz quadrada do número digitado. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num;
    printf("\nDigite um valor real: ");
    scanf("%f", &num);

        (num > 0) ? printf("- A raiz quadrada desse numero eh: %.2f\n- E esse numero ao quadrado eh: %4.f\n", (sqrt(num)), pow(num, 2) ) :
                    printf("ERRO. O numero que digitou eh negativo. Redigite.\n") ;


    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 05 =====================
/* Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar. */
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
    } else {
        ((num%2) != zero);
          printf("O numero eh impar.\n", num);
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} 
*/
// ======================================================


// ==================== Exercicio 06 =====================
/* Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float x1, x2, xS;
    printf("\nDigite dois numeros inteiros separados por espaco: ");
    scanf("%f" "%f", &x1, &x2);

        (x1 > x2) ? printf("- %.f eh maior.\n- E a diferenca entre ambos eh: %.f\n", (x1),  (x1-x2 ) ) :
                    printf("- %.f eh maior.\n- E a diferenca entre ambos eh: %.f\n", (x2),  (x2-x1 ) ) ;

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 07 =====================
/* Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem: “Números iguais”. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float x1, x2, xS;
    printf("\nDigite dois numeros inteiros separados por espaco: ");
    scanf("%f" "%f", &x1, &x2);

    if (x1 == x2){
      printf("- Numeros iguais.\n");

    } else {
        if (x1 > x2)
        printf("- %.f eh maior.\n", x1);
            else printf("- %.f eh maior.\n", x2);
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 08 =====================
/* Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float N1, N2;
    printf("Digite duas notas: ");
    scanf("%f" "%f", &N1, &N2);

    ( 0 <= N1 && N1 <= 10 && 0 <= N2 && N2 <= 10) ?     printf("A media das notas apresentadas eh de: %.2f", (N1+N2)/2) :
                                                        printf("Valor da nota invalida. Tente de novo.");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 09 =====================
/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima“Empréstimo concedido” */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

  int salario, emprestimo, equivalencia, salario_20;

    printf("\nDigite o salario e o valor da prestacao do emprestimo: ");
    scanf("%d" "%d", &salario, &emprestimo);

    salario_20 = salario/5;

    (salario_20 > emprestimo) ? printf("> > > Emprestimo concedido. < < <") :
                                printf("> > > Emprestimo nao concedido. < < <");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 10 =====================
/* Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) – 58,0
- Mulheres: (62,1 * h) – 44,7 */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    char genero;
    float halt;

            printf("Digite sua altura em metros: ");
            scanf("%f", &halt);
                
        printf("Se for homem digite H, se for mulher digite M: ");
        scanf(" %c", &genero);

    switch ( genero )
        {
            case 'H':
                printf("Seu peso ideal eh: %.2f\n", (72.7 * halt) - 58);        break;

            case 'M':
                printf("Seu peso ideal eh: %.2f\n", (62.1 * halt) - 44.7);      break;

                default:
                printf("Digite novamente. Lembre-se de ser H (para homens) ou M (para mulheres), em maisculo");
        }
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 11 =====================
/* Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem: “Número inválido. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()             {
  
    int num,soma=0;

    printf("\nDigite um numero inteiro e positivo qualquer: ");
    scanf("%d",&num);

   if (num>0) {
       while(num!=0)     {
       soma=soma+num%10;
       num=num/10;
    }
       printf("A soma dos algarismos desse numero eh de: %d\n",soma);

    }    else           {

       printf("O numero eh invalido.");
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
    } */
// ======================================================


// ==================== Exercicio 12 =====================
/* Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número inválido”. Se o número for positivo, calcular o logaritmo deste número. */
/*
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){

    float num;
    printf("\nDigite um numero inteiro qualquer: ");
    scanf("%f",&num);

    (num > 0) ? printf("O log do numero, com base e, eh de: %.f = %.2f \n",num,log(num))    :    printf("Numero invalido.");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 13 =====================
/* Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float N1, N2, N3, NM;
    printf("\nDigite as tres notas: ");
    scanf("%f" "%f" "%f", &N1, &N2, &N3);

    NM = (  (N1*1) + (N2*1) + (N3*2)  ) / (1+1+2);

    ( NM >= 60 )    ?   printf("A media das notas apresentadas eh de: %.2f.\n> > > Voce foi APROVADO. < < <\n", NM) :
                        printf("A media das notas apresentadas eh de: %.2f.\n> > > Voce foi REPROVADO. < < <\n", NM);

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 14 =====================
/* A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos:
- Trabalho de Laboratório: 2;
- Avaliação Semestral: 3;
- Exame Final: 5.
De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.
Faça todas as verificações necessárias. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float nlab, nsem, nexf, nmed;

    printf("\nDigite a sua nota no Trabalho de Laboratorio: ");
    scanf("%f", &nlab);
        printf("Digite a sua nota no Avaliacao Semestral: ");
        scanf("%f", &nsem);
            printf("Digite a sua nota no Exame Final: ");
            scanf("%f", &nexf);

    nmed = ( (nlab*2) + (nsem*3) + (nexf*5) ) / (2+3+5);

    if (nmed==0 , nmed <= 2.9)  {
    printf ("Sua media foi: %.2f, portando foi > > REPROVADO < <.\n", nmed);

    }else                       { 

          if (nmed>2.9, nmed<5)
          printf ("Sua media foi: %.2f, portando esta de > > RECUPERACAO < <.\n", nmed);

              else printf ("Sua media foi de: %.2f, portanto foi > > APROVADO < <.", nmed);
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 15 =====================
/* Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

  char num;
        printf("\nDigite um numero entre 1 e 7: ");
        scanf("%c", &num);

    switch( num )
    {
    case 1:     printf("O dia da semana eh: Domingo.");             break;
    case 2:     printf("O dia da semana eh: Segunda-Feira.");       break;
    case 3:     printf("O dia da semana eh: Terca-Feira.");         break;
    case 4:     printf("O dia da semana eh: Quarta-Feira.");        break;
    case 5:     printf("O dia da semana eh: Quinta-Feira.");        break;
    case 6:     printf("O dia da semana eh: Sexta-Feira.");         break;
    case 7:     printf("O dia da semana eh: Sabado.");              break;
    }
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
    } */
// ======================================================


// ==================== Exercicio 16 =====================
/* Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

char num;
        printf("\nDigite um numero entre 1 e 12: ");
        scanf("%d", &num);

    switch( num )
    {
    case 1:       printf("O mes eh: Janeiro.");         break;
    case 2:       printf("O mes eh: Fevereiro.");       break;
    case 3:       printf("O mes eh: Marco.");           break;
    case 4:       printf("O mes eh: Abril.");           break;
    case 5:       printf("O mes eh: Maio.");            break;
    case 6:       printf("O mes eh: Junho.");           break;
    case 7:       printf("O mes eh: Julho.");           break;
    case 8:       printf("O mes eh: Agosto.");          break;
    case 9:       printf("O mes eh: Setembro.");        break;
    case 10:      printf("O mes eh: Outubro.");         break;
    case 11:      printf("O mes eh: Novembro.");        break;
    case 12:      printf("O mes eh: Dezembro.");        break;
    }
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
    } */
// ======================================================


// ==================== Exercicio 17 =====================
/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 = (basemaior + basemenor) ∗ altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float base_M, base_m, altura;

    printf("\nPara calcular a area do trapezio, digite\n- A base maior: ");
    scanf("%f", &base_M);
    printf("- A mase menor: ");
    scanf("%f", &base_m);
    printf("- E por fim a altura: ");
    scanf("%f", &altura);

    ( base_M > 0 && base_m > 0) ?   printf("A area do trapezio eh: > > %.2f. < <", (base_M + base_m) * altura / 2) :
                                    printf("> > ERRO < <\nValor das bases invalida, tente novamente.");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 18 =====================
// Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

char conta;
    float num1, num2;
        printf("\nVamos calcular.\n- Para somar digite: +\n- Para subtrair digite: -\n- Para multiplicar digite: *\n- Para dividir digite: /\nSua escolha eh: ");
        scanf("%c", &conta);

    switch( conta )
        {
            case '+' :
                printf("Digite dois numeros: ");
                scanf("%f" "%f", &num1, &num2);
                printf("A soma de dois numeros eh: > > %.2f < < ", (num1 + num2));              break;
            case '-' :
                printf("Digite dois numeros: ");
                scanf("%f" "%f", &num1, &num2);
                printf("A subtracao dos dois numeros eh: > > %.2f < < ", (num1 - num2));        break;
            case '*' :
                printf("Digite dois numeros: ");
                scanf("%f" "%f", &num1, &num2);
                printf("A multiplicacao dos dois numeros eh: > > %.2f < <", (num1 * num2));     break; 
            case '/' :
                printf("Digite dois numeros: ");
                scanf("%f" "%f", &num1, &num2);
                printf("A divisao dos dois numeros eh: > > %.2f < <", (num1 / num2));           break;     
            default:
                printf("ERRO.\nOpcao invalida, tente novamente digitando algum dos caracteres validos.");
        }
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 19 =====================
// Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas, não simultaneamente pelos dois.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int num, n3, n5;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if ( (num%3) == 0)
            {
            printf("\nO numero > > eh < < divisivel por 3.");

            }   else    {

            if ( (num%5) != 0 && (num%3) != 0)
            {      

            printf ("\nO numero nao eh divisivel por nenhum ");
            
            } else printf("\no numero > > eh < < divisivel por 5.");
                        }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 20 =====================
/* Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
    - O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
    - Chama-se equilátero o triângulo que tem três lados iguais;
    - Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
    - Recebe o nome de escaleno o triângulo que tem os três lados diferentes; */

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int ladoD, ladoE, ladoB;

    printf("Digite tres valores: ");
    scanf("%d" "%d" "%d", &ladoD, &ladoE, &ladoB);

    if(ladoD + ladoE >= ladoB && ladoD + ladoB >= ladoE && ladoE + ladoB >= ladoD){

            if(ladoD == ladoE && ladoD == ladoB)
            printf("Equilatero\n");
        else
                if(ladoD == ladoE || ladoD == ladoB || ladoE == ladoB)
                printf("Isosceles\n");
                    else
                    printf("Escaleno\n");
        }
        else
        printf("> > ERRO < < Numeros invalidos. Tente novamente\n");


        printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
    } */
// ======================================================


//==================== Exercicio 21 =====================
/* Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
char opcao;
    float num1, num2;
      printf("\n1- Soma de 2 numeros.\n2- Diferenca entre 2 numeros (maior pelo menor).\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros.\n\nEscolha a opcao: ");
    scanf("%c", &opcao);
                printf("Digite dois numeros: ");
                scanf("%f" "%f", &num1, &num2);


    switch( opcao )
        {
            case '1' :
                printf("A soma de dois numeros eh: > > %.f < < ", (num1 + num2));
                break;
            case '2' :
                if (num1 > num2) {
                    printf("E a diferenca entre ambos eh: %.f\n", (num1-num2));
                        } else {
                            printf("E a diferenca entre ambos eh: > > %.f < <\n", (num2-num1));
                        }                                                           break;
            case '3' :
                printf("O produto dos dois numeros eh: > > %.2f < <", (num1 * num2));
                break;
            case '4' :
                if (num2 !=0){
                printf("A divisao dos dois numeros eh: > > %.2f < <", (num1 / num2));
                        }else{
                        printf("Denominador nao pode ser 0.");
                        }
                break;
        }
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 22 =====================
/*  Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

   int idade, tempo;
   printf("Digite sua idade e tempo trabalhado: ");
   scanf("%d" "%d", &idade, &tempo);

    ((idade >= 65) || ( tempo >= 30) || ( (idade>=60) && (tempo>=25) ) ) ?  printf("Voce PODE se aposentar!") :
                                                                            printf("Voce NAO PODE se aposentar!");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} //*/
// ======================================================


// ==================== Exercicio 23 =====================
/* Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

    int ano;
    printf("Digite um ano para saber se eh bissexto ou nao: ");
    scanf("%d", &ano);

    ( ((ano%400)==0) || ((ano%4)==0) && ((ano%100)!=0) )    ?   printf("EH um ano bissxto")          :  
                                                                printf("NAO eh um ano bissexto.")    ;

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 24 =====================
/* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro. */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () {

    float valorproduto;
    char estado;
    printf("Digite o valor o produto: ");
    scanf("%f", &valorproduto);
    printf("Dado os seguintes estados:\n1- MG.\n2- SP.\n3- RJ.\n4- MS.\nDigite o numero do estado que o produto se destina:");
    scanf(" %c", &estado);

    switch ( estado ) {
        case '1':
            printf("O preco final do produto foi de: %.2f", (valorproduto*0.07)+valorproduto);    break;

        case '2':
            printf("O preco final do produto foi de: %.2f", (valorproduto*0.12)+valorproduto);    break;

        case '3':
            printf("O preco final do produto foi de: %.2f", (valorproduto*0.15)+valorproduto);    break;

        case '4':
            printf("O preco final do produto foi de: %.2f", (valorproduto*0.08)+valorproduto);    break;
        }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================



// ==================== Exercicio 24 =====================
/* 25. Calcule as raízes da equação de 2º grau.
    Lembrando que:
    E ax2 + bx + c = 0 representa uma equação do 2º grau.
    A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
     Se Delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
     Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
     Se Delta >= 0, imprima as duas raízes reais.          */
//*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {


    int a = 0, b = 0, c = 0, delta = 0, comp=0;                     // Elementos essenciais para preenchimento das fórmulas:
    float x1=0, x2=0;

    printf("Considerando os três coeficientes de uma equaçao de segndo grau 'a','b' e 'c', escreva:\n");

    printf("O valor de (a): ");     scanf("%d", &a);        // elemento a

    printf("O valor de (b): ");      scanf("%d", &b);        // elemento b

    printf("O valor de (c): ");      scanf("%d", &c);        // elemento c        
    
    if (a != 0) {
        delta = (b*b) - (4*a*c);                                    // fórmula (b² - 4ac)
        //Comparativos:
        comp = delta < 0 ? 1 : 0;                                   // situacao == 1
        comp = delta == 0 ? 2 : 0;                                  // situacao == 2
        comp = delta > 0 ? 3 : 0;                                   // situacao == 3
        
        switch(comp)                                                // Considerando a natureza do delta:
        {
            case 1:
            printf("Delta abaixo de zero.\n");                                 break;
                
            case 2:
            printf("Ha somente uma raiz real para essa equacao.\n");           break;
            
            case 3:
            printf("Existe duas raizes reais para essa equacao.\n");           break;
        }
        
        if (comp > 1)                                             // Calculo das raizes, caso 2 e 3.
        {
            x1 = (-b + sqrt(delta)) / 2*a;
            x2 = (-b - sqrt(delta)) / 2*a;
            printf("As raizes sao: x1 = %.2f and x2 = %.2f \n", x1, x2);
        }
        }
        else                                                       // Aviso de raiz inexistente caso ocorra situacao 1.
        {
        printf("Não ha raizes para essa equacao.");
        }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} //*/
// ======================================================

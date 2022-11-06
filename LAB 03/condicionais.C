/* 
  ALuna       : Sthephanny Caroline da Silva Santos;
  Matricula   : 12211BCC044;
  lAB 03      : CONDICIONAIS;
  Recebido    : 21/10
  Entrega     : 3/11
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


// ==================== Exercicio 25 =====================
/* 25. Calcule as raízes da equação de 2º grau.
    Lembrando que:
    E ax2 + bx + c = 0 representa uma equação do 2º grau.
    A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”.
     Se Delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
     Se Delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
     Se Delta >= 0, imprima as duas raízes reais.          */
/*
sthe — 31/10/2022
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{

    float a=0, b=0, c=0, x1=0, x2=0, delta=0;

    printf("Digite os valores dos coeficientes a, b e c: ");
    scanf("%f" "%f" "%f", &a, &b, &c);

        delta= (b*b) - (4*a*c);

            if (delta > 0)
        {
                x1= -(b) + delta / (2*a);
                x2= -(b) - delta / (2*a);
                printf("As raizes da equacao sao:\nX1= %.2f\nX2= %.2f.\n", x1, x2);
        }
            if (delta ==0)
        {
                printf("\nRaiz unica.\n");
                x1 = -b / (2*a);
                printf("A raiz da equacao eh:\nX= %.2f.\n", x1);
        }
            if (delta<0)
        {
            printf ("\nNao ha raizes\n");
        }
    
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;

} */
// ======================================================


// ==================== Exercicio 26 =====================
/* Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:         CONSUMO (Km/l)           MENSAGEM
menor que       8                       Venda o carro!
entre           8 e 14                  Econômico!
maior que       14                      Super econômico!    */
/*
#include <stdio.h>
#include <math.h>

int main ()
{
    float km, litros, consumo;

        printf("\nDigite a distancia em km percorria, e o valor consumido de gasolina durante o trajeto: ");
        scanf("%f" "%f", &km, &litros);
        consumo = km/litros;
        printf("O consumo foi de: %.2f\n...Portanto...\n", consumo);

    if (consumo >= 14 )
    {
            printf("Super economico!\n");
    }
        else if (consumo >=8)
    {
            printf("Economico!\n");
    }
        else printf("Venda o carro!\n");
    
            printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 27 ====================
/* Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
Categoria       Idade
Infantil A      5 a 7
Infantil B      8 a 10
Juvenil A       11 a 13
Juvenil B       14 a 17
Sênior          maiores de 18 anos */
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf ("%d", &idade);

    if ((idade > 4) && (idade < 8))
        printf("\nInfantil A!\n");

        else if ((idade > 7) && (idade < 11))
            printf("\nInfantil B!\n");

        else if ((idade > 10) && (idade < 14))
            printf("\nJuvenil A!\n");
    
        else if ((idade > 13) && (idade < 18)) 
                printf("\nJuvenil B!\n");
                        
    else printf("\nSenior!\n");
  
    printf("\nFim do programa!\n\n");      system("pause");        return 0;
}*/
// ======================================================


// ==================== Exercicio 28 =====================
/* Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: raiz cubica √𝑥 ∗ 𝑦 ∗ 𝑧
(b) Ponderada: [(1∗𝑥)+(2∗𝑦)+(3∗𝑧)]/6
(c) Harmônica: 1 / (1/x+1) + (1/y+1) (1/1+z)
(d) Aritmética: (x+y+𝑧)/3           */
/*
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float numx, numy, numz;
    char media;

    printf("Digite tres numeros: ");
    scanf ("%f" "%f" "%f", &numx, &numy, &numz);

    printf("Dentre as medias:\n(a) Geometrica;\n(b) Ponderada\n(c) Harmonica\n(d) Aritmetica.\nDigite a.b.c ou d para escolher: ");
    scanf (" %c", &media);

    switch  ( media )
        {
            case 'a' :                                                                                                  // Geométrica
                printf("A media geometrica eh: > > %.2f < < ", pow ( (numx*numy*numz) , (float)1/3 ));
                                                                                                                            break;

            case 'b' :                                                                                                  // Ponderada
                printf("A media ponderada eh: > > %.2f < < ",  ((1*numx)+(2*numy)+(3*numz))/6);
                                                                                                                            break;

            case 'c' :                                                                                                  // Harmônica
                printf("A media harmonica eh: > > %.2f < <", ( 1 / ( (1/(numx+1)) + (1/ (numy+1)) + (1/(numz+1)) ) ) );
                                                                                                                            break;

            case 'd' :                                                                                                  // Aritmetica
                printf("A media aritmetica eh: > > %.2f < <", (numx+numy+numz)/3);
                                                                                                                            break;
            default:
                printf("ERRO.\nOpcao invalida, tente novamente digitando algum dos caracteres validos.");
        }
 
    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 29 =====================
// Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno acertou.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){

        int numa, numb, s = 0, r;

        printf("\n ==== Teste de Matematica ====\n");
        printf("\n Tudo pronto?\n");
        srand(time(NULL));

    //........................................................................

        // Questão 1    
                    numa = (rand () % 100);
                    numb = (rand() % 100);
                    printf("\n1- Dada a soma: %d + %d:\n", numa, numb);
                    printf("Digite a resposta:\n");
                    scanf("%d", &r);

                if (r == (numa + numb))
            {
                printf("CERTO\n");
                s++;
            }
                else
            {
                printf("ERRADO\n");
            }

    //........................................................................

        // Questão 2
                    numa = rand () % 100;
                    numb = rand() % 100;
                    printf("\n2- Dada a soma: %d + %d:\n", numa, numb);
                    printf("Digite a resposta:\n");
                    scanf("%d", &r);

                if (r == (numa + numb))
            {
                printf("CERTO\n");
                s++;
            }
            else
            {
                printf("ERRADO\n");
            }

    //........................................................................

        // Questão 3
                numa = rand () % 100;
                numb = rand() % 100;
                printf("\n3- Dada a soma: %d + %d:\n", numa, numb);
                printf("Digite a resposta:\n");
                scanf("%d", &r);


            if (r == (numa + numb))
            {
                printf("CERTO\n");
                s++;
            }
            else
            {
                printf("ERRADO\n");
            }

    //........................................................................

        // Questão 4
                numa = rand () % 100;
                numb = rand() % 100;
                printf("\n4- Dada a soma: %d + %d:\n", numa, numb);
                printf("Digite a resposta:\n");
                scanf("%d", &r);

            if (r == (numa + numb))
            {
                printf("CERTO\n");
                s++;
            }
            else
            {
                printf("ERRADO\n");
            }

    //........................................................................


        // Questão 5
                numa = rand () % 100;
                numb = rand() % 100;
                printf("\n5- Dada a soma: %d + %d:\n", numa, numb);
                printf("Digite a resposta:\n");
                scanf("%d", &r);

            if (r == (numa + numb)){
                printf("CERTO\n");
                s++;
            }
            else
            {
                printf("ERRADO\n");
            }
    //........................................................................    

    printf("\nNumeros de acertos %d \n", s);

    
    printf("\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 30 =====================
// Faça um programa que receba três números e mostre-os em ordem crescente.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
     int x1, x2, x3;

        printf("\nDigite o primeiro numero: ");             scanf("%d", &x1);

        printf("\nDigite o segundo numero: ");              scanf("%d", &x2);

        printf("\nDigite o terceiro numero: ");             scanf("%d", &x3);

        if ((x1 > x2) && (x2 > x3))
            {
                printf("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d, %d, %d.", x3, x2, x1);
            }
            else if ((x1 > x3) && (x3 > x2))
            {
                printf ("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d %d %d.", x2, x3, x1);
            }

        if ((x2 > x1) && (x1 > x3))
            {
                printf("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d, %d, %d.", x3, x1, x2);
            }
            else if ((x2 > x3) && (x3 > x1))
            {
                printf("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d, %d, %d.", x1, x3, x2);
            }
            
        if ((x3 > x1) && ( x1 > x2))
            {
                printf("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d, %d, %d.", x2, x1, x3);
            }
            else if (( x3 > x2 ) && ( x2 > x1))
            {
                printf("Em ordem crescente os numeros ficam ordenados na seguinte ordem: %d, %d, %d.", x1, x2, x3);
            }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 31 =====================
/* Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostra qual a classificação dessa pessoa.
.                         |....................................... Peso ................................................. |
........ Altura ......   |        Até 60            |     Entre 60 e 90 (Inclusive)    |            Acima de 90          |
.   Menor que 1,20      |             A            |                   D              |                 G               | 
.   De 1,20 a 1,70     |             B            |                   E              |                 H               |
.   Maior que 1,70    |             C            |                   F              |                 I              */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    float alt, peso;
    char clasf= ' ';

    printf("Digite sua altura: ");                  scanf("%f", &alt);
    printf("Digite seu peso: ");                    scanf("%f", &peso);


        if (peso <= 60)
        {
                if (alt <= 1.20)
                {
                    clasf = 'A';
                }

                else if (alt <= 1.70) 
                {
                    clasf = 'B';
                }
                
                else if (alt > 1.70) 
                {
                    clasf = 'C';
                }
        }

        else if (peso <= 90)
        {
                if (alt <= 1.20)
                {
                    clasf = 'D';
                }

                else if (alt <= 1.70)
                {
                    clasf = 'E';
                }

                else if (alt > 1.70)
                {
                    clasf = 'F';
                }
        }

        else if (peso >= 91)
        {
                if (alt <= 1.20)    
                {
                    clasf = 'G';
                }

                else if (alt <= 1.70)   
                {
                    clasf = 'H';
                }

                else if (alt > 1.70)
                {
                    clasf = 'I';
                }
        } 

    printf ("\n- Com base nos dados apresentados sua classificaco eh > > %c. < < ", clasf);
  
    printf ("\n\nFim do programa!\n\n");
    system ("pause");
    return 0;
} */
// ======================================================


// ==================== Exercicio 32 =====================
/* Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:
Especificação       Código              Preço
Cachorro Quente     100                 1,20
Bauru Simples       101                 1,30
Bauru com Ovo       102                 1,50
Hambúrguer          103                 1,20
Cheeseburguer       104                 1,70
Suco                105                 2,20
Refrigerante        106                 1,00         */
/*
#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main () {

    int     codigo;
    float   X, BS, qtd, preco;

    printf("Dada a seguinte lista:\n- Cachorro Quente: 100\n- Bauru-Simples: 101\n- Bauru com Ovo: 102\n- Hamburguer: 103\n- Chesseburguer: 104\n- Suco: 105\n- Refrigerante: 106.\n\n> Com isso digite o codigo do que deseja: ");
    scanf("%d", &codigo);

    printf("Especifique a quantidade pedida do produto: ");
    scanf("%f", &qtd);

    switch (codigo) {
    case 100:
        preco = 1.20 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    case 101:
        preco = 1.30 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    case 102:
        preco = 1.50 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    case 103:
        preco = 1.20 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    case 104:
        preco = 1.70 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    case 105:
        preco = 2.20 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break; 
    case 106:
        preco = 1 * qtd;
        printf("O valor dos cachorros quentes ficaram em: %.2f.", preco);
        break;
    
    default:
        printf("Invalido");
        break;
    }

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} //*/
// ======================================================


// ==================== Exercicio 33 =====================
/* Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a segunda tabela).  

PREÇO ANTIGO                             PERCENTUAL DE AUMENTO
até R$ 50                                           5%
entre R$ 50 e R$ 100                                10%
acima de R$ 100                                     15%

PREÇO NOVO                                      MENSAGEM
até R$ 80                                           Barato
entre R$ 80 e R$ 120 (inclusive)                    Normal
entre R$ 120 e R$ 200 (inclusive)                   Caro
acima de R$ 200                                     Muito caro          */
/*
#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main () {

    float     precoA, aumento, precoN;

    printf("De o valor antigo do produto: ");
    scanf("%f", &precoA);

    if (precoA <51)
    {
        aumento= precoA*1.5;
        printf("O novo preco ficou em1: %.2f", aumento);
    }

    else if ((precoA>49) && (precoA<101))
    {
        aumento= precoA*1.10;
        printf("O novo preco ficou em2: %.2f", aumento);
    }

    else if (precoA>99)
    {
        aumento= precoA*1.15;
        printf("O novo preco ficou em3: %.2f", aumento);
    }
    
    if (aumento <81)
    {
        printf("\nPortanto o produto esta > > barato. < <");
    }

    else if ( (aumento>79) && (aumento<120))
    {
        printf("\nPortanto o produto esta > > normal. < <");
    }

    else if ((aumento>120) && (aumento<201))
    {
        printf("\nPortanto o produto esta > > caro. < <");
    }
    else printf ("\nPortanto o produto está > > muito caro. < <");

    printf("\n\nFim do programa!\n\n");      system("pause");        return 0;
} //*/
// ======================================================


// ==================== Exercicio 34 =====================
/* Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.

NOTA                        CONCEITO (ATÉ 20 FALTAS)                CONCEITO (MAIS DE 20 FALTAS)
9.0 até 10.0                            A                                           B
7.5 até 8.9                             B                                           C
5.0 até 7.4                             C                                           D
4.0 até 4.9                             D                                           E
0.0 até 3.9                             E                                           E                 */
/*
#include <stdio.h>
#include <stdio.h>
#include <math.h>

int  main()  {

    float   nota;
    int     faltas;
    char conc = ' ';

    printf("\nDe o valor da sua nota: ");
    scanf("%f", &nota);

    printf("Quantidade de faltas ");
    scanf("%d", &faltas);

    if (faltas < 21)
        {
            if          (nota>= 9)	            conc = 'A';
            else if     (nota>= 7.5)	        conc = 'B'; 
            else if     (nota>= 5)              conc = 'C';
            else if     (nota>= 4)              conc = 'D';
            else if     (nota>= 0)              conc = 'E';
        }
   else
        {
            if          (nota>= 9)	            conc = 'B';
            else if     (nota>= 7.5)	        conc = 'C'; 
            else if     (nota>= 5)              conc = 'D';
            else if     (nota>= 4)              conc = 'E';
            else if     (nota>= 0)              conc = 'E';
        }

	printf("Conceito: > > %c < < \n", conc);

    printf("\nFim do programa!\n\n");      system("pause");        return 0;
} */
// ======================================================


// ==================== Exercicio 35 =====================
/* Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.  */
/*
#include <stdlib.h>
#include <stdio.h>

int main ()
{

    int dia, mes, ano, val=1;

    printf("\nDigite uma data. Data, mes seguido do ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);


    if  ( (dia >0) && (dia <32) )
    {

        // Verificacao de fevereiro.
        if (mes==2)
        {
            if (!(((ano%400)==0) || (((ano%4)==0) && ((ano%100)!=0)))) 
                if (dia>29)
                    val=0;
            else if (dia>28)
                val=0;
        }

        // Verificacao dos meses com 31.
        else if(!(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12))
        {
            if (dia>31)
                val=0;
        }

        // Verificacao dos meses com 30.
        else if(mes==4 || mes==6 || mes==9 || mes==11)
        {
            if (dia>30)
                val=0;
        }

    } else  val=0;


    // Verificacao da veracidade.
    if (val==0)
    {
        printf("Data invalida");
    }else 
        printf("Data eh valida");


    printf("\n\nFim do programa!\n\n");            return 0;
}  */
// ======================================================


// ==================== Exercicio 36 =====================
/* Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:
.            Venda mensal                                                         Comissão 
.Maior ou igual a R$100.000,00                                           R$700,00 + 16% das vendas
.Menor que R$100.000,00 e maior ou igual a R$80.000,00                   R$650,00 + 14% das vendas
.Menor que R$80.000,00 e maior ou igual a R$60.000,00                    R$600,00 + 14% das vendas
.Menor que R$60.000,00 e maior ou igual a R$40.000,00                    R$550,00 + 14% das vendas
.Menor que R$40.000,00 e maior ou igual a R$20.000,00                    R$500,00 + 14% das vendas
.Menor que R$20.000,00                                                   R$400,00 + 14% das vendas           */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float venda, comissao;

    printf("\nDe o valor da venda mensal: ");
    scanf("%f", &venda);

    if (venda < 20000 )
    {
        comissao = 400 + (venda*0.16) ;
    }

        else if (venda < 40000 )
    {
        comissao = 500 + (venda*0.14) ;
    }
    
        else if (venda < 60000 )
    {
        comissao = 550 + (venda*0.14) ;
    }
    
        else if (venda < 80000 )
    {
        comissao = 600 + (venda*0.14) ;
    }
    
        else if (venda < 100000 )
    {
        comissao = 650 + (venda*0.14) ;
    }
    
        else if (venda >= 100000 )
    {
        comissao = 700 + (venda*0.16) ;
    }
    
    printf ("\nCom base nas suas vendas mensais a sua comissao eh de %.2f", comissao);

    printf("\n\nFim do programa!\n");        return 0;
} */
// ======================================================


// ==================== Exercicio 37 =====================
/* As tarifas de certo parque de estacionamento são as seguintes:
- 1a e 2a hora              - R$1,00 cada;
- 3a e 4a hora              - R$1,40 cada;
- 5a hora e seguintes       - R$2,00 cada

O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.     */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    float eH, eM, entrada, sH, sM, saida, hP, total;
    int perma;

    printf("\nDigite a hora de entrada. Horas e depois minutos, separados por espaco: ");
    scanf("%f %f", &eH, &eM);

    printf("Digite a hora de saida. Horas e depois minutos, separados por espaco: ");
    scanf("%f %f", &sH, &sM);


    // ============ Calculos e conversao de tempo ============
    
    if (eH > sH) eH -= 24;
    {
        entrada = eH * 60 + eM;
        saida   = sH * 60 + sH;
        perma   = saida - entrada;
    }
    if (perma % 60 > 0)
    {
        hP = perma / 60 + 1;
    } 
    
    else
    {
        hP = perma / 60;
    }

    // ========== Para calcular o preço a ser pago ==========

    // Permanencia entre 1 e 2 horas
    if (hP <= 2)
    {
        total = hP * 1;
    }
    
    // Permanencia entre 3 e 4
    else if (hP <= 4)
    {
        total = hP * 1.4;
    }
    
    // Permanencia de 5 horas em diante.
    else
    {
        total = hP * 2;
    }

    printf("O total a pagar e de R$%.2f\n", total);

    printf("\nFim do programa!\n\n");           return 0;
} */
// ======================================================


// ==================== Exercicio 38 ====================
/* Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia, Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia fornecido é um dia válido:
- dia > 0                                                               (ok)
- dia <= 28 para o mês de fevereiro (29 se o ano for bissexto)          (ok)
- dia <= 30 em abril, junho, setembro e novembro                        (ok)
- dia < 31 nos outros meses.                                            (ok)
- Teste a validade do mês: mês > 0 e mês < 13.                          (ok)
- Teste a validade do ano: ano <= ano atual (use uma constante definida com o valor igual a 2022).
- Imprimir: “data válida” ou “data inválida” no final da execução do programa. */
/*
#include <stdlib.h>
#include <stdio.h>

int main ()
{

    int dia, mes, ano, anoA=2022, val=1;

    printf("\nDigite sua data de nascimento. Data, mes seguido do ano, separados por espaco: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano <= anoA)
    {
        if ( (mes >0) && (mes<13) )
        {
            if  ( (dia >0) && (dia <32) )
            {
                // Verificacao de fevereiro.
                if (mes==2)
                {
                    if (!(((ano%400)==0) || (((ano%4)==0) && ((ano%100)!=0)))) 
                        if (dia>29)
                            val=0;
                    else if (dia>28)
                        val=0;
                }

                // Verificacao dos meses com 31.
                else if(!(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12))
                {
                    if (dia>31)
                        val=0;
                }

                // Verificacao dos meses com 30.
                else if(mes==4 || mes==6 || mes==9 || mes==11)
                {
                    if (dia>30)
                        val=0;
                }
            } else  val=0;
        } else  val=0;
    } else  val=0;

    // Verificacao da veracidade.
    if (val==0)
    {
        printf("\n> > Data invalida < <");
    }else 
        printf("\n> > Data eh valida < <");

    printf("\n\nFim do programa!\n\n");            return 0;
} */
// ======================================================


// ==================== Exercicio 39 ====================
/* Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
- o valor do salário atual do funcionário;
- o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.

Salário Atual       | Reajuste (%) 
Ate 500,00          | 25%          
Ate 1000,00         | 20%          
Ate 1500,00         | 15%          
Ate 2000,00         | 10%          
Acima de 2000,00    | Sem reajuste 

Tempo de Serviço  | Bônus 
Abaixo de 1 ano   | Sem bônus 
De 1 a 3 anos     | 100,00 
De 4 a 6 anos     | 200,00 
De 7 a 10 anos    | 300,00 
Mais de 10 anos   | 500,00              */
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    
    int temposerv;
    float reajuste, bonus, salarioatual;

    printf("\nDigite seu salario atualmente: ");             scanf("%f", &salarioatual);    

    printf("Digite quantos anos trabalho aqui: ");         scanf("%d", &temposerv);

    if      (salarioatual <= 500.0)      
                reajuste = 0.25;

        if (salarioatual <= 1000.0)         
    {
                reajuste = 0.20;
    }
    else if (salarioatual <= 1500.0)         
    {
    reajuste = 0.15;
    }
    else if (salarioatual <= 2000.0)         
    {
    reajuste = 0.10;
    }
    else                                     
    reajuste = 0.0;
    
        if (temposerv < 1)                     
            bonus = 0.0;
        if (temposerv <= 3)   
    {                 
            bonus = 100.0;
    }
        else if (temposerv <= 6)                    
    {
            bonus = 200.0;
    }
       else if  (temposerv <= 10)        
    {
            bonus = 300.0;
    }
        else                              
            bonus = 500.0;

    printf("O salario reajustado ficou em: %.2f", salarioatual + (salarioatual * reajuste) + bonus);

    printf("\n\nFim do programa!\n\n");            return 0;
} */
// ======================================================


// ==================== Exercicio 40 ====================
/* O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.

CUSTO DE FÁBRICA                | % DO DISTRIBUIDOR | % DOS IMPOSTOS 
ate R$12.000,00                 | 5                 | isento 
entre R$12.000,00 e R$25.000,00 | 10                | 15 
acima de R$25.000,00            | 15                | 20            */
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    float custofab, custo_cons, com, imp;

    printf("\nDigite o custo de fabricacao da fabrica: R$");
    scanf("%f", &custofab);

    if (custofab <= 12000) 
    {
        com = 0.05;
    }
        else if (custofab <= 25000)
    {
        com = 0.1;
    }
        else
        com = 0.15;

    if (custofab <= 12000)
    {
        imp = 0;
    }
    else if (custofab <= 25000)
    {
        imp = 0.15;
    }
        else
        imp = 0.2;

    // Calculo do custo para consumir.
    custo_cons = custofab * (1 + com + imp);

    printf("\nO custo ao consumidor eh de: R$%.2f", custo_cons);

    printf("\n\nFim do programa!\n\n");            return 0;
} */
// ======================================================

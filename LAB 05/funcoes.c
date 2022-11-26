


// =====================================================================================================================================
//  01) Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

#include <stdio.h>

int dobro(int num1);

int main ()
{
    int num1;

    printf ("\n- Digite um numero inteiro qualquer: ");
    scanf ("%d", &num1);

    printf ("- O dobro desse numero eh: [ %d ]\n", dobro(num1)); 

    printf ("\nFim do programa!\n");             return 0;
}

int dobro(int num1)
{
    return num1 * 2;
}

// .....................................................................................................................................



// =====================================================================================================================================
// 02) Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.


#include <stdio.h>

int data(int Dia_A, int Mes_A, int Ano_A);

int main ()
{
    int Dia_A, Mes_A, Ano_A;

    printf ("\n- Digite uma data com dia, mes em ano em sequencia separados por espaco: ");

    scanf("%d %d %d", &Dia_A, &Mes_A, &Ano_A);
   
    printf("\n");

    data(Dia_A,Mes_A,Ano_A); 

    printf("\n");

    printf("\nFim do programa!\n");

    return 0;
}

int data(int Dia_A, int Mes_A, int Ano_A)
{
    switch ( Mes_A )
    {
        case 1:
        printf("[ %d de Janeiro de %d ]", Dia_A, Ano_A);                break;

        case 2:
        printf ("[ %d de Fevereiro de %d ]", Dia_A, Ano_A);             break;

        case 3:
        printf("[ %d de Março de %d ]", Dia_A, Ano_A);                  break;

        case 4:
        printf ("[ %d de Abril de %d ]", Dia_A, Ano_A);                 break;

        case 5:
        printf("[ %d de Maio de %d ]", Dia_A, Ano_A);                   break;

        case 6:
        printf("[ %d de Junho de %d ]", Dia_A, Ano_A);                  break;

        case 7:
        printf("[ %d de Julho de %d ]", Dia_A, Ano_A);                  break;

        case 8:
        printf("[ %d de Agosto de %d ]", Dia_A, Ano_A);                 break;

        case 9:
        printf ("[ %d de Setembro de %d ]", Dia_A, Ano_A);              break;

        case 10:
        printf("[ %d de Outubro de %d ]", Dia_A, Ano_A);                break;

        case 11:
        printf ("[ %d de Novembro de %d ]", Dia_A, Ano_A);              break;

        case 12:
        printf ("[ %d de Dezembro de %d ]", Dia_A, Ano_A);              break;
        
        default:
        printf("[ Invalido. ]");                                        break;
    }
}
// .....................................................................................................................................



// =====================================================================================================================================
// 03) Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.

#include <stdio.h>

int ver (int num);

int main()
{
    int num, valor;

    printf("\n- Digite um numero: ");
    scanf ("%d",&num);

    printf("\n[ Retornara ( 1 ) se for positivo ] \t [ Retornara ( -1 ) se for negativo ] \t [ E retornara ( 0 ) se for 0 ]");
    
    printf("\n\n[ %d ]\n", ver (num));
 
    printf("\nFim do programa!\n");                 return 0;
}

int ver (int num)
{
    int valor;

    if (num>0)      // Positivo
    {
        valor= 1;
    }

    if (num<0)      // Negativo
    {
        valor= -1; 
    }

    if (num==0)     // Igual a 0
    {
        valor = 0;
    }

    return valor;
}

// .....................................................................................................................................



// =====================================================================================================================================
// 04) Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro. Ex.: 1, 4, 9...


#include <stdio.h>
#include <math.h>

float quadrado_perfeito (float numquad);

int main ()
{
    float numquad;

    printf("\n- Digite um numero para verificar se eh quarado perfeito: ");
    scanf("%f", &numquad);

    numquad = quadrado_perfeito (numquad);

    if (numquad==2)
    {
        printf("\n[ O numero EH quadrado perfeito! ]");
    } else printf ("\n[ O numero NAO e quadrado perfeito! ]");
    

    printf("\n\nFim do progama!\n");                      return 0;
}   

float quadrado_perfeito (float numquad)
{
    int raiz_q, verificacao;

    raiz_q = sqrt(numquad);

    if ((raiz_q * raiz_q) == numquad)
    {
        verificacao = 2;
    }

    else
    {
       verificacao = 0;
    }

    return verificacao;
}
// .....................................................................................................................................



// =====================================================================================================================================
//  05) Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado por parâmetro.

#include <stdio.h>
#include <math.h>

int volume_da_esfera (int raio);

int main ()
{
    int raio, volume;

    printf("\n- Qual o raio da esfera em cm? ");
    scanf("%d", &raio);

    printf("O volume eh: %d cm cubicos", volume_da_esfera(raio));

    printf ("\n\nFim do programa!");      return 0;
}

int volume_da_esfera (int raio)
{
    int cubo, volume;

    cubo = pow (raio, 3);
    volume = (4 * M_PI * cubo)/3;

    return (volume);
}
// .....................................................................................................................................



// =====================================================================================================================================
// 06) Faça uma função que receba 3 números inteiros como parâmetro, representando horas minutos e segundos, e os converta em segundos.

#include <stdio.h>
#include <math.h>

conversao_seg(int hora_R, int minuto_R, int segundo_R);

int main()
{
    int hora_R, minuto_R, segundo_R;   
        
    printf("\n- Digite as horas: ");
    scanf("%d", &hora_R);
    
    printf("\n- Digite os minutos: ");
    scanf("%d", &minuto_R);
        
    printf("\n- Digite os segundos: ");
    scanf("%d", &segundo_R); 
    
    printf("\n- A conversao para segundos ficou em [ %d ]\n", conversao_seg(hora_R, minuto_R, segundo_R));
    
    printf ("\nFim do programa!\n");      return 0;
}

conversao_seg(int hora_R, int minuto_R, int segundo_R)
{
    int soma = 0;

    soma = hora_R * 3600;
    soma = soma + (minuto_R * 60);
    soma = soma + segundo_R;
    
    return soma;
}
// .....................................................................................................................................



// =====================================================================================================================================
//  07) Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 / 5,0 ) + 32,0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius

#include <stdio.h>

int Fahrenheit (int celsius);

int main ()
{

    int celsius = 0;

    printf("\n- Digite uma temperatura em celsius para conversao: ");
    scanf("%d", &celsius);

    printf ("\n- A temperatura em Fahrenheit sera de: [ %d ]", Fahrenheit (celsius));

    printf ("\n\nFim do programa!");      return 0;
}

int Fahrenheit (int celsius)
{
    return (celsius * (9.0 / 5.0) + 32.0);
}
// .....................................................................................................................................



// =====================================================================================================================================
// 08) Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.

#include <stdio.h>
#include <math.h>

float raiz_hipot (float num_a, float num_b);

int main ()
{
    float num_a, num_b;

    printf("\n- Digite dois numeros: ");
    scanf("%f %f", &num_a, &num_b);

    printf("\n- A raiz da hipotenusa eh: [ %.2f ]\n", raiz_hipot (num_a, num_b));


    printf ("\nFim do programa!");      return 0;
}   

float raiz_hipot (float a, float b)
{
    return sqrt((a * a) + (b * b));
}
// .....................................................................................................................................



// =====================================================================================================================================
// 09) Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = PI * RAIO ^2 , onde PI = 3.141592.

#include <stdio.h>

float volume_do_cilindro (float alt, float raio);

int  main()
{
    float alt, raio;

    printf("\n- Digite a altura do cilindro: ");
    scanf("%f", &alt);

    printf("\n- Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("\n- O volume do cilindro eh de: [ %f ]\n", volume_do_cilindro (alt, raio));

    printf ("\nFim do programa!");      return 0;

}

float volume_do_cilindro (float alt, float raio)
{
    float volume, pi = 3.141592;

    volume = pi * (raio * raio) * alt;

    return volume;
}
// .....................................................................................................................................



// =====================================================================================================================================
// 10) Faça uma função que receba dois números e retorne qual deles é o maior.

#include <stdio.h>

int main()
{

    int maior, primeiro_num, segundo_num;

    printf("\n- Digite o primeiro numero: ");
    scanf("%d", &primeiro_num);
    
    printf("\n- Digite o segundo numero: ");
    scanf("%d", &segundo_num);


    maior = analise(primeiro_num, segundo_num);
    
    switch(maior)
    {
        case 1:
        printf("\n [ %d > %d ]", primeiro_num, segundo_num);        break;
        
        case 2:
        printf("\n [ %d > %d ]", segundo_num, primeiro_num);        break;
        
        case 3:
        printf("\n [ %d = %d ]", primeiro_num, segundo_num);        break;
    }

    printf("\n\nFim do programa!");     return 0;
}

int analise (int primeiro_num, int segundo_num)
{
    if (primeiro_num > segundo_num)
        return 1;
        
    else if (primeiro_num < segundo_num)
        return 2;
    
    else if (primeiro_num == segundo_num)
        return 3;
}
// .....................................................................................................................................



// =====================================================================================================================================
/*  11) Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for:
- A, a função deverá calcular a média aritmética das notas do aluno;
- Se for P, deverá calcular a média ponderada, com pesos 5, 3 e 2       */

#include <stdio.h> 
#include <stdlib.h>

float media (int nota1, int nota2, int nota3, char letra);

int main ()
{
    int nota1, nota2, nota3;
    float m;
    char letra;

    printf("\n- Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("\n- Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("\n- Digite a terceira nota: ");
    scanf("%d", &nota3);

    printf("\n- Digite (a) para aritmetica, (p) ponderada: ");
    scanf(" %c", &letra);
    
    letra   = toupper(letra);                       // Transformar qualquer a ou p em maiuscula.
    m       = media(nota1, nota2, nota3, letra);


    printf ("\nA media ");

        if (letra == 'A')
            printf("aritimetica");
        else if(letra == 'P')
            printf("ponderada");
            
    printf(" das tres notas eh de: [ %.2f ]\n", m);

   printf ("\nFim do programa!");     return 0;
}


float media (int nota1, int nota2, int nota3, char letra)
{
    if(letra=='A')
        return (nota1+nota2+nota3)/3;
    else if(letra=='P')
        return ( (nota1*5) + (nota2*3) + (nota3*2) )/10;
}
// .....................................................................................................................................



// =====================================================================================================================================
// 12) Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.

#include <stdio.h>
#include <math.h>

int soma_dos_numeros (int num);

int main (){
    int num, soma;
    printf("\n- Digite um numero: ");
    scanf("%d", &num);
    
    if (num == 0)
    {
        printf("\n [ INVALIDO ]\n");
    }

    else
    {
    soma = soma_dos_numeros (num);

    printf("\n- A soma dos digitos do numero %d eh: [ %d ]\n", num, soma);
    }

    printf("\nFim do programa!");    return 0;
}

int soma_dos_numeros (int num)
{
    int dig, resul = 0;
    
    while (num > 0)
    {
        dig = num % 10;
        num = (num - dig)/10;
        resul += dig;
    }

return resul; 
}
// .....................................................................................................................................



// =====================================================================================================================================
/*  13) Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a operação que se deseja efetuar com os números
- Se o símbolo for ‘+’ deverá ser realizada uma adição
- Se for ‘–‘ uma subtração,
- Se for ‘*’ uma multiplicação
- Se  for ‘/’ será efetuada uma divisão.         */

#include <stdio.h>

int operacao (int prim, int seg, int oper);

int main ()
{

    int prim, seg;
    char oper;

    printf("\n- Digite o primeiro valor: ");
    scanf("%d", &prim);
    printf("\n- Digite o segundo valor: ");
    scanf("%d", &seg);

    printf("\n ( + )  para adicao\t ( - )  para subtracao\t ( * )  para multiiplicacao\t ( / )  para divisao\n\n=== A operacao que voce quer eh: ");
    scanf(" %c", &oper);

    printf("\n- O resultado da operacao eh [ %d ].\n", operacao(prim, seg, oper));
    
    printf ("\nFim do programa!");      return 0;
}


int operacao (int prim, int seg, int oper)
{
    switch (oper)
    {
        case '+':
        return prim+seg;
        break;

        case '-':
        return prim-seg;
        break;

        case '*':
        return prim*seg;
        break;

        case '/':
        return prim/seg;
        break;
    }
}
// .....................................................................................................................................



// =====================================================================================================================================
// 14) Faça uma função que receba a distância em Km e a quantidade de litros de gasolina  consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma  mensagem de acordo com a tabela abaixo:
/*  CONSUMO (Km/l)          MENSAGEM
menor que 8                 Venda o carro!
entre 8 e 14                Econômico!
maior que 14                Super econômico! */

#include <stdio.h>

int  perfomance(float km, float L_usado);

int main ()
{
    float km, L_usado, perf_carro;

    printf ("\n- Apresente a distancia em Km: ");
    scanf ("%f", &km); 
    
    printf("\n- Apresente a quantidade de litros de gasolina consumidos no um percurso: "); 
    scanf ("%f", &L_usado); 

    perf_carro = perfomance(km, L_usado);

    if ( perf_carro < 8)
    {
        printf ("\n[ Venda o carro! ]");
    } 
	
	else if (perf_carro < 14)
    {
        printf("\n[ Economico! ]"); 
    } 
	
	else printf("\n[ Super economico! ]");

    printf("\n\nFim do programa!");    return 0;
}

int  perfomance(float km, float L_usado)
{ 
    float result;

    result = km/L_usado;

    return result; 

}
// .....................................................................................................................................



// =====================================================================================================================================
/* 15) Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. Elabore funções para:

a) Determinar se eles lados formam um triângulo, sabendo que:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.

b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.       */

#include <stdio.h>

int ver_exist_triangulo (int lado_a, int lado_b, int lado_c);

int tipo_do_triangulo(int lado_a, int lado_b, int lado_c);

int main()
{
    int lado_a, lado_b, lado_c, resultado_ver;
    

    printf("\n- Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado_a);
    
    printf("\n- Digite o segundo lado do triangulo: ");
    scanf("%d", &lado_b);
    
    printf("\n- Digite o terceiro lado do triangulo: ");
    scanf("%d", &lado_c);
    
    resultado_ver = ver_exist_triangulo(lado_a, lado_b, lado_c);


    if (resultado_ver == 1)
    {
        printf("\n- O triangulo existe!\n");

        tipo_do_triangulo( lado_a, lado_b, lado_c);
    }

    else if (resultado_ver == 0)
    {
        printf("\n=== Triangulo INVALIDO, tente de novo :) ===");
    }
        
    printf("\n\nFim do programa!\n\n");      return 0;
}

int ver_exist_triangulo (int lado_a, int lado_b, int lado_c)
{
    if ((lado_a <= lado_b + lado_c) && (lado_b <= lado_a + lado_c) && (lado_c <= lado_a + lado_b))
        return 1;

    else
        return 0;
}

int tipo_do_triangulo(int lado_a, int lado_b, int lado_c)
{
    printf("\n- E com isso, podemos determinar que esse triangulo eh ");

    if (lado_a == lado_b && lado_a == lado_c && lado_b == lado_c)
        printf("[ equilatero! ]");
    
    else if (lado_a != lado_b && lado_a != lado_c && lado_b != lado_c)
        printf("[ escaleno! ]");
    
    else
        printf("[ isosceles! ]");
}

// .....................................................................................................................................



// =====================================================================================================================================
// 16) Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos sinais de igual serão mostrados.

#include <stdio.h>
#include <math.h>

int artista_de_linha (int qtd);

int main()
{
    int qtd;
    printf("\n- Digite a quantidade de sinais que voce quer impresso na linha: ");
    scanf("%d", &qtd);

    artista_de_linha (qtd);


    printf("\nFim do programa!");       return 0;
}

int artista_de_linha (int qtd)
{
    int i;

    for (i = 0; i < qtd; i++)
        printf("=");
        printf("\n");
}
// .....................................................................................................................................



// =====================================================================================================================================
//  17) Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles.

#include <stdio.h>

float verificacao (float primeironum, float segundonum);

int main ()
{
    float num1, num2, CONTA=0;

    printf("\n- Digite o primeiro numero inteiro positivo: ");
    scanf("%f", &num1);
    printf("\n- Digite o segundo numero inteiro positivo: ");
    scanf("%f", &num2);

    CONTA = verificacao (num1, num2);

    printf ("\n- A soma dos numeros entre ambos eh de [ %.f ].\n", CONTA);

    printf ("\nFim do programa!");      return 0;
}

float verificacao (float num1, float num2)
{
    float soma=2;

    if (num1 > num2)
    {
        soma = ((num1 + num2) * (num1-num2-1))/2;             // 5 * 
    }

    else if (num2 > num1)
    {
        soma = ((num2 + num1) * (num2-num1-1))/2;             // 5 * 2 
        
    }

    else soma = 0;

    return soma;
}
// .....................................................................................................................................



// =====================================================================================================================================
// 18) Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o  resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação

#include <stdio.h>

int poten (int x, int z);

int main ()
{
    int x, z, resultado_expo;

    printf ("\n- Apresente dois valores: ");
    scanf ("%d %d", &x, &z);

    resultado_expo = poten (x, z);

    printf ("\n- O primeiro numero, elevado pelo segundo eh [ %d ].", resultado_expo); 

    printf("\n\nFim do programa!");     return 0;
}

int poten (int x, int z)
{  
    int P=1, cont=0;

    for (cont = 0 ; cont < z ; cont++)
    {
        P = P * x;
    }
    
    return P; 
}

// .....................................................................................................................................



// =====================================================================================================================================
//  19) Faça uma função que receba um número inteiro positivo n e calcule o seu fatorial, n!

#include <stdio.h>

int fatorial (int numero);

int main ()
{
    int numero;

    printf("\n- Digite um numero para ser apresentado o fatorial: ");
    scanf("%d", &numero);

    printf("\n[ O fatorial desse numero eh: { %d } ]", fatorial(numero)); 


    printf ("\n\nFim do programa!");      return 0;
}

int fatorial (int numero)
{
    
    int i, produto=1; 

    for (i=2; i<=numero; i++)
    {
        produto = produto*i; 
    }

    return produto; 
}
// .....................................................................................................................................



// =====================================================================================================================================
// 20) Escreva uma função para determinar a quantidade de números primos abaixo de N.

#include <stdio.h>
#include <math.h>

int primo (int nd);

int main()
{
    int numero_primo, ok_primo;

    printf("\n- Digite um numero diferente de 0 e 1, e em seguida sera apresentado os numeros primos ate ele: ");
    scanf("%d", &numero_primo);

    printf("\n");

    if (numero_primo == 0 || numero_primo == 1)
    {
        printf("[ INVALIDO ]\n");
    }

    else ok_primo = primo (numero_primo);

    printf("\nFim do programa!");       return 0;
}

int primo (int numero_primo)
{
    int num_inic = 2, queb = 0, contagem = 0, veri = 0, subida = 0;

    while (num_inic <= numero_primo)
    {
        // Calculo!
        for (contagem = 2; contagem < num_inic; contagem++)
        {
            queb = 0;                         
            veri = num_inic % contagem;

            if (veri == 0)
            {
                queb++;                       
                break;
            }

        }

        // Quebra de linha!
        if (queb == 1)
        {
            printf("");
        }

        // Impress primo!
        if (queb == 0)
        {
            printf("%d\n", num_inic);
            
            // Soma!
            subida = subida + num_inic;
        }

        num_inic++;
    }
    return subida;
}
// .....................................................................................................................................



// =====================================================================================================================================
/* 21) Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas com pontos de exclamação, conforme o exemplo abaixo (para n = 5):
!
!!
!!!
!!!!
!!!!!                    */
#include <stdio.h>

int piramide (int grand);

int main()
{
    int grand;
    printf("\n- Digite a quantidade de linhas que voce quer impimir: ");
    scanf("%d", &grand);

    piramide (grand);
    
    printf("\n- Fim do Programa!");      return 0;
}

int piramide (int grand)
{
    int i, cnt;

    for (i = 1; i <= grand; i++)
    {
        for (cnt = 1; cnt <= i; cnt++)
        {
            printf("!");
        }
        printf("\n");
    }
}
// .....................................................................................................................................



// =====================================================================================================================================

// 22)  Não existe.

// .....................................................................................................................................



// =====================================================================================================================================
// 23). Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, 
// a saída para n = 4 seria:
// *
// **
// ***
// ****
// ***
// **
// *

#include <stdio.h>

int retorno (int x);

int main (){
    int tam;

    printf("\n- Digite o tamanho do triangulo lateral que deseja: ");
    scanf("%d", &tam);
    retorno(tam);

    printf("\nFim do programa!");     return 0;
}

int retorno (int tam)
{

    for(int i = 1; i <= tam; i++)
    {
        for(int x = i; x > 0; x--)
        {
        printf("*");
        }
        
        printf("\n");
    }

    for(int i = tam-1; i >= 1; i--)
    {
        for(int x = i; x > 0; x--)
        {
        printf("*");
        }
        
        printf("\n");
    }
}
// .....................................................................................................................................




// =====================================================================================================================================
/* 24) Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1.
     *
    ***
   *****
  *******
 *********
***********     */

#include <stdio.h>
#include <math.h>

int volta (int x);

int main ()
{
    int base;
    printf("\n- Digite o tamanho do triangulo que deseja: ");
    scanf("%d", &base);
    volta(base);

    printf("\nFim do programa!");        return 0;
}

int volta (int base)
{
    int lado, var_a, var_b;

    for (lado = 1; lado <= base; lado++)
    {
        for (var_a = 1; var_a <= (lado * 2 - 1); var_a++)
        {
            for (var_b = lado; var_b < base; var_b++)
            {
                if (var_a == 1)
                {
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }
}
// .....................................................................................................................................
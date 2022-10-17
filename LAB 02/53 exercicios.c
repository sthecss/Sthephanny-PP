/*  Lista com 53 Exercicios da Disciplina PP.
    Sthephanny C.S Santos.
    Uberlandia 2022.

    Adendo- Deixei cada um dos codigos entre comentarios de paragrafo para que a reversao do algoritmo em codigos uteis seja mais tranquilo para a compilacao. Espero que facilite ao inves de atrapalhar :) Aceito feedback caso tenha ficado ruim.
*/

// ==================== Exercicio 01  ==================== 
// Faça um programa que leia um número inteiro e o imprima.
/*
#include <stdio.h>
#include <stdio.h>
int main (){

    int inteiro=225;
    printf("O numero a seguir eh exemplo de um numero inteiro: %d \n", inteiro);

    printf("Fim do programa!\n");
    system ("pause");
    return 0;
}
*/
// ====================================================== 


// ==================== Exercicio 02 ====================
// Programa que leia um número real e o imprima.
/*
#include <stdio.h>
#include <stdio.h>

void main (){

    float real=141.5342;
    printf("O numero a seguir eh exemplo de um numero real: %f\n", real);

    printf("Fim do programa!\n");
    system ("pause");
    return 0;
}
*/
// ======================================================

// ==================== Exercicio 03 ====================
// Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n01, n02, n03, soma;

    printf("Vamos comecar uma soma de tres numeros inteiros!\n ");
    printf("Insira o primeiro valor: ");
    scanf("%d", &n01);
    printf("Insira o segundo valor: ");
    scanf("%d", &n02);
    printf("Insira o terceiro valor: ");
    scanf("%d", &n03);
    soma = n01 + n02 + n03;
    printf("A soma dos tres valores eh: %d", soma);
    printf("\n\n");

    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
*/
// ======================================================


// ==================== Exercicio 04 ====================
// Leia um número real e imprima o resultado do quadrado desse número.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n01 = 25;
    printf("O quadrado de 25 eh = %.2f", n01*n01);
    printf("\n\n");
   
    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
*/
// ======================================================


// ==================== Exercicio 05 ====================
//  Leia um número real e imprima a quinta parte deste número.
/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n01 = 25;
    printf("A quinta parte de 25 e = %.2f", n1/5);
    printf("\n\n");

    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
*/
// ====================================================== 


//==================== Exercicio 06 =====================
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    float temperatura_0, y;

    printf("Vamos iniciar a conversao de celsius para fahrenheit.\n");

    printf("Digite a temperatura em Graus Celsius que deseja converter:\n");
    scanf("%f", &temperatura_0);
    y = temperatura_0 *(9.0/5.0) + 32.0;
    printf("A temperatura em convertida para fahrenheit eh: %.2f\n", y);
    printf("\n");

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 07 =====================
// Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){
    float temp, c;
    printf ("Vamos iniciar a conversao de fahrenheit para celsius. \n");
    printf ("Digite o valor em fahrenheit que voce deseja converter:\n");
    scanf ("%f", &temp);
    c = 5 * (temp - 32)/9;
    printf("Essa temperatura convertida em celsius eh: %.2f\n", c);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 08 =====================
// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){
    float kelvin, c;

    printf ("Vamos iniciar a conversao de kelvin para celsius! \n");
    printf ("Digite um valor em kelvin paraa transformar:\n");
    scanf ("%f", &kelvin);
    c = kelvin - 273.15;
    printf("Essa temperatura em celsius sera: %.2f\n", c);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 09 =====================
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){
    
    float c, kelvin;

    printf ("Vamos iniciar a conversao de celsius para kelvin! \n");
    printf ("Digite um valor em celsius para a conversao:\n");
    scanf ("%f", &c);
    kelvin = c + 273.15;
    printf("Essa temperatura em kelvin sera de: %.2f\n", kelvin);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}    
*/
// ======================================================


//==================== Exercicio 10 =====================
// Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float km, ms ;

    printf ("Vamos iniciar a conversao de uma velocidade em km/h (quilometros por hora) e converter para m/s (metros por segundo)! \n");

    printf ("Apresente uma velocidade em km para transformar:\n");
    scanf ("%f", &km);
    ms = km/3.6;
    printf("Essa velocidade em ms sera de: %.2f\n", ms);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 11 =====================
// Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e M em m/s.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float km, ms ;
    printf ("Vamos converter uma velocidade em m/s (metros por segundo) para km/h (quilometros por hora)!\n");
    printf ("Apresente em ms que sera convertida:\n");
    scanf ("%f", &ms);
    km = ms*3.6;
    printf("Essa velocidade em km sera de: %.2f\n", km);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}     
*/
// ======================================================


//==================== Exercicio 12 =====================
// Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float dist_m, dist_k;
    printf ("Vamos converter uma distancia em milhas para quilometros!\n");
    printf ("Apresente uma distancia em milhas\n");
    scanf ("%f", &dist_m);
    dist_k = 1.61*dist_m;
    printf("Essa distancia em quilometros sea portanto: %.2f", dist_k);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}  
*/
// ======================================================


//==================== Exercicio 13 =====================
// Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    printf("Vamos converter uma distancia em quilometros para mikhas!\n");
    float dist_m, dist_k;
    printf ("Apresente uma distancia em quilometros para conversao:\n");
    scanf ("%f", &dist_k);
    dist_m = dist_k/1.61;
    printf("Essa distancia em milhas sera de: %.2f\n", dist_m);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 14 =====================
// Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G* /180, sendo G o ângulo em graus e R em radianos e  = 3.141592
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float angulo, radianos, pi;
    pi = 3.14159;
    printf ("Vamos converter graus em radianos!\n");    
    printf ("Digite um valor em graus referente a um angulo:\n");
    scanf ("%f", &angulo);
    radianos = angulo * pi/180;
    printf("Esse valor em radianos eh igual a: %.5f\n", radianos);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 15 =====================
//  Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R*180/ , sendo G o ângulo em graus e R em radianos e  = 3.141592
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float angulo, radianos, pi;
    pi = 3.14159;

    printf ("Vamos converter um angulo de radianos em graus!\n");
    printf ("Digite o valor do angulo em radianos para ser convertido:\n");
    scanf ("%f", &radianos);
    angulo = radianos * 180/pi;
    printf("Esse valor em graus sera igual a: %.5f\n", angulo);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 16 =====================
// Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float polegadas, centimetros;
    printf ("Vamos converter um comprimento de polegadsa para centimetros!\n");
    printf("O valor em polegadas que iremos converter:\n");
    scanf ("%f", &polegadas);
    centimetros= polegadas*2.54;
    printf("Esse valor em centimetros sera de: %.2f\n", centimetros);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 17 =====================
// Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){
    float polegadas, centimetro;
    printf ("Vamos converter um comprimento de centimetros para polegadas!\n");
    printf ("Digite o comprimento em centimetros que iremos converter:");
    scanf ("%f",&centimetro);
    polegadas= centimetro/2.54;
    printf("Esse valor em polegadas sera igual a: %f\n", polegadas);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 18 =====================
// Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros cúbicos.
//
#include <stdio.h>
#include <stdlib.h>

int main (){

        float volume_m3, litros;
        printf("Vamos converter um valor em metros cubicos para litros! \n");
        printf("Digite aqui o valor em metros cubicos  \n");
        scanf ("%f", &volume_m3);
        litros= 1000*volume_m3;
        printf("Esse valor em litros equivale a: %.2f\n", litros);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
//
// ======================================================

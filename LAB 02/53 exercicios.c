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

    int inteiro;
    printf("Digite um numero inteiro para que eu possa repetir:\n");
    scanf("%d", &inteiro);

    printf("Seu numero foi:\n%.d.", inteiro);

    printf("\nFim do programa!\n");
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

int main (){

    float real;
    printf("Digite um numero inteiro para que eu possa repetir:\n");
    scanf("%f", &real);

    printf("Seu numero foi (ele sera apresentado com 5 casas depois da virgula):\n%.5f.", real);

    printf("\nFim do programa!\n");
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
    float n01;
    printf("Digite um valor para ser calculado o seu quadrado: \n");
    scanf("%f", &n01);
    printf("O quadrado do numero eh: %.f", n01*n01);
    printf("\n\n");
   
    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
*/
// ======================================================


// ==================== Exercicio 05 ====================
//  Leia um número real e imprima a quinta parte deste número.
//*

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n01;
    printf("")
    printf("A quinta parte de 25 e = %.2f", n1/5);
    printf("\n\n");

    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
//*/
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
/*
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
*/
// ======================================================


//==================== Exercicio 19 =====================
//Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros cúbicos.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float m_3, L;
    printf("Vamos converter a seguir um valor dado em litro para metros cubicos!\n");
    printf("Digite um valor em litros para a conversao: \n ");
    scanf ("%f", &L);
    m_3 = L/1000;
    printf("Esse valor em metros cubicos equivale a: %f\n", m_3);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


// ==================== Exercicio 20 =====================
// Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
/*
#include <stdio.h>
#include <stdlib.h>

int main () {
        float kg, libras;
        printf("Vamos iniciar a seguir a conversao de quilogramas para libras\n");
        printf("Apresente um valor em quilogramas que sera convertido:\n");
        scanf("%f", &kg);
        libras= kg/0.45;
        printf("Esse valor em quilogramas sera da seguinte forma em libras:\n%f\n", libras);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 21 =====================
// Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float libras, kg;
    printf("Vamos iniciar a converso de uma massa em libras para quillogramas\n");
    printf("Digite um valor de massa em libras para converter:\n");
    scanf("%f", &libras);
    kg= libras * 0.45;
    printf("Esse valor em quilogramas sera igual a: %f\n", kg);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 22 =====================
// 22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float jardas, m;
        printf("Vamos converter um comprimento em jardas para metros a seguir.\n");
        printf("Digite o valor em jardas que sera convertido:\n");
        scanf ("%f", &jardas);
        m= jardas * 0.91;
        printf ("Esse valor em jardas sera em metros: %.2f\n", m);


    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 23 =====================
// Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float m, jardas;
        printf("Vamos a seguir converter metros em jardas.\n");
        printf("Apresente um valor em metros para converter:\n");
        scanf ("%f", &m);
        jardas= m/0.91;
        printf ("Tal valor de metros para jardas sera de: %.2f\n", jardas);


    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 24 =====================
// Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em acres.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float m_02, acres;
        printf("Vamos transformar uma area que esta em metros quadrados para acres.\n");
        printf ("Apresente o valor de uma area em metros quadrados para a conversao:\n");
        scanf("%f", &m_02);
        acres= m_02 * 0.000247;
        printf ("Tal valor em metros quadrados, quando tranformado em acres, sera de:\n%.6f\n", acres);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 25 =====================
// Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float m_02, acres;
        printf("Vamos transformar a seguir a area em acres em metros quadrados.\n");
        printf ("Digite o valor de uma area em acres para a conversao:\n");
        scanf("%f", &acres);
        m_02= acres * 4048.58;
        printf ("Esse valor em metros quadrados e igual a:\n%.2f\n", m_02);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 26 =====================
// Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em hectares.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float m_02, hect;
        printf("Vamos converter uma area em metros quadrados para hectares.\n");
        printf ("Digite o valor de uma area em metros quadrados para a conversao:\n");
        scanf("%f", &m_02);
        hect= m_02* 0.0001;
        printf ("Esse valor de metros quadrados convertidos em hectares eh igual a:\n%.4f\n", hect);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 27 =====================
// Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em hectares.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float m_02, hect;
        printf ("Vamos a seguir converter uma area em hectares para metros quadrados.\n");
        printf ("Digite o valor de uma area em hectares para iniciar a conversao:\n");
        scanf("%f", &hect);
        m_02= hect* 1000;
        printf ("Esse valor em hectares, agora em metros quadrados, sera igual a:\n%.2f\n", m_02);


    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 28 =====================
// Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float num_1,num_2,num_03, resultado_soma;

        printf("Digite tres valores, separados por expaco:\n");
        scanf("%f %f %f", &num_1, &num_2, &num_03);
        resultado_soma= (num_1*num_1) + (num_2*num_2) + (num_03*num_03);
        printf ("A soma dos quadrados dos tres valores apresentados eh igual a:\n%.1f\n", resultado_soma);
    
    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 29 =====================
// Leia quatro notas, calcule a média aritmética e imprima o resultado.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float num_1,num_2,num_03,num_04, media_arit;
        printf ("A seguir será calculada a media aritmetica das quatro ntoas que digitar.\n");
        printf("Por favor, digite as quatro notas que quer a media, separando por espacos:\n");
        scanf("%f %f %f %f", &num_1, &num_2,&num_03, &num_04);
        media_arit=(num_1 + num_2 + num_03+ num_04)/4;
        printf ("A media desses quatro valores eh:\n%.2f\n", media_arit);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 30 =====================
// Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        float  R, USD, resultado;
        printf ("A seguir voce podera converter um valor em Real, a moeda brasileira, para a cotacao do dolar atual.\n"); //valor mais aproximado do dia que programei, claro.
        printf("Apresente o valor em Real para a cotacao:\n");
        scanf("%f", &R);
        USD= 5,28 ;
        resultado= R * USD;
        printf("Tal valor em Reais, convertido para o nosso resultado, dolares, passara a ser:\n%.2f\n", resultado);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 31 =====================
// Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, ant, suc;
    printf ("A seguir irei ler o numero inteiro que digitar, e te mostrarei o antecessor e o sucessor dele.\n");
    printf("Apresente o numero inteiro que deseja testar:\n");
    scanf("%D", &num);
    ant= num-1;
    suc=num+1;
    printf("O antecessor desse numero eh: %d \n", ant);
    printf("O sucessor desse numero eh: %d \n", suc);


    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 32 =====================
// Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, ant, suc, soma;
    printf ("\nCom o numero que me der, irei te mostrar a soma do sucessor de seu triplo com o antecessor de seu dobro.\n");
    printf("\nApresente o numero inteiro que deseja testar:\n");
    scanf("%D", &num);
    ant=(num * 2)- 1;
    suc= (num * 3) + 1;
    soma= ant + suc;
    printf("O antecessor desse numero eh: %d \n", ant);
    printf("O sucessor desse numero eh: %d \n", suc);
    printf("A soma desses valores eh: %d\n", soma);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 33 =====================
// Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float lado, area;
    printf("Digite o valor do lado de um quadrado, que te darei o resultado da area:\n");
    scanf("%f", &lado);
    area= lado * lado;
    printf("Dado esse valor, a area desse quadrado sera igual a:\n%.2f\n", area);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 34 =====================
// Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo é *raio2, considere  = 3.141592.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float R, area, pi;
    pi= 3.141592;
    printf("Digite o valor do raio de um circulo, que irei calcular a area:\n");
    scanf("%f", &R);
    area= pi * ( R * R);
    printf("A area desse circulo e igual a:\n%.6f\n", area);
        return 0;

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 35 =====================
// Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float a, b, hipot;
    printf ("Sejam a e b catetos de um triangulo, digite-os, separados por um espaço, para obeter o valor da hipotenusa:\n");
    scanf("%f %f",&a, &b);
    hipot = sqrt((a*a)+(b*b));
    printf("Dado os valores, a hipotenusa sera igual a:\n%f\n", hipot);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 36 =====================
// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V =  * raio2 * altura, onde  = 3.141592.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float H, vol, R, pi;
    printf ("Se seguir calcularemos o volume de um cilindro.\n");
    pi= 3.141592;
    printf("Apresente a altura e raio de um cilindro, separabdo-os por um espaço:\n");
    scanf("%f %f", &H, &R);
    vol= pi * (R * R) * H;
    printf("O volume do cilindro portanto sera igual a:\n%.6f\n", vol);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 37 =====================
// Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float produto, desconto;
    printf("Digite o valor do produto para receber o desconto de 12 porcento:\n");
    scanf("%f", &produto);
    desconto= produto * 0.88;
    printf("Parabens! O valor do produto, por causa do desconto, passou a ser:\n%.2f\n", desconto);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 38 =====================
// Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float salario, aumento;
    printf ("Digite o salário que receberá o aumento de 25 porcento:\n");
    scanf ("%f", &salario);
    aumento= salario* 1.25;
    printf("Congratulacoes! Com o aumento, o salario passara a ser:\n%.2f\n", aumento);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 39 =====================
/*A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
*/ 
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float win1, win2, win3, val;
    printf ("O valor de R$780.000,00 sera divido entre os tres ganhadores, de acordo com as condicoes previamente estabelecidas.\n");
    val= 780000;
    win1= val * 0.46;
    win2= val * 0.32;
    win3= val* 0.22;
    printf("O valor que o primeiro ganhador recebeu eh de: %.2f \n", win1);
    printf("O valor que o segundo ganhador recebeu eh de: %.2f \n", win2);
    printf("O valor que o terceiro ganhador recebeu eh de: %.2f \n", win3);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 40 =====================
// Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float dias;
    printf("Para calcular o salario do encanador, ja com os descontos do imposto de renda, digite a quantidade de dias que o encanador trabalhou:\n");
    scanf("%f" , &dias);
    float salario = 30.00;
    float imposto_rend, sal_final;
    imposto_rend = salario * 0.08;
    sal_final = salario - imposto_rend;
    printf("\nO encanador recebera:\nR$%.2f\n" , sal_final * dias);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 41 =====================
// Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    printf("Para pagar devidamente o funcionário, considere o valor abaixo, e responda algumas perguntas:\n");
        float hora_dia = 6;
    printf("Voce recebe por hora: R$%.2f", hora_dia);
        float hora_mes;
    printf("\nQuantas horas voce trabalhou esse mes? Digite abaixo:\n");
    scanf("%f", &hora_mes);
        float hrs_trab = hora_dia * hora_mes;
        float bonus, sal_fim;
    bonus = hrs_trab * 0.10;
    sal_fim = hrs_trab + bonus;
    printf("Voce recebera esse mes: R$%.2f", sal_fim);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 42 =====================
// Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.
/*

#include <stdio.h>
#include <stdlib.h>

int main (){

    float salario_base, bonificacao, salario_IR, salario_final;
    printf("Para calcular devidamente o salario que deve ser recebido esse mes, digite primeiro o salario base:\n");
    scanf("%f", &salario_base);

    bonificacao = salario_base * 1.05;
    salario_IR = salario_base * 0.07;
    salario_final = bonificacao - salario_IR;
    printf("Com base nas informacoes dadas o seu salario, considerando a bonificacao de 5 porcento e o desconto do imposto de renda, sera de:\nR$%.f\n", salario_final);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 43 =====================
/* Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
// GRANDISSISSIMO ADENDO!!!!!!!!! No enunciado a parcela comenta ser 3 porcento sem juros, mas isso fica realmente confuso. Entao considerarei pacela de TRES VEZES;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float desc_10, parcelamento, comissa_avista, comissao_parcel, produtoV, produto_desc;

    printf("O valor que for entregue ao programa resultara em 4 situacoes: \n\n- A primeira o valor total com um desconto de 10 porcento;\n- O segundo caso sera mostrado o valor das parcelas em 3 vezes sem juros;\n- O terceiro caso a comissao do vendedor em caso de venda avista;\n- E na quarta situacao, o valor da comissao em caso de venda parcelada.\n");
    printf("Digite o valor do produto:\n");
    scanf("%f", &produtoV);

    desc_10 = produtoV * 0.1;
    produto_desc = produtoV - desc_10;
    printf("O valor do produto com 10 porcento de descoto eh de: \nR$%.2f.\n", produto_desc);

    parcelamento = produtoV / 3;
    printf("O valor do produto parcelado em tres vezes sem juros foi de: \nR$%.2f.\n", parcelamento);

    comissa_avista = produto_desc * 0.05;
    printf("Considerando pagamento avista, a comissao do vendedor sera de:\nR$%.2f\n.", comissa_avista);

    comissao_parcel = produtoV * 0.05;
    printf("Considerando pagamento parcelada, a comissao do vendedor sera de:\nR$%.2f\n.", comissao_parcel);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 

*/
// ======================================================


//==================== Exercicio 44 =====================
// Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    float alt_deg, alt_alcanc, quant_deg;

    printf("Nesse programa sera dada a quantidade de degraus que voce devera subir, considerando a altura dos degraus e a altura que deseja atingir subindo.\nPrimeiro, digite a altura dos degraus em centimetro:\n");
    scanf("%f", &alt_deg);

    printf("Agora digite a altura que almeja subir em metros:\n" );
    scanf("%f", &alt_alcanc);

    quant_deg= (alt_deg*100) * alt_alcanc;
    printf("A quantidade de degraus que devera subir eh:%.f\n", quant_deg);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 45 =====================
// Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    char letra_;
    printf("Digite uma letra minuscula para transformar em maiuscula:\n");
    scanf("%c", &letra_);
    letra_ = toupper(letra_);
    printf("\nEssa letra em maiusculo sera demonstrado da seguinte forma:\n%c" , letra_);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 46 =====================
/* Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido. Exemplo:
- Numero_lido = 123
- Numero_gerado = 321
*/

// Nessa questao foi usado a seguinte logica matematica: dividimos por 10 o numero que queremos inverter. Iniciamos a divisao de 543 como exemplo, e ela tera como quociente inteiro 54, e resto 3. Esse resto sera nosso primeiro numero; em segundo temos a divisao com 54 (o quociente anterior), que tera como resultado inteiro 5, e resto da conta 4. Por nao ter como continuar, fica: 3 como primeiro algorismo por ser o primeiro resto da primeira conta; e sguimos com a segunda conta, que dara como segundo numero o resto da divisao, 4; e por ulimo o inteiro 3, quecoeinte da segunda conta.

/*
#include <stdio.h>
#include <stdlib.h>

int main (){

    int num_00, num_01, num_02, num_03;
    printf("Digite um numero positivos de tres digitos, ele sera invertido:\n");
    scanf("%d", &num_00);
 
    num_01 = num_00%10;
	num_00 = num_00/10;
	num_02 = num_00%10;
	num_00 = num_00/10;
	num_03 = num_00%10;
	num_00 = num_00/10;

    printf("%d%d%d\n", num_01, num_02, num_03);

    printf("Fim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 47 =====================
// Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
//
/*
#include <stdio.h>
#include <stdlib.h>

int main (){

        int num, num1, num2, num3, num4;
        printf("Digite um numero inteiro de 4 digitos (1000 a 9999):\n");
        scanf("%d", &num);
        num1= num%10;
        num2= (num%100)/10;
        num3= (num%1000)/100;
        num4= (num%10000)/1000;

        printf("\n %d", num4);
        printf("\n %d", num3);
        printf("\n %d", num2);
        printf("\n %d \n", num1);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 48 =====================
// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float segun, min, hora;

    printf("Digite um valor em segundos, e ele sera expresso em horas, minutos e segundos:\n");
    scanf("%f", &segun);

    hora= segun / 3600;
    min= segun / 60;

    printf("\nDado o valor, ele sera convertido em: \n%.2f h;  ", hora);
    printf("%.1f m;  ", min);
    printf("%.f s.\n", segun);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 
*/
// ======================================================


//==================== Exercicio 49 =====================
// Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) do termino da mesma.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

    int hor, min, seg, duracao, s1, s2, s3, t1, t2, t3;

    printf("Vamos calcular o horario que seu experimento finalizara com base em dois dados que precisara aparesentar. O horario que esse experimento iniciou, e a duracao em segundos.\n- Com isso, vamos iniciar com o horario. Digite o horario, incluindo horas, minutos e segundos. OBS- Separados por espacos: ");
        scanf("%d", &t1);
        scanf("%d", &t2);
        scanf("%d", &t3);

    printf("- Agora apresente a duracao do experimento. Lembrando ser em segundos:");
    scanf("%d", &duracao);

        hor = duracao / 3600;
        min = (duracao % 3600) / 60;
        seg = ((duracao % 3600) % 60);
        s1 = hor + t1;
        s2 = min + t2;
        s3 = seg + t3;
    
    printf("\nCom base nos dados apresentados, a hora que esse experimento terminara eh: %dh %dm, %ds", s1, s2, s3);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
} 

// ======================================================


//==================== Exercicio 50 =====================
//Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int idade_at, ano_at, ano_nasc;
    printf("Com base no ano atual, e a sua idade, vamos considerar seu ano de nascimento. Digite primeiro sua idade e depois o ano atual: ");
        scanf("%d", &idade_at);
        scanf("%d", &ano_at);

    ano_nasc = ano_at - idade_at;

    printf("Seu ano de nascimento, considerando que ja fez aniversario esse ano, eh: %d.", ano_nasc);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
 
*/
// ======================================================


//==================== Exercicio 51 =====================
// Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0, 0)
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float x = 0;
    float y = 0;
    float R = 0;
    printf ("Digite a coordenada x: \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y: \n");
    scanf ("%f", &y);
    R=sqrt(pow(x,2)+pow(y,2));
    printf("A distancia e: %f \n", R);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
   return 0;
}
*/
// ======================================================


//==================== Exercicio 52 =====================
// Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){

    float a, b, c, apos_inv1, apos_inv2, apos_inv3, apos_invALL, valor_PR, val_pr1, val_pr2, val_pr3;

    printf("Vamos calcular o premio devido a cada um dos tres jogadores. Consideraremos, apostador 'a', 'b' e 'c' ate o final do calculo.\n");

    printf("\nValor aposta amigo 1: ");
    scanf("%f", &a);
    printf("\nValor aposta amigo 2: ");
    scanf("%f", &b);
    printf("\nValor aposta amigo 3: ");
    scanf("%f", &c);
    
    apos_invALL = a + b + c;

    printf("\n= O valor que investiram para as apostas foi de: %.2f.\n" , apos_invALL);

    printf("\n- Segundo, agora digite o valor do premio: ");
    scanf("%f", &valor_PR);

        apos_inv1 = (a * 100) / apos_invALL;
        apos_inv2 = (b * 100) / apos_invALL;
        apos_inv3 = (c * 100) / apos_invALL;

    printf("Considerando as informacoes dadas, sera: \n");
    printf("\n- Apostador 'a' ganhara: %.f;", valor_PR * apos_inv1/100);
    printf("\n- Dado o seu investimeno que aprenta: %.1f porcento do ganho obtido.", apos_inv1);
    printf("\n- Apostador 'b' ganhara: %.f;", valor_PR * apos_inv2/100);
    printf("\n- Dado o seu investimeno que aprenta: %.1f porcento do ganho obtido.", apos_inv2);
    printf("\n- Apostador 'c' ganhara: %.f;", valor_PR * apos_inv3/100);
    printf("\n- Dado o seu investimeno que aprenta: %.1f porcento do ganho obtido.\n", apos_inv3);

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================


//==================== Exercicio 53 =====================
// Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    

    printf("\nFim do programa!\n");
    printf("\n");
    system("pause");
    return 0;
}
*/
// ======================================================
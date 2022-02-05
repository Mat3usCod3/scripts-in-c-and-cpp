
// Equação do segundo grau em c;
// OBSERVAÇÃO: O programa será finalizado somente quando o usuário escolher a opção de parada!
// 1-> CONTINUE 0-> FINALIZE 

#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    float xa, xb;
    float a, b, c, delta, parada, delta2, bascara;
    int condition = 1;
    
    while (condition == 1){

        printf("Valor A: ");
        scanf("%f", &a); 
        printf("Valor B: ");
        scanf("%f", &b);
        printf("Valor C: ");
        scanf("%f", &c);
                
        // Utilizando a fórmula 1;
        delta = pow(b, 2) - (4*(a*c));
        printf("Delta = %f\n", delta);

        // Verificando as raízes;
        if (delta > 0){
            printf("Duas raizes reias distintas! DELTA^1/2 = %f\n", delta);
        }
        if (delta == 0){
            printf("Duas raizes reais e iguais! DELTA^1/2 = %f\n", delta);
        }
        if (delta < 0){
            printf("Nao existe raiz real! DELTA^1/2 = %f\n", delta);
        }

        // Somente se o valor de delta for maior ou igual a zero;
        if (delta>=0){

        xa = (((-1*b) + sqrt(delta)) / (2*a));
        xb = (((-1*b) - sqrt(delta)) / (2*a));

        }

        // Se houver duas raízes reais e iguais, será exibida apenas uma;
        if (xa == xb){
            printf("Para x' e x'' = %f\n", xa);
        }
        else {
            printf("Para X1 = %f\n", xa);
            printf("Para X2 = %f\n", xb); 
        }

        //Condição de Parada do programa! 1 Verdadeiro, 0 Falso;
        printf("'Deseja continuar? Sim|1| Nao|0|'\n");
        scanf("%f", &parada);
        if (parada==0){
            break;
        }
        else {
            continue;
        }
    }           
    return 0;
}
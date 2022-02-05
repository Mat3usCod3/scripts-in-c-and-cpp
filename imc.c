// Calculando o índice de massa coporal;

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Calculo IMC\n");

    float massa, altura, imc;
    int question, condition;
    
    // Recebendo as variáveis;

    condition = 1;
    while (condition==1) {

        printf("Peso: ");
        scanf("%f", &massa);
        
        printf("Altura: ");
        scanf("%f", &altura);

        // Se o valor da massa ou o valor da altura for menor ou igual a 0 o programa finaliza;

        if (massa <= 0 || altura <= 0){
            printf("Valor invalido!\n");
            break;
        }

        else {
            printf("Peso = %f\n", massa);
            printf("Altura = %f\n", altura);

            imc = massa / pow(altura, 2);
            printf("IMC = %f\n", imc);
        
            // Classificação
        
            if (imc < 18.5){
            printf("Abaixo do peso\n");
            }

            if (imc >= 18.5 && imc <= 24.9){
            printf("Peso normal!\n");
            }

            if (imc >= 25 && imc <= 29.9){
            printf("Sobrepeso!\n");
            }

            if (imc >= 30 && imc <= 34.9){
            printf("Obesidade grau I !\n");
            }

            if (imc >= 35 && imc <= 39.9){
            printf("Obesidade grau II !\n");
            }

            if (imc >= 40){
            printf("Obesidade grau III (morbida)!\n");
            }
            // Condição de parada ou execução!
            printf("Continue[1] Encerrar[0]");
            scanf("%i", &question);

            if (question==0){
                break;
            }

            else {
                continue;
        }
    }
        
}
    return 0;
}



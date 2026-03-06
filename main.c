#include <stdio.h>
#include <stdlib.h>

int main(){
    float tempc, tempf, tempk;
    int resposta, loop;
    loop = 0;

    while (loop==0){
        printf("Qual unidade de medida voce quer usar?\n1. Kelvin\n2. Fahrenheit\n3. Celsius\nResposta: ");
        scanf("%d", &resposta);

        if (resposta == 1){
            loop++;
            printf("Qual temperatura?\n");
            scanf("%f", &tempk);

            tempc = tempk-273;
            tempf = tempc/1.8 + 32;
            printf("Temperatura em K: %.2f\nTemperatura em F: %.2f\nTemperatura em C: %.2f\n", tempk, tempf, tempc);
        } else if(resposta == 2){
            loop++;
            printf("Qual temperatura?\n");
            scanf("%f", &tempf);

            tempc = (tempf-32)/1.8;
            tempk = tempc+273;
            printf("Temperatura em F: %.2f\nTemperatura em K: %.2f\nTemperatura em °C: %.2f\n", tempf, tempk, tempc);
        } else if(resposta == 3){
            loop++;
            printf("Qual temperatura?\n");
            scanf("%f", &tempc);

            tempf = tempc/1.8 + 32;
            tempk = tempc+273;
            printf("Temperatura em C: %.2f\nTemperatura em K: %.2f\nTemperatura em F: %.2f\n", tempc, tempk, tempf);
        } else{
            printf("Resposta invalida. Tente novamente.\n\n");
        }
    }

    return 0;
}
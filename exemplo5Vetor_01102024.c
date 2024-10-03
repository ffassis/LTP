#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    int tamanho=4, i;

    float saldoSemanal[tamanho], saldoTotalSemana=0.0;

    for(i=0; i<tamanho; i++){
        printf("Digite o saldo diário da conta: ");
        scanf("%f", &saldoSemanal[i]);
        saldoTotalSemana = saldoTotalSemana + saldoSemanal[i];
    }
    printf("------------------------------------------\n");
    for(i=0; i<tamanho; i++){
        printf("Saldo do Dia %d = %.2f\n", i+1, saldoSemanal[i]);
    }
    printf("------------------------------------------");
    printf("\nSaldo da semana: %.2f\n", saldoTotalSemana);
    printf("------------------------------------------");

    return 0;
}

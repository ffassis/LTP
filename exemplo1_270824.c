#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");
    float salario_hora, horas_trabalhadas, salario_total;

    printf("Digite o sal�rio por hora: ");
    scanf("%f", &salario_hora);

    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    if(horas_trabalhadas > 40){
        salario_total = (salario_hora * 40) + ((horas_trabalhadas - 40)*salario_hora*1,5);
        printf("Sal�rio total com horas extras: %.2f\n", salario_total);
    }
    else{
        salario_total = salario_hora * horas_trabalhadas;
        printf("Sal�rio total: %.2f\n", salario_total);

    }

    return 0;
}

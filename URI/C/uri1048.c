#include<stdio.h>
int main(){
    float salary;
    scanf("%f", &salary);
    (salary <= 400.0) ? printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salary*1.15, salary*.15) :
    (salary <= 800.0) ? printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salary*1.12, salary*.12) :
    (salary <= 1200.0) ? printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salary*1.10, salary*.10) :
    (salary <= 2000.0) ? printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salary*1.07, salary*.07) :
    (salary > 2000.0) ? printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salary*1.04, salary*.04) : salary ;
    return 0;
}

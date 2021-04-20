#include<stdio.h>
int main(){
	float n1, n2, n3, n4, n5, average, secondaverage;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	average = (n1*2 + n2*3 + n3*4 + n4*1) / (2 + 3 + 4 + 1);
	printf("Media: %.1f\n", average);
	if(average >= 7){
	printf("Aluno aprovado.\n");
}
	else if(average >= 5 && average <= 6.9){
	printf("Aluno em exame.\n");
	scanf("%f", &n5);
	printf("Nota do exame: %.1f\n", n5);
	secondaverage = (average + n5) / 2;
	(secondaverage>=5) ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");
	printf("Media final: %.1f\n", secondaverage);
}

	else {
	printf("Aluno reprovado.\n");
}
	return 0;
}

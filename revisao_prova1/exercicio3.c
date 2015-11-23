#include <stdio.h>

int main(){
	int codigo;
	float notaA, notaB, notaC, media;

	do{
		printf("Digite o codigo do aluno: ");
		scanf("%d", &codigo);

		printf("Digite a primeira nota: ");
		scanf("%f", &notaA);

		printf("Digite a segunda nota: ");
		scanf("%f", &notaB);

		printf("Digite a terceira nota: ");
		scanf("%f", &notaC);

		if((notaA > notaB) && (notaA > notaC)){
			media = ((notaA*4) + (notaB*3) + (notaC*3)) / (4+3+3);
		} else if((notaB > notaA) && (notaB > notaC)){
			media = ((notaB*4) + (notaA*3) + (notaC*3)) / (4+3+3);
		} else {
			media = ((notaC*4) + (notaA*3) + (notaB*3)) / (4+3+3);
		}

		if(media >= 5){
			printf("\nO aluno esta APROVADO");
		} else {
			printf("\nO aluno esta REPROVADO");
		}

		printf("\nCodigo do aluno: %d - Notas: %f, %f, %f - Media: %f", codigo, notaA, notaB, notaC, media);
	while(codigo != 0);

	return 0;
}

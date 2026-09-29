#include <stdio.h>
int main (){
	int cont;
	float nota1, nota2, nota3, soma, media;
	for (cont=1; cont<=40; cont++)
	{
		printf ("\nDigite as notas do aluno:\n");
		scanf ("%f", &nota1);
		scanf ("%f", &nota2);
		scanf ("%f", &nota3);
		soma = nota1+nota2+nota3;
		media = soma/3;
		printf ("\nMedia do aluno: %f", media);
		if (media >= 7)
		{
		printf ("\nAluno aprovado!!\n");
	}
		else
	{
	
		printf ("\nAluno reprovado!!\n");
		}
	}
	return 0;
}
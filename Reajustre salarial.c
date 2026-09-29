#include <stdio.h>
int main (){
	int cont;
	float salario, porcreajuste, novosalario, maiorsalario;
	maiorsalario = 0;
	printf ("\nDigite a porcentagem de aumento dos funcionario:\n");
	scanf ("%f", &porcreajuste);	

	for (cont=1; cont<=50; cont++)
	{
		
		printf ("\nSalario do funcionario:\n");
		scanf ("%f", &salario);

		novosalario = salario + salario * porcreajuste / 100;
		
		printf ("\nNovo salario do funcionario apos reajuste: %.2f", novosalario);
		if (novosalario > maiorsalario)
		{
			maiorsalario = novosalario;
		}
	}
	
	
	printf ("\nO maior salario apos reajuste é: %.2f\n", maiorsalario);
		
	
	return 0;
	
	
}
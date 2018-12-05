// Marcelo Dantas Alves ; 0050016110 //

#include <stdio.h>

int main()
{
int i, j, quant = 0;
float obj[3000], menor = 1000000000;

//popular o vetor com os pesos dos objetos
for (i = 0; i < 3000; i++){
	printf("Objeto %d: ", i+1);
	scanf ("%f", &obj[i]);
}

//imprimir os pesos dos objetos
for (i = 0; i < 3000; i++){
	printf ("%.2f", obj[i]);
}

//apontar o menor peso e dizer quantos objetos tem esse peso
for (i = 0; i < 3000; i++){
	if (obj[i] < menor){
		menor = obj[i];
		quant = 0;	
	}
	if (obj[i] == menor) quant++;
}

printf ("\n\nO menor peso: %.2f", menor);
printf ("\n%d produtos tem esse peso.", quant);

system("pause");
return 0;
}

// Marcelo Dantas Alves ; 0050016110 //

#include <stdio.h>

int main()
{
    int matA[4][4];
    int i, j;
    int somalinha=0, somacoluna=0;
    
    //popular os elementos da matriz
    printf("\nMatriz A");
    for(i=0; i<4; i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\nEntre com o elemento [%d, %d]:", i+1,j+1);
            scanf("%d", &matA[i][j]);
        }
    }
    
    //imprimir a matriz inteira
    for(i=0;i<4;i++)
    {
    	printf("\n|");
    	for(j=0;j<4;j++)
    	{
    		printf("%d", matA[i][j]);
		}
		printf("|");
	}
    
    //soma da linha 3 com a coluna 2
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		if(i==3)
    		{
    			somalinha+=matA[i][j];
			}
			if(j==2)
			{
				somacoluna+=matA[i][j];
			}
		}
	}
	
	printf("\nA soma dos elementos foi igual a: %d\n",somalinha+somacoluna);
	
   
    system("pause");
    return 0;
}

#include<stdio.h>

float ganancia, imp, tarifafinal;
int estadocivil;

int main()
{

	printf("El codigo de SOLTERO = 1    ");
	printf("  El codigo de CASADO = 2  ");
	printf(" Cual es tu estado civil? ");
	scanf("%d",&estadocivil);
		switch(estadocivil)
		{
			case 1:
				printf("\n\t\tSOLTER0");
				printf("\n  Cual es tu ganancia mensual?: ");
				scanf("%f",& ganancia);
				if(ganancia<=32000)
				{
					imp=(ganancia*10)/100;
					tarifafinal=ganancia-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifafinal);
				}
				else
				{
					imp=(ganancia*25)/100;
					tarifafinal=ganancia-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifafinal);
				}
				break;

			case 2:
				printf("\n\t\tCASADO");
				printf("\n  Cual es tu ganancia mensual? ");
				scanf("%f",&ganancia);
				if(ganancia<=62000)
				{
					imp=(ganancia*10)/100;
					tarifafinal=ganancia-imp;
					printf("  La tarifa final de la ganancia total es de: %0.2f",tarifafinal);
				}
				else
				{
					imp=(ganancia*25)/100;
					tarifafinal=ganancia-imp;
					printf("La tarifa final de la ganancia total es de: %0.2f",tarifafinal);
				}
				break;
		}
		return 0;
}

#include<stdio.h>
	int peso;
	float al, imc;
int main()
{
	printf("\n¿cual es su peso?: ");
	scanf("%d",&peso);
    printf("\n¿cual es su altura?: ");
    scanf("%f",&al);
    
    imc=peso/(al*al);
    
    if (imc<18.5)
    {
    	printf("Peso bajo, echale mas tortillas de maiz");
	}
	else
	{
		if(imc>18.5 && imc<=24.9)
		{
			printf("peso normal");
		}
		else
		{
			if(imc>=25.0 && imc<=29.9)
			{
				printf("Tiene sobrepeso");
			}
			else
			{
				if(imc>=30.0 && imc<=34.5)
				{
					printf("Tiene obesidad TIPO 1");
				}
				else
				{
					if(imc>=35.0 && imc<=39.9)
					{
						printf("Tiene obesidad TIPO 2");
					}
					else
					{
						if(imc>=40)
						{
							printf("Tiene hiper-obesidad");
						}
					}
				}
			}
		}
	}
return 0;
}

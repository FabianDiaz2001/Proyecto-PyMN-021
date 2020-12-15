#include<stdio.h>
int numbolsa;
float descuento, tarifin, cosbolsa, costoproducto;
char depa;
int main()


{
	printf("Bienvenido, estos son los departamento disponibles: ");
	
	printf("(P) Perfumeria ");
	printf("(S) Salchichoneria ");
	printf("(C) Carniceria ");
	printf("(L) Limpieza ");
	printf("Elija el departamento en el que desea hacer su compra: ");
	scanf("%c",&depa);
	printf("costo de su producto: ");
	scanf("%f",&costoproducto);
	printf("¿cuantas bolsas necesitara? ");
	scanf("%d",&numbolsa);
	
	switch (depa)
	{
	     
	     case 'P':
	     descuento=costoproducto*0.20;
	     cosbolsa=numbolsa*0.10;
	     tarifin=costoproducto-descuento+cosbolsa;
	     break;
	     
	     case 'S':
	     descuento=costoproducto*0.40;
	     cosbolsa=numbolsa*0.10;
	     tarifin=costoproducto-descuento+cosbolsa;
		 break;
	     
	     case 'C':
	     descuento=costoproducto*0.20;
	     cosbolsa=numbolsa*0.10;
	     tarifin=costoproducto-descuento+cosbolsa;
	     break;
	     
	     case 'L':
	     descuento=costoproducto*0.35;
	     cosbolsa=numbolsa*0.10;
	     tarifin=costoproducto-descuento+cosbolsa;
	     break;
	     
	}
printf(" Esta es su tarifa final: %0.2f", tarifin);
return 0;
}	

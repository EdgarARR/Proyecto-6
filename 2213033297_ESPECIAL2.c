#include<stdio.h>

int main(){
	float l1,a1,p1,l2,a2,p2,l3,a3,p3;
	float volumen1 = 0.0,volumen2 = 0.0,volumen3 = 0.0;
	float precio1=0.0,precio2=0.0,precio3=0.0,suma_precios=0.0;
	
	printf("\n\nDIMENSIONES : ALBERCA DE USO GENERAL \n\n");
	printf("\nIntroduce el LARGO : ");
	scanf("%f",&l1);
	printf("\nIntroduce el ANCHO : ");
	scanf("%f",&a1);
	printf("\nIntroduce la PROFUNDIDAD : ");
	scanf("%f",&p1);
	
	volumen1 = l1*a1*p1;
	precio1 = 500*volumen1;
	
	printf("\n\nDIMENSIONES : ALBERCA CON CHAPOTEADERO \n\n");
	printf("\nIntroduce el LARGO : ");
	scanf("%f",&l2);
	printf("\nIntroduce el ANCHO : ");
	scanf("%f",&a2);
	printf("\nIntroduce la PROFUNDIDAD : ");
	scanf("%f",&p2);
	
	volumen2 = l2*a2*p2;
	precio2 = 500*volumen2;
	
	printf("\n\nDIMENSIONES : ALBERCA DE CLAVADOS \n\n");
	printf("\nIntroduce el LARGO : ");
	scanf("%f",&l3);
	printf("\nIntroduce el ANCHO : ");
	scanf("%f",&a3);
	printf("\nIntroduce la PROFUNDIDAD : ");
	scanf("%f",&p3);
	
	volumen3 = l3*a3*p3;
	precio3 = 500*volumen3;
	
	suma_precios = precio1+precio2+precio3;
	
	printf("\n\nPRECIO DE LA ALBERCA DE USO GENERAL : $%f \n\n",precio1);
	printf("\n\nPRECIO DE LA ALBERCA CON CHAPOTEADERO : $%f \n\n",precio2);
	printf("\n\nPRECIO DE LA ALBERCA DE CLAVADOS : $%f \n\n",precio3);
	
	printf("\n\nCOSTO TOTAL : $%f \n",suma_precios);

	return 0;
}



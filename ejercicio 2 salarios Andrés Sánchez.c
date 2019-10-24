/* Se desea calcular el salario neto semanal de un trabajador en
función del número de horas trabajadas y la tasa de impuestos:
Las primeras 35 horas de pagan a tarifa normal.
Las horas que pasen de 35 se pagan a 1.5 veces la tarifa normal
Las tasas de impuestos son:
1. Los primeros 1000 dólares son libres de impuestos.
2. Los siguientes 500 dólares tienen un 25% de impuestos.
3. Los restantes, un 45% de impuestos.
La tarifa horaria es de 40 dólares
Se desea escribir el SALARIO BRUTO(salario antes de impuesto), TASAS DE
IMPUESTOS , Y SALARIO NETO(salario después de impuestos).*/ 


/*incluimos las libreias*/
#include<stdio.h>
/*definimos constantes*/
#define tarifa_horaria 40

/* declaramos la funcion pricipal*/
void main()
{
	/* declaramos las variables*/
	float horas, salario_neto=0, salario_bruto,tasa_impuesto=0;
	char nombre[10];
	/*ingresamos el nombre del trabajador*/
	printf("ingrese el nombre del trabajador:");
	scanf("%s",&nombre);
	/* ingresamos la cantidad de horas trabajadas*/
	printf("ingrese horas trabajadas:");
	scanf("%f",&horas);
	/* determinamos los salarios si las horas trabajadas son menos o igual a 35 horas*/
	if(horas<=35)
	{
		/*calculamos el salario bruto*/
		salario_bruto=horas*tarifa_horaria;
		/*determinamos los impuestos a pagar dependiendo del salario bruto*/
		if(salario_bruto>1000 && salario_bruto<=1500)
		{
			/*determinamos la tasa de impuestos cuando el salario bruto es mayor a 1000 dolares y menor a 1500*/
			tasa_impuesto=salario_bruto*0.25;
			/* determinamos el salario neto*/
			salario_neto=salario_bruto-tasa_impuesto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
		else if(salario_bruto>1500)
		{
			/*determinamos la tasa de impuestos cuando el salario bruto es mayor a 1500 dolares*/
			tasa_impuesto=salario_bruto*0.45;
			/* determinamos el salario neto*/
			salario_neto=salario_bruto-tasa_impuesto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
		else
		{
			/*determinamos el salario neto si el salario bruto es menor a 1000 dolares*/
			salario_neto=salario_bruto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
	}
	else
	{
		/*determinamos el salario bruto si el trabajador trabaja mas de 35 horas*/
		salario_bruto=horas*tarifa_horaria*1.5;
		/*determinamos los impuestos a pagar dependiendo del salario bruto*/
		if(salario_bruto>1000 && salario_bruto<=1500)
		{
			/*determinamos la tasa de impuestos cuando el salario bruto es mayor a 1000 dolares y menor a 1500*/
			tasa_impuesto=salario_bruto*0.25;
			salario_neto=salario_bruto-tasa_impuesto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
		else if(salario_bruto>1500)
		{
			/*determinamos la tasa de impuestos cuando el salario bruto es mayor a 1500 dolares*/
			tasa_impuesto=salario_bruto*0.45;
			/* determinamos el salario neto*/
			salario_neto=salario_bruto-tasa_impuesto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
		else
		{
			/*determinamos el salario neto si el salario bruto es menor a 1000 dolares*/
			salario_neto=salario_bruto;
			printf("el trabajador:%s\nel salario bruto es:%.2f\nla tasa de impuesto es:%.2f\nel salario neto es:%.2f",nombre,salario_bruto,tasa_impuesto,salario_neto);
		}
	}
}

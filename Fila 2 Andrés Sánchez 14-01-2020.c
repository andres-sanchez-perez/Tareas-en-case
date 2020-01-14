/*Realizar un programa un programa usando funciones que permita generar la serie de n numeros pares y la tabla de multiplicar de cualquier numero*/
#include <stdio.h>
#include <locale.h>
#define tam 100
void ingresoDatosPares(int);
void ingresoDatosTabla(int,int);
void seriePares(int);
void tablaMultiplicar(int,int);
void ingresodatosParImpar(int);
void ParImpar(int[],int);
FILE *archivo;//declaracion global//
void main(){
	int cantNum,tabla,lim,Num;
	archivo=fopen("datos.txt","w");
	setlocale(LC_ALL,"spanish");
	ingresoDatosPares(cantNum);
	ingresoDatosTabla(tabla,lim);
	ingresodatosParImpar(Num);
}
void ingresoDatosPares(int cantNum){
	printf("Ingrese la cantidad de números:");
	fputs("Ingrese la cantidad de números:",archivo);
	scanf("%d",&cantNum);
	fprintf(archivo,"%d\n",cantNum);
	seriePares(cantNum);
}
void seriePares(int cantNum){
	int num=0,i;
	for(i=0;i<cantNum;i++){
		num=num+2;
		printf("%d\n",num);
		fprintf(archivo,"%d\n",num);
	}
	
}
void ingresoDatosTabla(int tabla,int lim){
	printf("Ingrese la tabla que desea usar:");
	fputs("Ingrese la tabla que desea usar:",archivo);
	scanf("%d",&tabla);
	fprintf(archivo,"%d\n",tabla);
	printf("Ingrese el limite de su tabla:");
	fputs("Ingrese el limite de su tabla:",archivo);
	scanf("%d",&lim);
	fprintf(archivo,"%d\n",lim);
	tablaMultiplicar(tabla,lim);
}
void tablaMultiplicar(int tabla,int lim){
	int i,resultado=0;
	for(i=1;i<=lim;i++){
		resultado=tabla*i;
		printf("%d multiplicado por %d=%d\n",tabla,i,resultado);
		fprintf(archivo,"%d multiplicado por %d=%d\n",tabla,i,resultado);
	}
}
void ingresodatosParImpar(int Num){
	int i,numeros[tam];
	printf("Ingrese la cantidad de números que va a ingresar:");
	fputs("Ingrese la cantidad de números que va a ingresar:",archivo);
	scanf("%d",&Num);
	fprintf(archivo,"%d\n",Num);
	for(i=0;i<Num;i++){
		printf("Ingrese un numero:");
		fputs("Ingrese un numero:",archivo);
		scanf("%d",&numeros[i]);
		fprintf(archivo,"%d",numeros[i]);
	}
	ParImpar(numeros,Num);
}
void ParImpar(int numeros[tam],int Num){
	int i;
	for(i=0;i<Num;i++){
		if(numeros[i]==0){
			printf("el numero es 0\n");
			fprintf(archivo,"el numero es 0\n");
		}
		else if(numeros[i]%2==0){
			printf("el numero %d es par\n",numeros[i]);
			fprintf(archivo,"el numero %d es par\n",numeros[i]);
		}
		else{
			printf("el numero %d es impar\n",numeros[i]);
			fprintf(archivo,"el numero %d es par\n",numeros[i]);
		}
	}
}

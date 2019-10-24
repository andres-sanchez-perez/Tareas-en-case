/******************************************************************************

Realizar un programa en C que al recibir como datos un grupo de números naturales positivos,
calcule el cuadrado de estos números. Imprima el cuadrado del número y al final la suma de
los cuadrados.
 sentencia while
*******************************************************************************/
/* incluimos las bibliotecas*/
#include <stdio.h>
#include <math.h>
/* creamos la funcion principal*/
void main()
{
    /* declaramos variabes*/
    int numero,cont=0,ingresar,cuadrado=0,SumaCuadrados=0;
    printf("Cuantos numeros desea ingresar:");/*ingresamos los numeros*/
    scanf("%d",&numero);
    while(cont<numero)/*declaramos el bucle para los numeros que vamos a ingresar*/
    {
        printf("ingrese un numero entero positivo:");
        scanf("%d",&ingresar);
        while(ingresar<0)/* bucle while ara evitar que se ingresen numeros negativos*/
        {
           printf("ingrese un numero entero positivo:");
           scanf("%d",&ingresar); 
        }
        cuadrado=pow(ingresar,2);
        printf("el cuadrado del numero ingresado es:%d\n",cuadrado);/*elevamos al cuadrado el numero ingresado y lo imprimimos*/
        SumaCuadrados=SumaCuadrados+cuadrado;/*sumamos los cuadrados obtenidos*/
        cont++;
    }
    printf("la suma de los cuadrados de los numeros ingresados es:%d",SumaCuadrados);/*imprimimos la suma de los cuadrados que hicimos en el bucle*/
}

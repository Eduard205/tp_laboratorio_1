/* ============================================================================
 Nombre del proyecto: TP1 CALCULADORA
 Alumno: Eduard Amilcar Brito Hernandez
 Division: E

 Enunciado: Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "TP1 CALCULADORA.h"

int main()
{
   	int primerOperando;
   	int segundoOperando;
   	int menu;
	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int resultadoFactorial1;
	int resultadoFactorial2;
	char respuesta='s';
	int flag1=0;
	int flag2=0;
	int flag3=0;

	do{
        printf("\n-*-CALCULADORA-*-\n");
	    printf("\n Seleccione una opcion del menu:\n");
	    printf("\n1) Ingrese el primer operando");
	    printf("\n2) Ingrese el segundo operando ");
	    printf("\n3) Realizar calculos ");
	    printf("\n4) Mostrar resultados ");
	    printf("\n5) Salir\n:");
	    scanf("%d",&menu);

    while(menu>5 || menu<1){
    		printf("Error...Ingrese una opcion del menu (1,2,3,4,5):");
    	    scanf("%d",&menu);
    	}
    switch(menu){
    case 1:
    	flag1=1;
		printf("1) -Ingrese el primer operando: ");
		fflush(stdin);
		scanf("%d",&primerOperando);
		printf("\nPrimer numero ingresado : %d\n",primerOperando);
		break;
    case 2:
    	flag2=1;
		printf("\n -Ingrese el segundo operando : ");
		fflush(stdin);
		scanf("%d",&segundoOperando);
		printf("\nSegundo numero ingresado : %d\n",segundoOperando);
		break;
    case 3:
    	if (flag2==0||flag1==0){
    		printf("\nError...Para continuar debe ingresar dos operandos:\n");
    	}
    	else{
    	flag3=1;
		resultadoSuma=sumar(primerOperando,segundoOperando);
		resultadoResta=restar(primerOperando,segundoOperando);
		resultadoMultiplicacion=multiplicar(primerOperando,segundoOperando);
		resultadoFactorial1=factorial(primerOperando);
		resultadoFactorial2=factorial(segundoOperando);
    	printf("\nCALCULADO\n");
    	}
    	break;
    case 4:
    	if(flag1==0||flag2==0||flag3==0){
    		printf("Error no se ingresaron los operandos\n");
    	}
    	else{
        printf("\n---RESULTADO---");
        printf("\n operando1 = %d operando2 = %d ",primerOperando,segundoOperando);
		printf("\nEl resultado de la suma es: %d",resultadoSuma);
		printf("\nEl resultado de la resta es: %d",resultadoResta);
		printf("\nEl resultado de la multiplicacion es: %d",resultadoMultiplicacion);
		printf("\nEl factorial de %d es: %d y el de %d: %d",primerOperando,resultadoFactorial1,segundoOperando,resultadoFactorial2);

		if(segundoOperando==0)
		{
			printf("\nError...No se puede dividir por < 0 > \n");
		}
		if(segundoOperando>0){
			resultadoDivision=dividir(primerOperando,segundoOperando);
			printf("\nEl Resultado de la division es %.2f\n",resultadoDivision);
			printf("Desea continunar? (s/n): ");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
    	}
		break;
    case 5:
    	if(flag1==0||flag2==0||flag3==0){
    		printf("Antes de salir quiere hacer un calclulo? (s/n): ");
			fflush(stdin);
			scanf("%c",&respuesta);
        }
    	else{
            printf("Desea hacer un calculo mas? (s/n): ");
            fflush(stdin);
            scanf("%c",&respuesta);
        }
    }
	}while(respuesta=='s');

	printf("\n programa terminado");

    return 0;
}

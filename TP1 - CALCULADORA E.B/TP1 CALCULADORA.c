/* ============================================================================
 Nombre del proyecto: TP1 CALCULADORA
 Alumno: Eduard Amilcar Brito Hernandez
 Division: E

 Enunciado: Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir
� Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
� En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
� Deber�n contemplarse los casos de error (divisi�n por cero, etc)
� Documentar todas las funciones
 ============================================================*/

int sumar(int a,int b){
	return (a+b);
}
int restar(int a,int b){
    return (a-b);
}
float dividir(float a,int b){
	return (a/b);
}
int multiplicar(int a,int b){
	return (a*b);
}
int factorial(int x)
{	int cont,factoriall=1;

	if(x<0)
	{
	x*=-1;
	for(cont=1;cont<=x;cont++)
		{
		factoriall*=cont;
		}
	}
	else{
	for(cont=1;cont<=x;cont++)
	{
	factoriall*=cont;
	}
	}
	return factoriall;
}

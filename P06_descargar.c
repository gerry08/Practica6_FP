#include<stdio.h> // INICIO
//*****************Funciones hijas*****************************
float multiplicaValores(float realUno, float realDos)
{
	float realTres; 
	realTres= realUno *  realDos;
	return realTres;
}

float sumaValores (float unoValor, float dosValor)
{
	float resultadoValor; 
	resultadoValor = unoValor + dosValor ; 
	return resultadoValor; 
}

//*****************Función principal*************************
main () 
{
	float variableA,variableB, resultadoC, resultadoD;  
	variableA = 5.6; 
	variableB= 24.4 ;
	resultadoC = multiplicaValores(variableA, variableB) ; 
	resultadoD = sumaValores(variableA, variableB); 
	printf("El valor de la multiplicaciÃ³n es: %e\n",resultadoC); 
	printf("El valor de la suma es: %g\n",resultadoD); 
return 0;
} 
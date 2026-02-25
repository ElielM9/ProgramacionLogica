Algoritmo introducirValoresArreglo
	//Programa que pida al ususario n valores. 
	Definir numero_elementos, numeros Como Entero
	
	//Pedir al usuario cuantos numeros va a introducir. 
	Repetir
		Imprimir "Proporciona el tamaño del arreglo: "
		Leer numero_elementos	
	Hasta Que numero_elementos > 0
	
	//Definir el tamaño del arreglo
	Dimension numeros[numero_elementos]
	
	//Pedir los valores al usuario. 
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir "Introduce el valor ", i + 1
		Leer numeros[i]
	FinPara
	
	//Mostrar los elementos. 
	Imprimir "Estos son los valores almacenados"
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir i + 1,  " Valor ", i, " = ", numeros[i]
	FinPara
	
	
	
FinAlgoritmo

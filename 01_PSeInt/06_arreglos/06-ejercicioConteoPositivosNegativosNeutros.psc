Algoritmo ejercicioConteoPositivosNegativosNeutros
	//Definir las variables
	Definir numero_elementos, numeros, positivos, negativos, neutros Como Entero
	
	//Pedir el numero de elementos del arreglo.
	Repetir 
		Imprimir "Introduce el tamaño del arreglo"
		Leer numero_elementos
	Hasta Que numero_elementos > 0
	
	//Definir el arreglo
	Dimension numeros[numero_elementos]
	
	//Pedir al usuario que introduzca los valores
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir "Introduce un valor"
		Leer numeros[i]
	FinPara
	
	//Variables a usar
	positivos = 0 
	negativos = 0 
	neutros = 0
	
	//Iterar los elementos
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Si numeros[i] > 0 Entonces 
			positivos = positivos + 1
		SiNo
			Si numeros[i] < 0 Entonces
				negativos = negativos + 1
			SiNo
				neutros = neutros + 1
			FinSi
		FinSi
	FinPara
	
	//Imprimir los resultados
	Imprimir "Positivos: ", positivos
	Imprimir "Negativos: ", negativos 
	Imprimir "Neutros: ", neutros 
	
FinAlgoritmo

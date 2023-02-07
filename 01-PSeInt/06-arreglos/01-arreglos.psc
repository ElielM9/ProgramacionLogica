Algoritmo arreglos 
	//Es un conjunto de elementos al que accedemos con el mismo nombre. 
	
	//Definicion de arreglos. 
	Definir numerosArray Como Entero
	Dimension numerosArray[5]
	//Modificar los valores de un arreglo.
	numerosArray[0] = 13
	numerosArray[1] = 21 
	numerosArray[4] = 62
	
	//Leer valores de un arreglo. 
	Imprimir numerosArray[0]
	Imprimir numerosArray[1]
	Imprimir numerosArray[2]
	//Iterar los valores de un arreglo usando un for
	Para indice = 0 Hasta 4 Con Paso 1 Hacer
		Imprimir "Valor ", indice, " = " numerosArray[indice]
	FinPara
	
	
FinAlgoritmo

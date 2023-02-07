Algoritmo matrices
	//Una matríz es un arreglo de n renglones * n columnas. 
	
	//Definicion de matrices. 
	Definir matriz, renglones, columnas Como Entero
	renglones = 2 
	columnas = 3 
	
	Dimension matriz[renglones, columnas]
	
	//Llenar las celdas de la matriz manualmente.
	//Primer renglon 
	matriz[0, 0] = 100 
	matriz[0, 1] = 200 
	matriz[0, 2] = 300
	//Segundo renglon 
	matriz[1, 0] = 400 
	matriz[1, 1] = 500
	matriz[1, 2] = 600
	
	//Acceder a los valores de una matriz 
	Imprimir matriz[0, 0]
	Imprimir matriz[1, 2]
	//Iterar todos los valores de la matriz
	Imprimir "Iterar todos los valores de la matriz"
	//Utilizar dos ciclos for anidados. 
	Para renglon = 0 Hasta renglones - 1 Con Paso 1 
		Imprimir "Renglon: ", renglon 
		
		Para columna = 0 Hasta columnas - 1 Con Paso 1 Hacer
			//Imprimir Sin Saltar matriz[renglon, columna], " "
		Imprimir Sin Saltar "Matriz ",renglon, ",", columna, " ", matriz[renglon, columna], " "   	
			
			
		FinPara
		Imprimir "" 
	FinPara
	
	
	
	
	
FinAlgoritmo
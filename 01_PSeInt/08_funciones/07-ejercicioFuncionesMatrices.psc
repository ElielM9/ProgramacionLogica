Funcion dimensionMatriz(filas Por Referencia, columnas Por Referencia)
	Imprimir "Introduce el numero de filas: "
	Leer filas
	
	Imprimir "Introduce el número de columnas"
	Leer columnas
FinFuncion

Funcion llenadoMatriz(matriz Por Referencia, filas, columnas)
	Para fila = 0 Hasta filas - 1 Con Paso 1 Hacer
		Para columna = 0 Hasta columnas - 1 Con Paso 1 Hacer
			Imprimir "Ingresa el valor: ", fila, ", ", columna 
			Leer matriz[fila, columna]
		FinPara
	FinPara
FinFuncion

Funcion imprimirMatriz(matriz Por Referencia, filas, columnas)
	Imprimir "Matriz: ", filas, ", ", columnas
	
	suma = 0 
	Para fila = 0 Hasta filas - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir Sin Saltar matriz[fila, columna], " "
			suma = suma + matriz[fila, columna]
		FinPara
		Imprimir ""
	FinPara
	
	Imprimir "Suma: ", suma
FinFuncion

Algoritmo ejercicioFuncionesMatrices 
	
	//Declarar una matriz. 
	Definir matriz, filas, columnas Como Entero
	dimensionMatriz(filas, columnas)
	
	//Crear la matriz 
	Dimension matriz[filas, columnas]
	
	//Llenado de la matriz
	llenadoMatriz(matriz, filas, columnas)
	
	//Mostrar la matriz y sumar sus elementos. 
	imprimirMatriz(matriz, filas, columnas)
	
FinAlgoritmo

Algoritmo ejercicioImprimirOrdenInverso 
	Definir matriz, filas, columnas Como Entero
	//Numero de renglones y columnas. 
	filas = 2 
	columnas = 3 
	//Declaración de matriz
	Dimension matriz[filas, columnas]
	matriz[0, 0] = 3
	matriz[0, 1] = -8
	matriz[0, 2] = 6
	
	matriz[1, 0] = 5
	matriz[1, 1] = 2
	matriz[1, 2] = -4
	
	Para fila = filas - 1 Hasta 0 Hacer
		Para columna = columnas - 1 Hasta 0 Hacer
			valor = matriz[fila, columna]
			Imprimir Sin Saltar valor, " "
 		FinPara
		Imprimir ""
	FinPara
	
FinAlgoritmo

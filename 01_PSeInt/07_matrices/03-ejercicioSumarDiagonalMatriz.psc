Algoritmo ejercicioSumarDiagonalMatriz
	Definir matriz, renglones, columnas Como Entero
	renglones = 3 
	columnas = 3
	//Declarar la matriz
	Dimension matriz[renglones, columnas]
	//Renglon 1
	matriz[0, 0] = 5 
	matriz[0, 1] = 7 
	matriz[0, 2] = 2
	//Renglon 2 
	matriz[1, 0] = 3
	matriz[1, 1] = 8 
	matriz[1, 2] = 4
	//Renglon 3
	matriz[2, 0] = 1 
	matriz[2, 1] = 7 
	matriz[2, 2] = 9
	
	Para renglon = 0 Hasta renglones - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Si renglon == columna Entonces
				suma = suma + matriz[renglon, columna]
				Imprimir "La suma acumulada es: ", suma
			FinSi
		FinPara
		resultado = suma
	FinPara
	Imprimir "Resultado: ", resultado	

	
FinAlgoritmo

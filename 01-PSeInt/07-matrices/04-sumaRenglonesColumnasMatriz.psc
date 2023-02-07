Algoritmo ejercicioSumaRenglonesColumnasMatriz 
	Definir matriz, ren, col, arregloRen, arregloCol Como Entero
	//Numero de renglones y columnas. 
	ren = 2 
	col = 3 
	
	Dimension matriz[ren, col]
	matriz[0, 0] = 3
	matriz[0, 1] = -8
	matriz[0, 2] = 6
	
	matriz[1, 0] = 5
	matriz[1, 1] = 2
	matriz[1, 2] = -4
	
	Dimension arregloRen[ren]
	Dimension arregloCol[col]
	
	
	//Suma de renglones
	Para renglon = 0 Hasta ren - 1 Hacer
		Para columna = 0 Hasta col - 1 Hacer
			Si renglon = renglon Entonces
				arregloRen[renglon] = arregloRen[renglon] + matriz[renglon, columna]	
			FinSi
			Si columna = columna Entonces
				arregloCol[columna] = arregloCol[columna] + matriz[renglon, columna]
			FinSi
		FinPara
	FinPara
	Imprimir "Arreglo renglones:"
	Para indice = 0 Hasta ren - 1 Hacer
		Imprimir Sin Saltar arregloRen[indice], " "
	FinPara
	Imprimir ""
	Imprimir "Arreglo de columnas:"
	Para indice = 0 Hasta col - 1 Hacer
		Imprimir Sin Saltar arregloCol[indice], " "
	FinPara
	Imprimir ""
	
FinAlgoritmo

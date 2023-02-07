Algoritmo ejercicioSumarParesImparesMatriz
	Definir matriz, filas, columnas Como Entero
	Imprimir "Cuantas filas quieres: "
	Leer filas
	
	Imprimir "Cuantas columnas quieres: "
	Leer columnas 
	
	Dimension matriz[filas, columnas]
	
	Para fila = 0 Hasta filas - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir "Ingresa un valor"
			Leer matriz[fila, columna]
		FinPara
	FinPara
	
	sumaPares = 0
	sumaImpares = 0 
	Para fila = 0 Hasta filas - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			valor = matriz[fila, columna]
			Si valor % 2 == 0 Entonces
				Imprimir matriz[fila, columna], " "
				sumaPares = sumaPares + valor
			SiNo
				Imprimir matriz[fila, columna], " "
				sumaImpares = sumaImpares + valor
			FinSi
		FinPara
	FinPara
	Imprimir "Suma pares: ", sumaPares
	Imprimir "Suma impares: ", sumaImpares
	
FinAlgoritmo

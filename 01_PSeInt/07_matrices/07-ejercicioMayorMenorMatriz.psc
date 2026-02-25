Algoritmo ejercicioMayorMenorMatriz
	Definir matriz, filas, columnas Como Entero
	filas = 3
	columnas = 3
	
	Dimension matriz[filas, columnas]
	matriz[0, 0] = 6
	matriz[0, 1] = 9
	matriz[0, 2] = 8
	
	matriz[1, 0] = 2
	matriz[1, 1] = -1
	matriz[1, 2] = -12
	
	matriz[2, 0] = 14
	matriz[2, 1] = 31
	matriz[2, 2] = 18
	
	
	valorMayor = 0 
	posicionFilaMayor = 0
	posicionColumnaMayor = 0
	valorMenor = 0
	posicionFilaMenor = 0 
	posicionColumnaMenor = 0
	
	Para fila = 0 Hasta filas - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			valor = matriz[fila, columna]
			Si valor > valorMayor Entonces
				valorMayor = valor 
				posicionFilaMayor = fila 
				posicionColumnaMayor = columna
			SiNo
				Si valor < valorMenor Entonces
					valorMenor = valor	
					posicionFilaMenor = fila
					posicionColumnaMenor = columna   
				FinSi
			FinSi
		FinPara
	FinPara
	Imprimir "El valor mayor es: ", valorMayor, " Posición: ", posicionFilaMayor, " ", posicionColumnaMayor
	Imprimir "El valor menor es: ", valorMenor, " Posición: ", posicionFilaMenor, " ", posicionColumnaMenor
	
FinAlgoritmo

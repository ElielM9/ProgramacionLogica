Algoritmo ejercicioCalcularMayorMenor 
	Definir numero_elementos, arreglo Como Entero
	
	Repetir 
		Imprimir "Introduce el tamaño del arreglo"
		Leer numero_elementos
	Hasta Que numero_elementos > 0
	
	Dimension arreglo[numero_elementos]
	
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir "Introduce un valor"
		Leer arreglo[i]
	FinPara
	
	numeroMayor = arreglo[0]
	numeroMenor = arreglo[0]
	
	Para i = 1 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Si arreglo[i] > numeroMayor Entonces
			numeroMayor = arreglo[i]
		SiNo 
			Si arreglo[i] < numeroMenor Entonces
				numeroMenor = arreglo[i]	
			FinSi
		FinSi
	FinPara
	
	Imprimir "El numero menor es: ", numeroMenor
	Imprimir "El numero mayor es: ", numeroMayor
	
FinAlgoritmo

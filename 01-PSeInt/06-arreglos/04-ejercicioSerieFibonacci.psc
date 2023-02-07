Algoritmo ejercicioSerieFibonacci
	Definir numero_elementos, fibonacci Como Entero
	
	Repetir
		Imprimir "Introduce cuantos numeros de la serie imprimir"
		Leer numero_elementos
	Hasta Que numero_elementos > 0
	
	
	Dimension fibonacci[numero_elementos]
	fibonacci[0] = 1
	fibonacci[1] = 1	
	
	Para i =  2 Hasta numero_elementos - 1 Con Paso 1 Hacer
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1] 
	FinPara
	
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir i, " Valor: ", fibonacci[i]
	FinPara
	
FinAlgoritmo

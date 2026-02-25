Algoritmo ejercicioSerieFibonacci
	//Sucesión de numeros que inicia en 1 y continua en: 1, 2, 3, 5, 8, etc
	//Es la suma de los dos valores anteriores
	
	Definir valor1, valor2, valorSerie, limite Como Entero
	valor1 = 1
	valor2 = 1 
	limite = 30
	
	
	Para valorSerie = 1 Hasta limite Con Paso 1 Hacer
		
		valorSerie = valor1 + valor2
		Imprimir "El nuevo valor es: ", valorSerie
		valor1 = valor2
		valor2 = valorSerie
		
	FinPara
	
	
FinAlgoritmo

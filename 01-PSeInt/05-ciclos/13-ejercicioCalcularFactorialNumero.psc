Algoritmo ejercicioCalcularFactorialNumero 
	//Calcular el factorial de un numero positivo ej: 5! (Cinco factorial)
	//El factorial se calcula con la multiplicacion de los numeros naturales anteriores o iguales.
	//Ej: 5! = 5*4*3*2*1 = 120 o 5! = 1*2*3*4*5 = 120
	
	Definir contador, factorial, numeroUno  Como Entero
	Imprimir "Proporciona un valor"
	Leer factorial
	numeroUno = 1
	
	Para contador = 1 Hasta factorial Con Paso 1 Hacer
		
		Imprimir numeroUno, " x ", contador 
		numeroUno = numeroUno * contador 
		
		factorial_resultado = numeroUno
	FinPara
	
	Imprimir "Factorial de ", factorial, " = " factorial_resultado
	
	
FinAlgoritmo

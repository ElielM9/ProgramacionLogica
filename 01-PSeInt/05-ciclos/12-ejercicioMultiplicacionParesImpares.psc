Algoritmo ejercicioMultiplicarParesImpares
	//Calcular la multiplicacion de los numeros pares e impares del 1 a 6 en el mismo ciclo
	//Ej: Multiplicacion de pares 1 a 6: 2*4*6 = 48 
	//Ej: Multiplicacion de impares 1 a 6: 1*3*5 = 15
	Definir numeroUno, mul_pares, mul_impares Como Entero
	mul_pares = 1
	mul_impares = 1
	
	
	Para numeroUno = 1 Hasta 6 Con Paso 1 Hacer
		
		Si numeroUno % 2 == 0 Entonces
			Imprimir "Multiplicacion par: ", mul_pares " x ", numeroUno 
			mul_pares = mul_pares * numeroUno 
		SiNo
			Imprimir "Multiplicacion impar: ", mul_impares " x ", numeroUno 
			mul_impares = mul_impares * numeroUno 
		FinSi
		
	FinPara
	Imprimir "Resultado par: ", mul_pares
	Imprimir "Resultado impar: ", mul_impares
	
FinAlgoritmo

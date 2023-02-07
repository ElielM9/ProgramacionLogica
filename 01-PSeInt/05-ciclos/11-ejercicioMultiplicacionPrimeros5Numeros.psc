Algoritmo ejercicioMultiplicacionPrimeros5Numeros 
	Definir numeroUno, producto_acumulado Como Entero 
	producto_acumulado = 1
	
	Para numeroUno = 1 Hasta 5 Con Paso 1 Hacer
		
		Imprimir "Multiplicacion: ", producto_acumulado, " x ", numeroUno 
		producto_acumulado = producto_acumulado * numeroUno 
		Imprimir "Producto: ", producto_acumulado 
		
	FinPara
	
	Imprimir "El producto final es: ", producto_acumulado 
	
FinAlgoritmo
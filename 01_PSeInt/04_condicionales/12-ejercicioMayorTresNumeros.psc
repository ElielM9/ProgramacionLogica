Algoritmo ejercicioMayorTresNumeros 
	Imprimir "Ingresa un numero 1"
	Leer numero1
	
	Imprimir "Ingresa un numero 2"
	Leer numero2 
	
	Imprimir "Ingresa un numero 3"
	Leer numero3 
	
	Si numero1 > numero2 Y numero1 > numero3 Entonces
		Imprimir "El numero ", numero1, " es el mayor"
	SiNo
		Si numero2 > numero1 Y numero2 > numero3 Entonces
			Imprimir "El numero ", numero2, " es el mayor"
		Sino
			Imprimir "El numero ", numero3, " es el mayor"
		FinSi
	FinSi
	
	
FinAlgoritmo

Algoritmo ifElse
	Imprimir "Introduce un n�mero: "
	Leer mi_numero 
	
	//Verificar si el numero es positivo 
	//If 
	Si mi_numero > 0 Entonces
		Imprimir "Valor positivo: ", mi_numero
	//Else	
	SiNo 
		//If Else anidado
		Si mi_numero < 0 Entonces
			Imprimir "Valor negativo: ", mi_numero
		SiNo
			Imprimir "El valor es cero: ", mi_numero
		FinSi
	FinSi 
	
	
	
FinAlgoritmo

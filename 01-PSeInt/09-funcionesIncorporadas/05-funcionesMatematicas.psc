Algoritmo funcionesMatematicas
	//Generar un valor aleatorio segun los valores especificados
	Imprimir "Generar un valor entre 0 y 100: ", azar(100)
	Imprimir "Generar un valor entre 100 y 200: ", Aleatorio(100, 200)
	
	//Valor absoluto de un número: Es el mismo número sin el signo. 
	Imprimir "Ingresa un número"
	Leer _numero 
	
	valorAbsoluto = abs(_numero)
	Imprimir "El valor absoluto es: ", valorAbsoluto
	
	//Redondeo y truncado. 
	//Redondeo: Devuelve al valor entero más cercano. 
	redondeo = redon(_numero)
	Imprimir "Redondeo es: ", redondeo
	//Truncado: Solo devuelve el valor entero sin el decimal. 
	truncado = trunc(_numero)
	Imprimir "Truncaso es: ", truncado
	
	
FinAlgoritmo

Algoritmo ejercicioExtraerCadaCaracter
	Repetir
		Imprimir "Ingresa un texto"
		Leer _cadena
	Hasta Que _cadena == ""
	
	
	Imprimir "Letras encontradas: "
	Para i = 0 Hasta Longitud(_cadena) - 1 Hacer
		_caracter = Subcadena(_cadena, i, i)
		Imprimir _caracter
	FinPara
	
	
FinAlgoritmo

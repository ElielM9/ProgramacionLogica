Algoritmo ejercicioContarVocales
	Imprimir "Ingresa un nombre"
	Leer nombre
	nombre = Minusculas(nombre)
	
	//Contadores
	contadorA = 0
	contadorE = 0
	contadorI = 0
	contadorO = 0
	contadorU = 0
	
	Para i = 0 Hasta Longitud(nombre) - 1 Hacer
		_caracter = Subcadena(nombre, i, i)
		Si _caracter == "a" Entonces
			contadorA = contadorA + 1
		SiNo
			Si _caracter == "e" Entonces
				contadorE = contadorE + 1
			SiNo
				Si _caracter == "i" Entonces
					contadorI = contadorI + 1
				SiNo
					Si _caracter == "o" Entonces
						contadorO = contadorO + 1 
					SiNo
						Si _caracter == "u"
							contadorU = contadorU + 1
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	Imprimir "Letras A: ", contadorA
	Imprimir "Letras E: ", contadorE
	Imprimir "Letras I: ", contadorI
	Imprimir "Letras O: ", contadorO
	Imprimir "Letras U: ", contadorU
	
	
	
FinAlgoritmo

Algoritmo ejercicioCalificaciones
	Definir nota Como Caracter 
	
	Imprimir "Introduce tu calificacion: "
	Leer calificacion
	
	Si calificacion >= 9 Y calificacion <= 10 Entonces
		nota = "A"
	SiNo
		Si calificacion >= 8 Y calificacion < 9 Entonces
			nota = "B"
		SiNo
			Si calificacion >= 7 Y calificacion < 8 Entonces
				nota = "C"
			SiNo
				Si calificacion >= 6 Y calificacion < 7 Entonces
					nota = "D"
				Sino 
					Si calificacion > 0 Y calificacion < 6 Entonces
						nota = "F"
					SiNo
						Imprimir "El valor no es valido"
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	
	Imprimir nota
	
FinAlgoritmo





Algoritmo ejercicioEtapasVida
	Imprimir "Proporciona tu edad"
	Leer edad 
	
	Si edad <= 10 Entonces
		Imprimir "Estás en la infancia"
	Sino 
		Si edad > 10 Y edad < 20 Entonces
			Imprimir "Eres adolescente"
		SiNo
			Si edad >= 20 Y edad < 30 Entonces
				Imprimir "Eres un adulto"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo

Algoritmo ejercicioAsistirJuego
	//Definicion de variables
	Definir vacaciones, dia_descanso Como Logico
	
	//Introducir una respuesta
	Imprimir "¿Tiene vacaciones? (Verdadero o Falso)"
	Leer vacaciones
	
	Imprimir "¿Es día de descanso? (Verdadero o falso)"
	Leer dia_descanso 
	
	//Validar si puede asistir 
	Si vacaciones O dia_descanso Entonces
		Imprimir "Puede asistir al juego"
	SiNo
		Imprimir "Tiene cosas que hacer"
	FinSi
	
FinAlgoritmo

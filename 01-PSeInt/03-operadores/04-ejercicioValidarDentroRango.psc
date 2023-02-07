Algoritmo ejercicioValidarDentroRango
	
	//Definición de variables
	Definir min Como Entero
	Definir max Como Entero
	min = 0
	max = 5
	
	//Recibir un valor
	Imprimir "Introduce un valor entre 0 y 5"
	Leer dato 
	
	//Verificar si el valor está dentro de rango
	dentro_rango = dato >= min Y dato <= max
	Imprimir "Valor dentro de rango es: ", dentro_rango
	
	
FinAlgoritmo

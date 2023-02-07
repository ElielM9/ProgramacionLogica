Algoritmo ejercicioElevarPotencia 
	//Elevar una base a una potencia. 
	Imprimir "Ingresa un valor: "
	Leer base
	Imprimir "Ingresa su potencia: "
	Leer exponente 
	
	resultadoFinal = potencia(base, exponente)
	Imprimir "La potencia de ", base,  "^", exponente " = ", resultadoFinal
	
FinAlgoritmo

Funcion resultado = potencia(base, exponente)
	//Caso base
	Si exponente == 0 Entonces
		resultado = 1
	//Caso recursivo
	SiNo
		resultado = base * potencia(base, exponente - 1)
		imprimir resultado
	FinSi
FinFuncion

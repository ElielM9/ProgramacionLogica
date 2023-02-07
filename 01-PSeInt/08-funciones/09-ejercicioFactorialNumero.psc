Funcion retorno = factorial(_numero)
	//Caso base
	Si _numero == 0 Entonces
		retorno = 1
		Imprimir "Factorial de 0: ", retorno
	SiNo
		retorno = _numero * factorial(_numero - 1)
		Imprimir "Factorial de ", _numero, ": " retorno
	FinSi
FinFuncion


Algoritmo ejercicioFactorialNumero 
	_numero = 5
	
	resultadoFactorial = factorial(_numero)
	Imprimir "El factorial de ", _numero " es: ", resultadoFactorial
	
FinAlgoritmo

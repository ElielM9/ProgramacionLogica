Funcion cambiarValor(parametro Por Valor)
	parametro = 20
FinFuncion

//Programa principal
Algoritmo pasoPorValor
	//Concepto de Paso por valor. 
	argumento = 10 
	cambiarValor(argumento)
	// Se pasa solamente una copia del valor a la funcion 
	// los cambios hechos en la funcion (parametro) no afectan al argumento (variable fuera de la funcion). 
	Imprimir argumento	
FinAlgoritmo
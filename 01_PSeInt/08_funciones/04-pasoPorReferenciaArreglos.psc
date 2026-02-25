Funcion cambiarValor(parametro)
	
	parametro[0] = 20
	parametro[1] = 30
	
FinFuncion

Algoritmo pasoPorReferenciaArreglos 
	//Paso por referencia con arreglos 
	Dimension argumento[2]
	argumento[0] = 10
	argumento[1] = 15
	cambiarValor(argumento)
	
	Imprimir Sin Saltar argumento[0], ", ", argumento[1]
	Imprimir ""
	
	
	
	
FinAlgoritmo

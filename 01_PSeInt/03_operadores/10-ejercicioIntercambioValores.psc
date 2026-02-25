Algoritmo ejercicioIntercambioValores
	//Definir variables. 
	Definir a, b, temporal Como Entero
	
	//Recibir los valores. 
	Imprimir "Proporciona un valor de a: "
	Leer a
	
	Imprimir "Proporciona un valor de b: "
	Leer b
	
	//Cambio de valores. 
	//Respaldar el valor de a
 	temporal = a 
	
	//Cambiar el valor de a 
	a = b
	
	//Asignar el valor temporal a b
	b = temporal
	
	//Imprimir valores intercambiados. 
	Imprimir "Nuevo valor de a es: ", a
	Imprimir "Nuevo valor de b es: ", b
	
FinAlgoritmo

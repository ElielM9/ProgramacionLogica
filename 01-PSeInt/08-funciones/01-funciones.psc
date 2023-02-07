//Una Funcion es un bloque de c�digo reutilizable que realiza una operaci�n en particular. 
//Las funciones tienen par�metros de entrada y pueden devolver un valor de salida. 
//Par�metro: Es el valor que le enviamos a la funci�n. 
//Argumento: Es la variable que recibe la informaci�n para la funci�n. 

//Un procedimiento no devuelve ning�n valor. 
//Definir un procedimiento
Funcion saludar(parametroMensaje)
	Imprimir parametroMensaje
FinFuncion

//Las funciones siempre devuelven un valor. 
//Definir una funci�n.
Funcion resultadoSuma <- sumar(a, b)
	//Cuerpo de la funcion 
	resultadoSuma = a + b
	
FinFuncion

Algoritmo funciones
	Imprimir "Proporcione un mensaje"
	Leer argumentoMensaje 
	//Llamar al procedimiento.  
	saludar(argumentoMensaje)
	
	
	Imprimir "Ingresa un valor al primer argumento: "
	Leer argumentoA
	
	Imprimir "Ingresa un valor al segundo argumento: "
	Leer argumentoB
	//Llamar a la funci�n. 
	resultado = sumar(argumentoA, argumentoB)
	Imprimir "Resultado: ", resultado
	
	
	
FinAlgoritmo

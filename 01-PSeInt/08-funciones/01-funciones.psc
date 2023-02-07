//Una Funcion es un bloque de código reutilizable que realiza una operación en particular. 
//Las funciones tienen parámetros de entrada y pueden devolver un valor de salida. 
//Parámetro: Es el valor que le enviamos a la función. 
//Argumento: Es la variable que recibe la información para la función. 

//Un procedimiento no devuelve ningún valor. 
//Definir un procedimiento
Funcion saludar(parametroMensaje)
	Imprimir parametroMensaje
FinFuncion

//Las funciones siempre devuelven un valor. 
//Definir una función.
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
	//Llamar a la función. 
	resultado = sumar(argumentoA, argumentoB)
	Imprimir "Resultado: ", resultado
	
	
	
FinAlgoritmo

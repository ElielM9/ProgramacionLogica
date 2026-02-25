Funcion cambio(parametro)
	//parametro = 20
	//parametro = Falso
	//parametro = "B"
	//parametro = "Adios"
	//parametro[0] = 20
	parametro[0, 0] = 20
	
	
FinFuncion

Algoritmo tiposDatosValorReferencia 
	//Probar tipos de datos para saber si se pasan las variables por valor o referencia. 
	//argumento = 10 //Enteros pasan por valor por default. 
	//argumento = Verdadero //Lógicos pasan por valor por default. 
	//argumento = "A" //Caracter pasan por valor. 
	//argumento = "Hola" //Cadena pasan por valor. 
	
	//Dimension argumento[1]
	//argumento[0] = 10 //Arreglos pasan por referencia. 
	Dimension argumento[1, 1]
	argumento[0, 0] = 10 //Matrices pasan por referencia. 
	
	cambio(argumento)
	//Imprimir argumento
	//Imprimir argumento[0]
	Imprimir argumento[0, 0]
	
	
FinAlgoritmo

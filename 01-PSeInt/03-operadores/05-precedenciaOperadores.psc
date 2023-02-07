Algoritmo precedenciaOperadores
	//Prioridad de ejecución de los operadores. 
	//1- Paréntesis.
	//2- Potencias (Exponentes).
	//3- División, módulo y multiplicación. 
	//4- Suma y Resta. 
	//5- Operadores relacionales. 
	//6- Operadores lógicos. 
	
	//1- Se revisa de izquierda a derecha
	a = 12 / 3 + 2 * 3 - 1
	//1- División: 12 / 3 = 4
	//2- Multiplicación: 2 * 3 = 6
	//3- Suma y resta: 4 + 6 = 10 - 1 = 9
	Imprimir "Resultado: ", a
	
	//Aplicando parentesis 
	b = 12 / (3 + 2) * (3 - 1)
	//1- Parentesis de izq a derecha. 
	//2- División. 
	//3- Multiplicación. 
	Imprimir "Resultado ", b
	
	
FinAlgoritmo


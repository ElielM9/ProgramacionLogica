Algoritmo precedenciaOperadores
	//Prioridad de ejecuci�n de los operadores. 
	//1- Par�ntesis.
	//2- Potencias (Exponentes).
	//3- Divisi�n, m�dulo y multiplicaci�n. 
	//4- Suma y Resta. 
	//5- Operadores relacionales. 
	//6- Operadores l�gicos. 
	
	//1- Se revisa de izquierda a derecha
	a = 12 / 3 + 2 * 3 - 1
	//1- Divisi�n: 12 / 3 = 4
	//2- Multiplicaci�n: 2 * 3 = 6
	//3- Suma y resta: 4 + 6 = 10 - 1 = 9
	Imprimir "Resultado: ", a
	
	//Aplicando parentesis 
	b = 12 / (3 + 2) * (3 - 1)
	//1- Parentesis de izq a derecha. 
	//2- Divisi�n. 
	//3- Multiplicaci�n. 
	Imprimir "Resultado ", b
	
	
FinAlgoritmo


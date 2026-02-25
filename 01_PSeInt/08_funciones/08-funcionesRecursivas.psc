//Funciones recursivas: Son funciones que se llaman a sí msismas
//2- Debe avanzar hacia un caso base, sino, caemos en ciclos infinitos. 
Funcion funcionRecursiva(_numero)
	Si _numero == 1 Entonces
		Imprimir _numero
	SiNo
		//Llamada recursiva
		funcionRecursiva(_numero - 1)
		Imprimir _numero
	FinSi 
FinFuncion

Algoritmo funcionesRecursivas
	//Imprimir del 1 - 5 de manera recursiva. 
	Repetir
		Imprimir "Ingresa un valor"
		Leer _numero 
	Hasta Que _numero > 0
	
	
	funcionRecursiva(_numero)
	
FinAlgoritmo

Algoritmo promedioCalificaciones
	//Programa que pide al usuario n calificaciones. 
	Definir numero_elementos, calificaciones Como Entero 
	
	//Pedimos el tamaño del arreglo 
	Repetir
		Imprimir "Ingresa el numero de calificaciones: "
		Leer numero_elementos
	Hasta Que numero_elementos > 0 
	
	//Crear el arreglo
	Dimension calificaciones[numero_elementos]
	
	//Pedimos las calificaciones 
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir "Proporciona la calificacion ", i + 1
		Leer calificaciones[i]
	FinPara
	
	//Mostrar los elementos
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		Imprimir i + 1 "Calificacion es: ", calificaciones[i]
	FinPara
	
	//Obtener el promedio
	suma = 0 
	Para i = 0 Hasta numero_elementos - 1 Con Paso 1 Hacer
		suma = suma + calificaciones[i]
	FinPara
	
	Imprimir "La calificacion final es: ", suma / numero_elementos
	
	
FinAlgoritmo

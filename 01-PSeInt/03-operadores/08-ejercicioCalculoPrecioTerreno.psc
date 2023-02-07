Algoritmo ejercicioCalculoPrecioTerreno
	//Definición de variables. 
	Definir ancho, largo, precio_m2, area, precio_total Como Real
	
	//Introducir el ancho del terreno. 
	Imprimir  "Programa para calcular precio de un terreno"
	
	Imprimir "Introduce el ancho del terreno (metros): "
	Leer ancho
	
	//Introducir el largo del terreno. 
	Imprimir "Introduce el largo del terreno (metros): "
	Leer largo
	
	//Introducir el precio por metro cuadrado. 
	Imprimir "Escribe el precio por metro cuadrado: "
	Leer precio_m2
	
	//Calcular el area. 
	area = ancho * largo
	
	//Calcular el precio total. 
	precio_total = area * precio_m2
	
	//Imprimir los resultados.
	Imprimir "El area es: ", area
	Imprimir "El precio del terreno es: ", precio_total
	
FinAlgoritmo

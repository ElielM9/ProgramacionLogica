Algoritmo ejercicioOpcionesMenu
	//Definir variables. 
	Definir seleccion Como Entero
	
	//Recibir un valor
	Escribir "Selecciona una opción: 1- Sumar, 2- Multiplicar, 3- Salir"
	Leer seleccion 
	
	//Validar
	resultado = seleccion == 1 O seleccion == 2 O seleccion == 3
	
	//Imprimir resultados
	Imprimir "¿El valor ", seleccion, " es valido? ", resultado
	
FinAlgoritmo

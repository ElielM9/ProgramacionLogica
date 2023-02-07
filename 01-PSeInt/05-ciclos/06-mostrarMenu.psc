Algoritmo mostrarMenu
	Definir seleccion Como Entero
	
	Repetir
		Imprimir "Menu: 1- Saludar, 2- Salir"
		
		Repetir
			//Valor proporcionado por el usuario
			Imprimir "Ingresa una opcion"
			Leer seleccion 
			
			//Validar la condicion seleccionada
			condicion_sel = seleccion = 1 O seleccion = 2
			
			Si No condicion_sel Entonces
				Imprimir "No valido"
			FinSi
			
		Hasta Que condicion_sel 
		
		Segun seleccion Hacer
			1: Imprimir "Hola!"
			2: Imprimir "Adios"
		FinSegun
		
	Hasta Que seleccion == 1 O seleccion == 2
	
	
FinAlgoritmo

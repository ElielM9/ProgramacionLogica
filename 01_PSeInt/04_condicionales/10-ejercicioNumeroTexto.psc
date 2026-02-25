Algoritmo ejercicioNumeroTexto 
	Imprimir "Proporciona un valor (1 - 3): "
	Leer numero1
	
	Segun numero1 Hacer
		1: numeroTexto = "Uno"
		2: numeroTexto = "Dos"
		3: numeroTexto = "Tres"
		De Otro Modo:
			numeroTexto = "No valido"
	FinSegun
	
	Imprimir "Numero ", numeroTexto
	
FinAlgoritmo

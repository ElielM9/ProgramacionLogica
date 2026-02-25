Algoritmo ejercicioMayorEdad 
	//Definición de variables
	Definir EDAD_ADULTO, edad_persona Como Entero
	EDAD_ADULTO = 18
	
	//Introducir la edad
	Imprimir "Proporciona tu edad: "
	Leer edad_persona 
	
	//Validar si la persona es mayor de edad
	Si edad_persona >= EDAD_ADULTO Entonces
		Imprimir "La persona con edad: ", edad_persona, " es un adulto."
	SiNo
		Imprimir "La persona con edad: ", edad_persona, " es menor de edad."
	FinSi
	
	
FinAlgoritmo

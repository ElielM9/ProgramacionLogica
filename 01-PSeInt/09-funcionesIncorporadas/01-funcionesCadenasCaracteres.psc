Algoritmo funcionesCadenasCaracteres
	//Cadenas de caracteres. 
	//Cada uno de los caracteres se almacena en una celda con un indice.
	//Son similares a los arrays, los indices comienzan en 0.
	
	Definir variableCadena Como Cadena
	
	variableCadena = "Hola Mundo"
	Imprimir variableCadena
	
	//Funci�n para obtener longitud de cadena.
	Imprimir "Longitud de cadena: ", Longitud(variableCadena)
	
	//Funcion para obtener subcadena 
	mi_subcadena = Subcadena(variableCadena, 5, 9)
	Imprimir "Subcadena: ", mi_subcadena
	
	//Concatenaci�n: Concatenar es unir una o m�s cadenas. 
	cadenaUno = "Hola"
	cadenaDos = "Adios"
	cadenaTres = Concatenar(cadenaUno, cadenaDos)
	Imprimir "Concatenacion: ", cadenaTres
	//Concatenar usando el operador + 
	cadenaTres = cadenaUno + " " + cadenaDos
	Imprimir "Concatenacion +: ", cadenaTres
	Imprimir "Longitud cadena 3 " Longitud(cadenaTres)
	
	//Convertir de texto a n�mero
	cadenaUno = "10"
	cadenaDos = "20"
	cadenaTres = cadenaUno + cadenaDos
	Imprimir cadenaTres
	resultado = ConvertirANumero(cadenaUno) + ConvertirANumero(cadenaDos)
	Imprimir "Conversi�n es: ", resultado
	
	//Convertir de n�mero a texto. 
	edad = 22
	edadTexto = ConvertirATexto(edad) + " a�os"
	Imprimir "Convirtiendo a texto ", edadTexto
	
	//Convertir a mayusculas O minusculas. 
	nombre = "Juan Perez"
	Imprimir "Nombre en mayusculas: " + Mayusculas(nombre)
	Imprimir "Nombre en minusculas: " + Minusculas(nombre)
	
	
	
	
FinAlgoritmo

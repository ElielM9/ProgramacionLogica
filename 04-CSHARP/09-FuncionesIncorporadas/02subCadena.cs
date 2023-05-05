// SubCadenas en C#

string cadena = "Hola a todos"; 

// Obtener subcadenas 
// substring(indiceInicio, numeroCaracteres)
var subCadena = cadena.Substring(0, 4); 
Console.WriteLine($"Subcadena: {subCadena}");

var subCadena2 = cadena.Substring(7, 5);
Console.WriteLine($"Subcadena 2: {subCadena2}");
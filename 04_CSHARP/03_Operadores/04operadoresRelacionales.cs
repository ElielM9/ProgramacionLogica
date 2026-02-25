// Operadores relacionales (Comparadores) en C#

var a = 5;
var b = 6;
Console.WriteLine($"Valor a: {a}, Valor b: {b}");


// Igual ==: Es verdadero si dos variables tienen el mismo valor.
bool c = a == b;
Console.WriteLine($"A es igual que B? {c}");

// Diferente !=: Es verdadero si las variables son diferentes.
c = a != b;
Console.WriteLine($"A es diferente que B? {c}");

// Mayor que >: Es verdadero si la variable es mayor que otra.
c = a > b;
Console.WriteLine($"A es mayor que B? {c}");

// Mayor o igual >=: Es verdadero si la variable es mayor o igual que otra.
c = a >= b;
Console.WriteLine($"A es mayor o igual que B? {c}");

// Menor que <: Es verdadero si la variable es menor que otra.
c = a < b;
Console.WriteLine($"A es menor que B? {c}");

// Menor o igual <=: Es verdadero si la variable es menor o igual que otra.
c = a <= b;
Console.WriteLine($"A es menor o igual que B? {c}");

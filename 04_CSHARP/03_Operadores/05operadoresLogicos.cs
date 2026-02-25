// Operadores logicos en C#

bool a = true;
bool b = false;
bool c;

// Operador AND (&&): Verdadero si ambos son verdaderos.
c = a && b;
Console.WriteLine($"a y b son verdaderos? {c}");

// Operador OR (||): Verdadero si cualquiera es verdadero.
c = a || b;
Console.WriteLine($"a o b es verdadero? {c}");

// Operador NOT (!): Invierte el valor original.
c = !a;
Console.WriteLine($"a es verdadero? {c}");

// Funciones recursivas en C#: Son funciones que se llaman a si mismas y cada vez que se llaman tienen que acercarse a un caso base. 

// Imprimir de 1 - 5 de manera recursiva
int valor = 5;
FuncionRecursiva(valor);

// Definimos la funcion
void FuncionRecursiva(int numero)
{
    // Caso base
    if (numero == 1)
    {
        Console.WriteLine($"Valor recursivo {numero}");
    }
    // Caso recursivo 
    else
    {
        FuncionRecursiva(numero - 1);
        Console.WriteLine($"Numero: {numero}");
    }
}



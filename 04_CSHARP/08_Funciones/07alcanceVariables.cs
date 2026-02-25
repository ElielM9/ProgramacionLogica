// Alcance de variables en C#
class ProgramaPrincipal
{
    // Atributo de instancia: El que se asocia con los objetos 
    int atributoInstancia = 5;

    // Atributo de clase 
    static int atributoClase = 10;

    static void Main(string[] args)
    {
        // Variables locales
        int variableLocal = 20;
        Console.WriteLine($"Variable local: {variableLocal}");
        Console.WriteLine($"Variable clase: {atributoClase}");

        // Creamos un objeto 
        var objeto = new ProgramaPrincipal();
        Console.WriteLine($"Variable de instancia: {objeto.atributoInstancia}");


    }

}
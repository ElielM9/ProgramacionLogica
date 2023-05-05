// Switch en C#

int diaSemana;
Console.WriteLine("Ingresa un dia de la semana 1 - 3");
diaSemana = Convert.ToInt32(Console.ReadLine());

switch (diaSemana)
{
    case 1:
        Console.WriteLine("Lunes");
        break;
    case 2:
        Console.WriteLine("Martes");
        break;
    case 3:
        Console.WriteLine("Miercoles");
        break;
    default:
        Console.WriteLine("Valor no valido");
}
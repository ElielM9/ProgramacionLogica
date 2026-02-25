// Ejercicio dia de la semana en C#

int diaSemana;
Console.WriteLine("Ingresa un dia de la semana 1 - 5");
diaSemana = Convert.ToInt32(Console.ReadLine());

if (diaSemana == 1)
    Console.WriteLine("Es lunes");
else if (diaSemana == 2)
    Console.WriteLine("Es martes");
else if (diaSemana == 3)
    Console.WriteLine("Es miercoles");
else
    Console.WriteLine("Valor erroneo");


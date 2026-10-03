using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main(string[] args)
    {
        List<int> numbers = new List<int>();

        Random random = new Random();
        

        foreach (int i in Enumerable.Range(0, 10))
        {
            int number = random.Next(1, 100);
            numbers.Add(number);
        }

        foreach (int result in numbers)
        {
            Console.WriteLine(result);
        }

        Console.WriteLine("Program finished");
    }
}
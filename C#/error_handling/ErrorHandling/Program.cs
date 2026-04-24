using System;

class Program
{
    static void Main(string[] args)
    {
        int first = 20;
        int second = 10;

        try
        {
            bool result = first / second == 2;
            Console.WriteLine(result);
        }
        catch (Exception e)
        {
            Console.WriteLine(e.Message);
        }
    }
}
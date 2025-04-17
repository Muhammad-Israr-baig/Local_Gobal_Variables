using System;

namespace VariableScopeDemo
{
    class Program
    {
        // Private static field with underscore prefix
        private static int global_var = 5;

        static void Main(string[] args)
        {
            Console.WriteLine("Global variable (Before): " + global_var);
            int local_var = 6; // Local variable (correctly camelCase)

            Console.WriteLine("Local varaible: " + local_var);
            global_var += local_var;

            Console.WriteLine("Global variable (After): " + global_var);
            Console.ReadLine();
        }
    }
}

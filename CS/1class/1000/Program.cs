using System;

namespace ConsoleApp1
{
	class Program
	{
		static void Main(string[] args)
		{
			int		a;
			int		b;
			int		sum;
			string	str;

			str = "\0";
			str = Console.ReadLine();
			a = Convert.ToInt32(str);
			str = Console.ReadLine();
			b = Convert.ToInt32(str);
			sum = a + b;
			Console.WriteLine("{0}",sum);
		}
	}
}


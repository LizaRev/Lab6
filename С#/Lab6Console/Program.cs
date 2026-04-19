using System;
using Lab6Library;
namespace Lab6
{
    class Program
    {
        static void Main(string[] args)
        {
           
            MyText text = new MyText();

            Console.WriteLine("Введіть кількість рядків : ");
            int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Введіть рядок " + (i + 1) + " : ");
                string input = Console.ReadLine();
                text.AddLine(input);
            }

            Console.WriteLine("Початковий текст : ");
            Console.WriteLine(text.GetText());

            Console.WriteLine("Введіть новий рядок, який хочете додати : ");
            string newLine = Console.ReadLine();
            text.AddLine(newLine);

            Console.WriteLine("Текст після додавання : ");
            Console.WriteLine(text.GetText());

            Console.WriteLine("Найкоротший рядок (довжина) : ");
            Console.WriteLine(text.GetShortestLineLength());

            Console.WriteLine("Відсоток приголосних : ");
            Console.WriteLine(text.GetConsonantsPercentage());

            text.ReplaceAllMultipleSpacesWithOne();
            Console.WriteLine("Після заміни пробілів : ");
            Console.WriteLine(text.GetText());

            text.ClearAllEdges();
            Console.WriteLine("Після очищення пробілів по краях : ");
            Console.WriteLine(text.GetText());

            Console.WriteLine("Введіть індекс рядка для видалення : ");
            int index = int.Parse(Console.ReadLine());

            text.RemoveLine(index - 1);

            Console.WriteLine("Після видалення : ");
            Console.WriteLine(text.GetText());

            text.Clear();

            Console.WriteLine("Після очистки тексту : ");
            Console.WriteLine(text.GetText());



            MyText text1 = new MyText();

            text1.AddLine("hi");
            text1.AddLine("cat  dog");
            text1.AddLine("test");


            Console.WriteLine("Початковий текст : ");
            Console.WriteLine(text1.GetText());

            Console.WriteLine("Найкоротший рядок (довжина) : ");
            Console.WriteLine(text1.GetShortestLineLength());

            Console.WriteLine("Відсоток приголосних : ");
            Console.WriteLine(text1.GetConsonantsPercentage());

            text1.ReplaceAllMultipleSpacesWithOne();
            Console.WriteLine("Після заміни пробілів : ");
            Console.WriteLine(text1.GetText());

            text1.ClearAllEdges();
            Console.WriteLine("Після очищення пробілів : ");
            Console.WriteLine(text1.GetText());

            text1.RemoveLine(1);
            Console.WriteLine("Після видалення рядка з індексом 1 : ");
            Console.WriteLine(text1.GetText());

            text1.Clear();
            Console.WriteLine("Після очистки тексту : ");
            Console.WriteLine(text1.GetText());
        }
    }
}
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] scores = new int[] {97, 92, 81, 60};
            List<int> numbers = new List<int>() { 5, 4, 1, 3, 9, 8, 6, 7, 2, 0 };
            List<int> numbers2 = new List<int>() { 15, 14, 11, 13, 19, 18, 16, 17, 12, 10 }; 
            IEnumerable<int> scoreQuery =
                from score in scores
                where score > 80
                select score;
            foreach(int i in scoreQuery)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");
            // Query #1. 按条件输出

            // The query variable can also be implicitly typed by using var
            IEnumerable<int> filteringQuery =
                from num in numbers
                where num < 3 || num > 7
                select num;
            foreach (int i in filteringQuery)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");
            // Query #2. 排序方法
            IEnumerable<int> orderingQuery =
                from num in numbers
                where num < 3 || num > 7
                orderby num ascending
                select num;
            foreach (int i in orderingQuery)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");            
            // Query #3. 有点问题
            string[] groupingQuery = { "carrots", "cabbage", "broccoli", "beans", "barley" };
            IEnumerable<IGrouping<char, string>> queryFoodGroups =
                from item in groupingQuery
                group item by item[0];
            //其他方法  Sum、Max、Min、Average 
            Console.Write("average: " + numbers.Average()+"\n");
            IEnumerable<int> concatenationQuery = numbers2.Concat(numbers);
            foreach (int i in concatenationQuery)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");
            //Query #4 带条件查询
            IEnumerable<int> largeNumbersQuery = numbers.Where(c => c > 5);
            foreach (int i in largeNumbersQuery)
            {
                Console.Write(i + " ");
            }
            Console.Write("\n");
            //Query #5
            int numcount1, numcount2;
            //method1 直接进行计数
            numcount1 =
                (from num in numbers
                 where num < 3 || num > 7
                 select num).Count();
            //method2 将符合条件的元素放入到枚举数组中，然后进行计数
            IEnumerable<int> requiredQuery =
                from num in numbers
                where num < 3 || num > 7
                select num;
            numcount2 = requiredQuery.Count();

            Console.Write("numcount1:" + numcount1 + " numcount2:" + numcount2);
            Console.ReadLine();
        }
    }
}

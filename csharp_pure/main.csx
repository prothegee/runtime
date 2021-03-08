// dotnet script 1.0.1 & dotnet 5.0.200
using System;


static int[] prime(int number)
{

    number ++;

    int[] PrimeNumbers = {};

    for (int prime = 2; prime < number; prime++)
    {

        int count = 2;

        while (true)
        {

            if (prime % count == 0)
            {
                break;
            }

            count += 1;

            if (count == 1)
            {
                PrimeNumbers.Append(prime);
                break;
            }

        }

    }


    return PrimeNumbers;

}


foreach (int result in Enumerable.Range(0, 9))
{

    Stopwatch start = new Stopwatch();

    start.Start();
    prime(32768);  // 32.768
    start.Stop();

    
    Console.WriteLine("Test Count #" + $"{result + 1}" + " | Took = " + start.Elapsed.TotalSeconds + " second");
    
}
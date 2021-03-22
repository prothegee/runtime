// gcc (tdm64-1) 9.2.0
#include <iostream>
#include <vector>
#include <chrono>


using namespace std;
using namespace std::chrono;


int prime(int number)
{

    number++;

    vector<int> PrimeNumbers;

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
                PrimeNumbers.push_back(prime);
                break;
            }

        }

    }


    return PrimeNumbers.size();

}


int main()
{

    int CountNumber = 9;

    for (int result = 0; result < CountNumber; result++)
    {
        /*
        - tricky

        typedef std::chrono::high_resolution_clock Time;
        typedef std::chrono::milliseconds ms;
        typedef std::chrono::duration<float> fsec;

        auto start = Time::now();
        
        auto stop = Time::now();

        fsec fs = start - stop;
        ms d = std::chrono::duration_cast<ms>(fs);

        cout << "Test Count #" << (result + 1) << " | Took = " << fs.count() << " second\n";
        cout << "Test Count #" << (result + 1) << " | Took = " << d.count() << " millisecond\n";
        */


        auto start = high_resolution_clock::now();
        prime(32768);
        auto stop = high_resolution_clock::now();

        auto duration = duration_cast<milliseconds>(stop - start);

        double time = duration.count();

        double calculation[1] = {time};

        double current = calculation[0] / 1000;

        cout << "Test Count #" << (result + 1) << " | Took = " << current << " second\n";

    }

    return 0;

}
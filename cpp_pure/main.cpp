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

        auto start = high_resolution_clock::now();
        prime(32768);
        auto stop = high_resolution_clock::now();

        // seconds doesn't show good result
        auto duration = duration_cast<milliseconds>(stop - start);

        cout << "Test Count #" << (result + 1) << " | Took = " << duration.count() << " millisecond\n";
    }

    return 0;
}
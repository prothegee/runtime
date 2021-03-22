// node 15.8.0


function prime(number)
{

    number ++;

    var PrimeNumber = [];

    for (var prime =2; prime < number; prime++)
    {

        var count = 2;

        while (true)
        {

            if (prime % count == 0)
            {
                break;
            }

            count += 1;

            if (count == 1)
            {
                PrimeNumber.push(prime);
                break;
            }

        }

    }


    return PrimeNumber;

}


var CountNumber = 9;

for (var result = 0; result < CountNumber; result++)
{

    var time = new Date();
    // let start = time.getMilliseconds();
    prime(32768); // 32.768
    let stop = time.getMilliseconds();

    console.log(`Test Count #${result + 1} | Took = ${stop/1000} second`);

}

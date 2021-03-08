# python 3.7.9

from datetime import datetime




# 
def prime(number):

    number += 1

    PrimeNumbers = []

    for prime in range(2, number):
        
        count = 2

        while True:

            if prime % count == 0:
                break

            count += 1

            if count == 1:
                PrimeNumbers.append(prime)
                break


    return PrimeNumbers


CountNumber = 9


for result in range(CountNumber):

    start = datetime.now()
    prime(32768) # 32.768

    print(
        "Test Count #{} | Took = {} second".format
        (result + 1, (datetime.now()-start).total_seconds())
    )

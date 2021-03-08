// go 1.16
package main

import (
	"fmt"
	"time"
)


func prime(number int) []int {

	number++

	PrimeNumbers := []int{}
    
	for prime := 2; prime < number; prime++ {

		count := 2

		for {

			if prime % count == 0 {

				break
			}

			count++

			if count == prime {

				PrimeNumbers = append(PrimeNumbers, prime)
				break

			}

		}

	}


	return PrimeNumbers
    
}


func main() {

	CountNumber := 9

	for result := 0; result < CountNumber; result++ {
        
		start := time.Now()
		prime(32768) // 32.768

		fmt.Printf("Test Count #%v | Took = %v second\n", result + 1, time.Now().Sub(start).Seconds())

	}

}
package main

import "fmt"

func main() {
	number := make([]int, 10)
	for i := 1; i < 2020; i++ {
		if i < 10 {
			number[i%10]++
		} else if i < 100 {
			number[i%10]++
			number[i/10%10]++
		} else if i < 1000 {
			number[i%10]++
			number[i/10%10]++
			number[i/100%10]++
		} else if i < 10000 {
			number[i%10]++
			number[i/10%10]++
			number[i/100%10]++
			number[i/1000%10]++
		}
	}
	fmt.Println(number)
}

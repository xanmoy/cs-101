package main

import (
	"fmt"
	"errors"
)

func main() {
	var printValue string = "Hohohohoho"
	PrintMe(printValue)

	 numerator := 11
	 denominator := 0
	 result, remainder, err := intDivision(numerator, denominator)
	 if err != nil {
		 fmt.Printf(err.Error())
	 }else if remainder==0{
		 fmt.Printf("The result of the integer division %v", result)
	 }else{
		fmt.Printf("The result of the integer division %v with remainder %v", result, remainder)
	 }
	 
}

func PrintMe(printValue string) {
	fmt.Println("Hi I am a function")
	fmt.Println(printValue)
}

func intDivision(numerator int, denominator int) (int, int, error) {
	var err error
	if denominator==0 {
		err = errors.New("division by zero is not allowed")
		// fmt.Println(err)
		return 0, 0, err
	
	}
	var result int = numerator / denominator
	var remainder int = numerator%denominator
	return result, remainder, err
}

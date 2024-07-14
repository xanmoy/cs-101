package main

import (
	"fmt"
	"unicode/utf8"
	"reflect"
)
func main(){
	fmt.Println("Hello, World!")
	var intNum int = 32767
	intNum = intNum + 1
	fmt.Println(intNum)

	var floatNum float64 = 123456789.9
	fmt.Println(floatNum)

	var floatNum32 float32 = 10.1
	var intNum32 int16 = 2
	var result float32 = floatNum32 + float32(intNum32)

	fmt.Println(result)

	var intNum1 int = 3
	var intNum2 int = 2
	fmt.Println(intNum1 / intNum2)
	fmt.Println(intNum1 % intNum2)
	
	var myString string = "Hello \n Go"
	fmt.Println(myString)
	myString = `Welcome 
	to
	Go lang`
	fmt.Println(myString)
	myString = "hello"+" "+"world"
	fmt.Println(myString)
	myString = "γ"
	fmt.Println(len(myString))
	fmt.Println(utf8.RuneCountInString(myString))

	var myRune rune = 'a'
	fmt.Println(myRune)

	var myBoolean bool = false
	fmt.Println(myBoolean)

	var intNum3 int
	fmt.Println(intNum3)

	// var myVar = "text"
	myVar := "text"
	// var myVar string = foo() 
	fmt.Println(reflect.TypeOf(myVar))
	fmt.Println(myVar)

	// var var1, var2 = 1, 2
	var1, var2 := 1, 2
	fmt.Println(var1, var2)

	const myConst string = "const value"
	fmt.Println(myConst)

	const pi float32 = 3.1415
	fmt.Println(pi)


}
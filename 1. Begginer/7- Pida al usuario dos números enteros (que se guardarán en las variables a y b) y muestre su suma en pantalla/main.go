package main

import "fmt"

func main() {
	var a int
	var b int
	fmt.Println("Ingrese el primer número: ")
	fmt.Scanf("%d", &a)
	// %d in go is for integer and also user & to indicate address of variable in memory like C
	fmt.Println("Ingrese el segundo número: ")
	fmt.Scanf("%d", &b)
	fmt.Println("El resultado es", a + b)
}
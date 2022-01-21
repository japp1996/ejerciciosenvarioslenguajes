package main

import "fmt"

func main() {
	var n1 int
	var n2 int
	fmt.Println("Ingrese el primer número: ")
	fmt.Scanf("%d", &n1) // function to wait until the prompt line in enteres is Scanf not Scan ¿ok?
	fmt.Println("Ingrese el segundo número: ")
	fmt.Scanf("%d", &n2)
	fmt.Println("El resultado de la multiplicación de ", n1, " y ", n2, " es: ", n1 * n2)
}
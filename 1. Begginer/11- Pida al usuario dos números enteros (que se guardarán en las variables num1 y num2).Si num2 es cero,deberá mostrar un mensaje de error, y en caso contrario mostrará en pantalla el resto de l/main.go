package main
import "fmt"

func main() {
	var (
		num1 int
		num2 int
	)
	fmt.Println("Ingrese el primer número entero: ")
	fmt.Scanf("%d", &num1)
	fmt.Println("Ingrese el otro número entero: ")
	fmt.Scanf("%d", &num2)

	if (num2 == 0) {
		fmt.Println("Error: No se puede dividir un número entre 0")
	} else {
		fmt.Println("El resultado de dividir ", num1, " entre ", num2, " es igual a: ", num1/num2)		
	}
}
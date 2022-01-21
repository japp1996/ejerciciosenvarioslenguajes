package main
import "fmt"

func main() {
	/* Another way to declarate variables in GoLang */
	var (
		data1 float32
		data2 float32
	)
	fmt.Println("Ingrese un número real: ")
	fmt.Scanf("%f", &data1)
	fmt.Println("Ingrese otro número real: ")
	fmt.Scanf("%f", &data2)
	fmt.Println("El resultado de dividir", data1, " entre ", data2, " es igual a ", data1/data2)
}
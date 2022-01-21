package main
import "fmt"

func main() {
	var data1 float32
	var data2 float32
	fmt.Println("Ingrese un número real: ")
	fmt.Scanf("%f", &data1)
	fmt.Println("Ingrese otro número real: ")
	fmt.Scanf("%f", &data2)
	if data2 == 0 {
		fmt.Println("Error: No se pueden dividir números entre 0")
	} else {
		/* Un float32 o 64 en golang se representa en números binarios con 32 bits o 64 bits */
		fmt.Printf("El resultado de dividir %f entre %f es igual a: %f", data1, data2, data1/data2)
		/* Printf funciona igual que printf de C */
	}
}
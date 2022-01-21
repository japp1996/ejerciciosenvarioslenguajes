package main

import "fmt"

func main() {
	var num int

	for i:=0; i < 2; i++ {
		fmt.Println("Ingrese un número entero: \n")
		fmt.Scanf("%d", &num)
		if num == 0 {
			fmt.Println("El programa ha finalizado")
			break
		} else {
			i = 0
			if num%2 == 0 {
				fmt.Println("El número es par\n")
			} else {
				fmt.Println("El número es impar\n")
			}
		}
	}
}
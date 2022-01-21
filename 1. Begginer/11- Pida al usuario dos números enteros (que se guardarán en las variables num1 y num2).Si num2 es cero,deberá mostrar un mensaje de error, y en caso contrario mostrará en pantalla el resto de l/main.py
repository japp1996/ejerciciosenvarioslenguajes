num1 = int(input("Ingrese el primer número entero: "))
num2 = int(input("Ingrese el segundo número entero: "))
if (num2 == 0):
	print("Error: no se puede dividir un número entre 0")
else:
	print("El resultado de dividir " + str(num1) + " entre " + str(num2) + " es igual a: " + str(num1/num2))
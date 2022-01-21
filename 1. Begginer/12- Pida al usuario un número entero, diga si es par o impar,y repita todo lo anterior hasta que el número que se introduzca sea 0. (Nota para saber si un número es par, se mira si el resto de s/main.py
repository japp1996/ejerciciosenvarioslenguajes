num = 1
while num > 0:
	num = int(input("Ingrese un número entero: "))
	if num == 0 :
		print("El programa ha finalizado")
		break
	else :
		i = 0
		if num%2 == 0 :
			print("Es par")
		else :
			print("Es impar")
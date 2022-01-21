data1 = float(input('Ingrese un número real: '))
data2 = float(input('Ingrese otro número real: '))
if data2 == 0 :
	print('Error: No se puede dividir un número entre 0')
else :
	print('El resultado de dividir ' + str(data1) + ' entre ' + str(data2) + ' es: ' + str(data1/data2))
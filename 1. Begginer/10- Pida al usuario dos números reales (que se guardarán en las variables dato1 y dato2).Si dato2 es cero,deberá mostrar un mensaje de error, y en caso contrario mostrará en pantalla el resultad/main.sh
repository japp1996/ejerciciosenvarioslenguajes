read -p "Ingrese el primer número real: " data1
read -p "Ingrese el otro número real: " data2

#en bash si se comparan string se usa = pero si se comparan integers se usa  -eq
if [[ $data2 -eq 0 ]]; then
	echo "Error: No se puede dividir un número entre 0"
else
	echo "El resultado de dividir ${data1} entre ${data2} es igual a: $((data1/data2))"
fi
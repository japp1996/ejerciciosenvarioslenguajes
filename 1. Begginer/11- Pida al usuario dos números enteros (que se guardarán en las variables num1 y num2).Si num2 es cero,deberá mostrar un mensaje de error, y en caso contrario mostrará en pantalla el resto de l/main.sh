read -p "Ingrese un número entero: " num1
read -p "Ingrese otro número entero: " num2
#en bash si se comparan string se usa = pero si se comparan integers se usa  -eq
if [[ num2 -eq 0 ]]; then
	echo "No se puede dividir entre 0"
else
	echo "El resultado de dividir ${num1} entre ${num2} es: $((num1 / num2))"
fi
num=1
while [[ num > 0 ]]; do
	read -p "Ingrese un número entero: " num
	if [[ num -eq 0 ]]; then
		echo "El programa ha finalizado"
		break
	else
		if [[ $((num%2)) = 0 ]]; then
			echo "El número es par"
		else
			echo "El número es impar"
		fi
	fi
done
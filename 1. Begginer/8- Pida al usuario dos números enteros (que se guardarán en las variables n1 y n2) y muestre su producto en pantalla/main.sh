read -p "Ingrese el primer número: " n1  # -p de prompt
read -p "Ingrese el segundo número: " n2 # -p de prompt
ouput="El producto de $((n1)) y $((n2)) es: $((n1*n2))"
echo ${ouput}
read -p "Ingrese un número real: " data1
read -p "Ingrese otro número real: " data2
output="El resultado de dividir ${data1} entre ${data2} es igual a: $((data1/data2))"
echo $output
# se puede imprimir ${output} o $output
# read is to read a line. In this case the -p indicate that read a prompt line and save in a variable
read -p ">> Ingrese el primer número: " a
read -p ">> Ingrese el segundo número: " b
# declarate variables must be without space between var name, equal sign and value
c="El resultado es: "
# to show variables you must use ${var}
# to make operations $(())
echo ${c} $((a + b))
# se puede imprimir ${c} o $c
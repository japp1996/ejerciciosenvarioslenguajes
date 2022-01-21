<?php
$num1 = (int)readline("Ingrese el primer número entero: ");
$num2 = (int)readline("Ingrese el segundo número entero: ");
if ($num2 == 0) {
	echo "Error: NO se puede dividir un número entre 0";
} else {
	echo "El resultado de dividir $num1 entre $num2 es igual a: " . (float) $num1 / $num2;
}
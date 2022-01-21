<?php 

for ($i = 0; $i < 2; $i++) {
	$num = (int) readline("Ingrese un número: ");
	if ($num != 0) {
		if ($num%2 == 0) {
			echo "El número es par \n";
		} else {
			echo "El número es impar \n";
		}
		$i = 0;
	} else {
		echo "El programa ha finalizado";
		break;
	}
}
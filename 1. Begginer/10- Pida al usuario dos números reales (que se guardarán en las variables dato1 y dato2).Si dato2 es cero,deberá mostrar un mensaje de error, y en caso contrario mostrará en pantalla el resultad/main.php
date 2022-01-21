<?php 
/* Float en php sería de 14 dígitos */
(float)$data1 = readline('Ingrese un número real: ');
(float)$data2 = readline('Ingrese otro número real: ');
if ($data2 == 0) {
	echo 'Error: No se puede dividir entre 0';
} else {
	echo 'El resultado de dividir ' . $data1 . ' entre ' . $data2 . ' es: ' . (float)$data1/$data2;
}
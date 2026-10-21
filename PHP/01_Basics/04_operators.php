
<?php

$a = 10;
$b = 3;

// Arithmetic operators
echo "Addition: " . ($a + $b) . "\n";
echo "Subtraction: " . ($a - $b) . "\n";
echo "Multiplication: " . ($a * $b) . "\n";
echo "Division: " . ($a / $b) . "\n";
echo "Modulus: " . ($a % $b) . "\n";

// Comparison operators
var_dump($a > $b);
var_dump($a == $b);

// Logical operators
var_dump($a > 5 && $b < 5);
var_dump($a < 5 || $b < 5);


<?php

// ==========================================
// 1. BASIC ANONYMOUS FUNCTION
// ==========================================

$greet = function () {
    echo "Hello, welcome to PHP!\n";
};

echo "----- Basic Anonymous Function -----\n";

$greet();
$greet();


// ==========================================
// 2. ANONYMOUS FUNCTION WITH PARAMETERS
// ==========================================

$add = function ($a, $b) {
    return $a + $b;
};

echo "\n----- Function with Parameters -----\n";

echo "Sum: " . $add(10, 20) . "\n";
echo "Sum: " . $add(50, 30) . "\n";


// ==========================================
// 3. ANONYMOUS FUNCTION WITH RETURN
// ==========================================

$square = function ($number) {
    return $number * $number;
};

echo "\n----- Square Calculation -----\n";

echo "Square of 5: " . $square(5) . "\n";
echo "Square of 9: " . $square(9) . "\n";
echo "Square of 12: " . $square(12) . "\n";


// ==========================================
// 4. USING THE USE KEYWORD
// ==========================================

$name = "Lokanath";

$welcome = function () use ($name) {
    echo "Welcome, $name!\n";
};

echo "\n----- Using USE Keyword -----\n";

$welcome();


// ==========================================
// 5. ANONYMOUS FUNCTION WITH TYPE DECLARATIONS
// ==========================================

$multiply = function (int $a, int $b): int {
    return $a * $b;
};

echo "\n----- Type Declarations -----\n";

echo "Multiplication: " . $multiply(10, 5) . "\n";


// ==========================================
// END OF PROGRAM
// ==========================================


<?php

// ==========================================
// 1. BASIC ARROW FUNCTION
// ==========================================

$greet = fn() => "Hello, welcome to PHP!";

echo "----- Basic Arrow Function -----\n";
echo $greet() . "\n";


// ==========================================
// 2. ARROW FUNCTION WITH PARAMETERS
// ==========================================

$add = fn($a, $b) => $a + $b;

echo "\n----- Addition -----\n";
echo "Sum: " . $add(10, 20) . "\n";
echo "Sum: " . $add(50, 30) . "\n";


// ==========================================
// 3. ARROW FUNCTION WITH RETURN VALUE
// ==========================================

$square = fn($number) => $number * $number;

echo "\n----- Square Calculation -----\n";
echo "Square of 5: " . $square(5) . "\n";
echo "Square of 9: " . $square(9) . "\n";
echo "Square of 12: " . $square(12) . "\n";


// ==========================================
// 4. AUTOMATIC VARIABLE CAPTURE
// ==========================================

$name = "Lokanath";

$welcome = fn() => "Welcome, $name!";

echo "\n----- Automatic Variable Capture -----\n";
echo $welcome() . "\n";


// ==========================================
// 5. ARROW FUNCTION WITH TYPE DECLARATIONS
// ==========================================

$multiply = fn(int $a, int $b): int => $a * $b;

echo "\n----- Type Declarations -----\n";
echo "Multiplication: " . $multiply(10, 5) . "\n";


// ==========================================
// 6. ARROW FUNCTION WITH CONDITIONS
// ==========================================

$checkEven = fn(int $number): string =>
    $number % 2 === 0 ? "Even" : "Odd";

echo "\n----- Even or Odd -----\n";
echo "10 is " . $checkEven(10) . "\n";
echo "7 is " . $checkEven(7) . "\n";


// ==========================================
// END OF PROGRAM
// ==========================================

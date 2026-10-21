
<?php

$marks = 82;

if ($marks >= 90 && $marks <= 100) {
    echo "Grade: A\n";
} elseif ($marks >= 75 && $marks < 90) {
    echo "Grade: B\n";
} elseif ($marks >= 60 && $marks < 75) {
    echo "Grade: C\n";
} elseif ($marks >= 40 && $marks < 60) {
    echo "Grade: D\n";
} elseif ($marks >= 0 && $marks < 40) {
    echo "Result: Fail\n";
} else {
    echo "Invalid marks\n";
}

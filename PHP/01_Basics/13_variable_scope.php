
<?php

// ==========================================
// 1. LOCAL SCOPE
// ==========================================

function showAge()
{
    $age = 21;

    echo "----- Local Scope -----\n";
    echo "Age: $age\n";
}

showAge();


// ==========================================
// 2. GLOBAL SCOPE
// ==========================================

$college = "GIET";

function showCollege()
{
    global $college;

    echo "\n----- Global Scope -----\n";
    echo "College: $college\n";
}

showCollege();


// ==========================================
// 3. GLOBALS ARRAY
// ==========================================

$language = "PHP";

function showLanguage()
{
    echo "\n----- GLOBALS Array -----\n";
    echo "Language: " . $GLOBALS['language'] . "\n";
}

showLanguage();


// ==========================================
// 4. STATIC SCOPE
// ==========================================

function counter()
{
    static $count = 0;

    $count++;

    echo "Count: $count\n";
}

echo "\n----- Static Scope -----\n";

counter();
counter();
counter();
counter();
counter();


// ==========================================
// END OF PROGRAM
// ==========================================


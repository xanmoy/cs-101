<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    echo "Arrays in Php <br>";
    // There are three types of arrays in Php - Indexed, Associative and Multidimensional
    echo "There are three types of arrays in Php - Indexed, Associative and Multidimensional";
    echo "<br>";
    // Indexed Array
    echo "Indexed Array:";
    $a = array("Xanmoy", "21", "Php");
    echo "Array: ";
    print_r($a);
    echo "<br>";
    echo "First element of the array: $a[0]";
    echo "<br>";

    // Associative Array : It is an array with key value pairs
    echo "Associative Array: It is an array with key value pairs just like a dictionary in python";
    echo "<br>";
    $b = array("Name" => "Xanmoy", "Age" => "21", "Language" => "Php", -6 => 11,  null => "IDK");
    print_r($b);
    echo "<br>";
    echo "Name: " . $b["Name"];
    echo "<br>";
    echo $a[null];
    echo "<br>";
    ?>
</body>
</html>
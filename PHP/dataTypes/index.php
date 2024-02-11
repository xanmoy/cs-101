<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Types in PHP</title>
</head>
<body>
    <?php

     echo "Data Types in PHP <br>";
     echo "<br>";
    $a = 5;
    echo "Integer: $a <br>";
    $b = 5.5;
    echo "Float: $b <br>";
    $c = "Hello World!";
    echo "String: $c <br>";
    $e = true;
    echo "Boolean: $e <br>";
    $f = null;
    echo "Null: $f <br>";
    $d = array("Xanmoy", "21", "Php");
    echo "Array: $d[0] $d[1] $d[2] <br>";

   echo "<br>";
echo"<br>";
echo "NUll data type <br>";
echo "<br>";
$a1 = null;
if(is_null($a1)){
    echo "Yes, it is null";
}
else{
    echo "No, it is not null";
}

//check the data type of a variable

echo "Check the data type of a variable <br>";
echo "<br>";
$a2 = 5;
echo gettype($a2);
echo "<br>";


$a2 = "HII";
is_resource($a2);
is_null($a2);
is_array($a2);
is_bool($a2);
is_float($a2);
is_int($a2);
is_string($a2);
is_object($a2);
is_numeric($a2);
is_scalar($a2);
is_callable($a2);
is_iterable($a2);
echo "<br>";
    ?>
</body>
</html>
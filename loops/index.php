<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Loops in PHP</title>
</head>
<body>
    <?php
    echo "Loops in PHP <br>";
    echo "<br>";
    echo "While Loop in Php <br>";
    $number = 1;
    while($number <= 10){
        echo "The number is $number <br>";
        $number++;
    }
    echo "<br>";
    echo "Do While Loop in Php <br>";
    $number = 1;
    do{
        echo "The number is $number <br>";
        $number++;
    }while($number <= 10);
    echo "<br>";
    echo "For Loop in Php <br>";
    for($i = 0; $i <= 10; $i++){
        echo "The number is $i <br>";
    }
    echo "<br>";
    echo "Foreach Loop in Php <br>";
    $numbers = array(1, 2, 3, 4, 5);
    foreach($numbers as $xoxo){
        echo "The number is $xoxo <br>";
    }
    ?>
</body>
</html>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Basics of Php</title>
</head>
<body>
    <?php
    // this is a comment
    # this is also a comment
    /*
    this is a multi line comment
    */

        echo "Hello World!"; // we can use echo to print anything in php

        // Variables
        echo "<br>";
        echo "Variables in Php";
        $name = "Xanmoy";
        $age = 21;
        echo "My name is $name and I am $age years old.";
        echo "<br>";
        $language = "Php";
        $Language = "PHP is a weird case sensitive language so $language and $Language are different";
        echo $language;
        echo "<br>";
        echo $Language;
       

    ?>
</body>
</html>
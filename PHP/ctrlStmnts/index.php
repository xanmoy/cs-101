<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Control Statements</title>
</head>
<body>
    <?php
    $gemini = "AI";
    if($gemini == "AI"){
        echo "Gemini is an AI";
    }
    else{
        echo "Gemini is not an AI";
    }
    $gemini2 = "Human";
    if($gemini == "AI"){
        echo "Gemini is an AI";
    }
    else{
        echo "Gemini is not an AI";
    }
    
    echo "<br>";
    echo "<br>";
    echo "Switch Case in Php";
    echo "<br>";
    $number = 1;
    switch($number){
        case 1:
            echo "One";
            break;
        case 2:
            echo "Two";
            break;
        case 3:
            echo "Three";
            break;
        default:
            echo "Number not found";
    }
  ?>
</body>
</html>
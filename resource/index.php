<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Resouce in PHP</title>
</head>
<body>
    <?php
    echo "Resource in PHP <br>";
    echo "<br>";
    $file = fopen("sample.txt", "r");
    if(is_resource($file)){
        echo "Yes, it is a resource";
    }
    else{
        echo "No, it is not a resource";
    }

    ?>
</body>
</html>
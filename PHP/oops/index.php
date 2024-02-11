<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Objects and Classes in PHP</title>
</head>
<body>
    <?php
    echo "Objects and Classes in PHP <br>";
    echo "<br>";
    class Book {
        var $title;
        var $author;
        var $pages;
    }
    $book1 = new Book;
    $book1->title = "Harry Potter";
    echo $book1->title;
    echo "<br>";
    $book1->author = "JK Rowling";
    echo $book1->author;
    echo "<br>";
    $book1->pages = 400;
    echo $book1->pages;
    echo "<br>";

    $book2 = new Book;
    $book2->title = "Lord of the Rings";
    echo $book2->title;
    echo "<br>";
    $book2->author = "Tolkein";
    echo $book2->author;
    echo "<br>";
    $book2->pages = 700;
    echo $book2->pages;
    echo "<br>";
    ?>
</body>
</html>
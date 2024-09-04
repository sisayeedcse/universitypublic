<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        $connection = new mysqli("localhost","root","","lab11");
        if($connection->connect_error){
            // connection error
            die("Connection Error: ".$connection->connect_error);
        }
        else{
            echo "connected <br>";
        }

        // $query ="INSERT INTO users(name,age) values('Sayeed',21),('Rafi',20),('Sourav',30);";
        // $connection->query($query);
        $query="select * from users";
        $result= $connection->query($query);
        while($row = $result->fetch_assoc()){
            echo "Name: " .$row["name"]. "and Age: " .$row["age"]."<br>";
        }


        
    ?>
</body>
</html>
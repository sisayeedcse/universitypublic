<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
</head>
<body>
<?php 

if($_SERVER["REQUEST_METHOD"]=="POST"){
    $name = $_POST['name'];
    $age = $_POST['age'];
    
    if(!empty($name)&& !empty($age) && is_numeric($age)){
        $connection = new mysqli("localhost","root","","lab11");
        
        $query ="INSERT INTO users(name,age) 
        values('$name','$age');";
        $connection->query($query);
    }
}

?>

    <form method="POST" action="">
        <br><br>
        Name:<input type="text" name="name"><br><br>
        Age:<input type="number" name="age"><br><br>
        <input type="submit"value="Submit">
    </form>
    
</body>
</html>
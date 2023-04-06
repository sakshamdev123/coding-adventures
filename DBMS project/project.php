<?php
// Get form input values
$firstname = $_POST['firstname'];
$lastname = $_POST['lastname'];
$gender = $_POST['gender'];
$phone = $_POST['phone'];
$email = $_POST['email'];
$password = $_POST['password'];

// Connect to MySQL database
$host = 'localhost'; // Replace with your own host name
$username = 'root'; // Replace with your own username
// $password = ''; // Replace with your own password
$database = 'dbms_project'; // Replace with your own database name
$conn = mysqli_connect($host, $username, '', $database);

// Check if connection was successful
if (!$conn) {
	die("Connection failed: " . mysqli_connect_error());
}

// Insert data into database
$sql = "INSERT INTO reg_form (firstname, lastname, gender, phone, email, password) VALUES ('$firstname', '$lastname', '$gender', '$phone', '$email', '$password')";

if (mysqli_query($conn, $sql)) {
	echo "Registration successful!";
} else {
	echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

// Close database connection
mysqli_close($conn);
?>

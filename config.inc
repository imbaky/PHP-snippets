<?php

$hostname = 'localhost';        // Your MySQL hostname. usually 'localhost', 
$dbname   = 'Database_name'; // Your database name.
$username = 'UserName';             // Your database username.
$password = 'password';                 // Your database password. If your database has no password, leave it empty.

// Let's connect to host
mysql_connect($hostname, $username, $password) or DIE('Connection to host is failed, perhaps the service is down!');
// Select the database
mysql_select_db($dbname) or DIE('Database name is not available!');

?>

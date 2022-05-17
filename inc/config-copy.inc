<!--
<?php
session_start();
date_default_timezone_set('Africa/Cairo');

  $DBhost = "localhost";
  $DBuser = "root";
  $DBpass = "";
  $DBname = "new_database";
  
  $con = new MySQLi($DBhost,$DBuser,$DBpass,$DBname);
    
     if ($con->connect_errno) {
         die("ERROR : -> ".$con->connect_error);
     }

$con->query("SET NAMES 'utf8'"); 
$con->query('SET CHARACTER SET utf8');

?>
-->
<?php
session_start();


$_SESSION = array();


if (ini_get("session.use_cookies")) {
    $params = session_get_cookie_params();
    setcookie(session_name(), '', time() - 42000,
        $params["path"], $params["domain"],
        $params["secure"], $params["httponly"]
    );
}

session_destroy();

date_default_timezone_set('Africa/Cairo');

  $DBhost = "localhost";
  $DBuser = "root";
  $DBpass = "";
  $DBname = "new_database";
  
  $con = new MySQLi($DBhost,$DBuser,$DBpass,$DBname);
    
     if ($con->connect_error) {
         die("ERROR : -> ".$con->connect_error);
     }

$con->query("SET NAMES 'utf8'"); 
$con->query('SET CHARACTER SET utf8');

?>
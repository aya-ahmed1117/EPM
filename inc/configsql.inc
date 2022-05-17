<!--
<?php
session_start();
date_default_timezone_set('Africa/Cairo');

  $DBhost = "172.29.29.76";
  $DBuser = "test";
  $DBpass = "12345678";
  $DBname = "Aya_Web_APP";
  
    $con = sqlsrv_connect($DBhost,$DBuser,$DBpass,$DBname);

     if ($con->connect_errno) {
         die("ERROR : -> ".$con->connect_error);
     }

$con->query("SET NAMES 'utf8'"); 
$con->query('SET CHARACTER SET utf8');

?>
-->
 <!-- $con = new MySQLi($DBhost,$DBuser,$DBpass,$DBname);-->
<?php 

$connection_string = 'DRIVER={SQL Server};SERVER=<"172.29.29.76">;DATABASE=<"Aya_Web_APP">'; 

$user = 'test'; 
$pass = 'TEData@b'; 

$con = sqlsrv_connect( $connection_string, $user, $pass ); 

?> 

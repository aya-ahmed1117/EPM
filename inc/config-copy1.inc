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
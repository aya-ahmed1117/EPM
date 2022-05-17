<?php
session_start();
date_default_timezone_set('Africa/Cairo');

  $DBhost = ".";
  $DBuser = "root";
  $DBpass = "";
  $DBname = "new_database";
  
  $connectionInfo = array( "Database"=>"Aya_Web_APP" , "UID"=>"test" , "PWD"=>"12345678");
  $con = sqlsrv_connect($DBhost, $connectionInfo);
    
     if( $con ) {
     echo "Connection established.<br />";
   }else{
     echo "Connection could not be established.<br />";
     die( print_r( sqlsrv_errors(), true));
   }

/*$con->sqlsrv_query("SET NAMES 'utf8'"); 
$con->sqlsrv_query('SET CHARACTER SET utf8');


$serverName = "serverName\sqlexpress"; //serverName\instanceName

   // Since UID and PWD are not specified in the $connectionInfo array,
   // The connection will be attempted using Windows Authentication.
   $connectionInfo = array( "Database"=>"dbName");
   $conn = sqlsrv_connect( $serverName, $connectionInfo);

   if( $conn ) {
     echo "Connection established.<br />";
   }else{
     echo "Connection could not be established.<br />";
     die( print_r( sqlsrv_errors(), true));
   }
*/;
?>
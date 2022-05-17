<?php
$serverName = "172.29.29.76"; //serverName\instanceName
$connectionInfo = array( "Database"=>"Aya_Web_APP", "UID"=>"test", "PWD"=>"12345678");
$conn = sqlsrv_connect( $serverName, $connectionInfo);

if( $conn ) {
     echo "Connection established.<br />";
}else{
     echo "Connection could not be established.<br />";
     die( print_r( sqlsrv_errors(), true));
}
?>
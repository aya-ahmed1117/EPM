<!-- ?php
/*
$serverName = "172.29.29.76";
$connectionInfo = array( "Database"=>"Aya_Web_APP", "UID"=>"test", "PWD"=>"12345678");
$con = sqlsrv_connect( $serverName, $connectionInfo);


     if ($con) {
      echo "Conneted.<br />";}
      else{
      echo "Connection fail. <br />";
         die( print_r : -> ".$con->connect_error);
      }
     

$con->query("SET NAMES 'utf8'"); 
$con->query('SET CHARACTER SET utf8');
*/
?>
<?php   
    //Connect to the local server using Windows Authentication and specify  
    //the AdventureWorks database as the database in use. To connect using  
    //SQL Server Authentication, set values for the "UID" and "PWD"  
    //attributes in the $connectionInfo parameter. For example:  
$connectionInfo = array("UID" => $uid, "PWD" => $pwd, "Database"=>"AdventureWorks");?>
-->
<?php 
$servername = "(172.29.29.76)";  
$connectioninfo = array( "Database"=>"Aya_Web_APP", "UID"=>"test", "PWD"=>"12345678");  
$con = sqlsrv_connect($servername, $connectioninfo);  
  
if( $con )  
{  
     echo "Connection established.<\ n>";  
}  
else  
{  
     echo "Connection could not be established.<\ n>";  
     die( print_r( sqlsrv_errors(), true));  
}  
  echo "aya";
//-----------------------------------------------  
// Perform operations with connection.  
//-----------------------------------------------  
  
// Close the connection. 
?>
<?php
/*
$servername = "172.29.29.76";


$uid = "test";
$pwd = "12345678";
$mydb = "Aya_Web_APP";
//$pwd = file_get_contents("C:\AppData\pwd.txt");
$connectioninfo = array( "UID"=>$uid,
                         "PWD"=>$pwd,
                         "Database"=>"Aya_Web_APP");

$con = sqlserv_connect($servername, $connectioninfo); 
  
if ($con->connect_errno) {
         die("ERROR : -> ".$con->connect_error);
     }  
else  
{  
     echo "Connection could not be established.<\ n>";  
     die( print_r( sqlsrv_errors(), true));  
} 
?>

<?php

$ser="172.29.29.76"; #the name of the SQL Server
$db="Aya_Web_APP"; #the name of the database
$user="test"; #a valid username
$pass="12345678"; #a password for the username

# one line
$con = odbc_connect("Driver={SQL Server};172.29.29.76=".$ser.";Aya_Web_APP=".$db,$user,$pass);
# one line

?>


<?php


//the second way is if the SQL Server is runing in other machine but in the same network

$ser="172.29.29.76"; #the name of the SQL Server
$db="Aya_Web_APP"; #the name of the database
$user="test"; #a valid username
$pass="12345678"; #a password for the username

#one line
$con = odbc_connect("DRIVER=SQL Server;SERVER=".$ser.";UID=".$user.";PWD=".$pass.";
DATABASE=".$db.";
Address=".$ser."1433","","");
*/

?>
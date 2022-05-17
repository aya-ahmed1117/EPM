<!DOCTYPE html>
<html>
    <head>
      <?php
      require_once("config.inc");
      if($_SESSION['username'] == ''){ header("location: login.php"); }
      if(isset($_GET['logout'])){ session_destroy(); header("location: login.php"); }
      ?>

        <meta charset='utf-8'>
        <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

        <title>name</title>

        <script src="js/jquery-3.3.1.min.js"></script>
        <script src="js/jquery-ui/jquery-ui.min.js"></script>
        <script src="js/bootstrap.min.js"></script>

        <!--[if It IE 9]>
        <script src="assets/js/html5shiv.min.js"></script>
        <script src="assets/js/respond.min.js"></script>
        <![endif]-->

        <script type="text/javascript" src="js/style.js"></script>


        <link rel="stylesheet" href="css/bootstrap.css" />
        <link rel="stylesheet" type="text/css" href="css/style.css" />

        <link rel="icon" href="assets/img/os.png">
          
    </head>

    <body>

      <div class="container-fluid">
        <div class="row">
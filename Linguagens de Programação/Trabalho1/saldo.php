<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<?php
include_once 'restrito.php';
include_once 'config.php';

ob_start();
session_start();

echo $saldo;
echo ' Reais - Este é seu saldo. <a href="index.php">Entrar novamente</a>';



?>

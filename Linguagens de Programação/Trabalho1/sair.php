<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<?php
ob_start();
session_start();

unset($_SESSION['usuarioSession']);
unset($_SESSION['senhaSession']);

echo 'Você saiu do sistema. <a href="index.php">Entrar novamente</a>';


?>

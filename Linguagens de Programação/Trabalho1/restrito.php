<?php
ob_start();
session_start();

if(!isset($_SESSION['usuarioSession']) AND !isset($_SESSION['senhaSession'])):
  echo 'Para ter acesso a esta pagina é necessario logar-se. <a href="index.php">Entrar no sistema</a>.';
  die;
endif;

?>

<<?php

ob_start();
session_start();

 ?>

<meta ttp-equiv="Content-Type" content="text/html;charset="utf-8">
<?php

if($_POST['entrar']):
  $usuarioLogin = $_POST['usuario'];
  $senhaLogin = $_POST['senha'];

  if(empty(usuarioLogin)):
    echo 'Digite seu nome de usuário. <a href="index.php>"Tentar novamente</a>';
  elseif(empty(senhaLogin)):
    echo 'Diigite sua senha. <a href="index.php>"Tentar novamente</a>';
  else:
    include_once 'config.php';
    if($usuarioLogin == $usuario AND $senhaLogin == $senha):
      $_SESSION['usuarioSession'] = $usuarioLogin;
      $_SESSION['senhaSession'] = $senhaLogin;

      header("Location: painel.php");
    else:
      echo 'Os dados estão incorretos.  <a href="index.php">Tentar novamente</a>';
    endif;
  endif;
endif;

?>
 

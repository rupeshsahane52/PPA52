<html>
    <head>
    <title>Swap Numbers</title>
</head>
<body>
<?php
    echo "\nBefore Swapping:";
         $a= 11;
         $b = 10;
         echo "\n a =" .$a. "\nb = ".$b;

         $a = $a + $b;
         $b = $a - $b;
         $a = $a - $b;

         echo "\nAfter swapping No : "."\na = ".$a. "b =".$b;
    
?>
</body>
</html>

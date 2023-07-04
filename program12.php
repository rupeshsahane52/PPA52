<?php
    $arr1 = array(11,21,51,101);
    $size = count($arr1);

    echo "Size of Array :",$size;
    
    for($i=0;$i< $size;$i++)
    {
        echo "\nThe Array is :".$arr1[$i];
    }

   echo "\n Array using approch ";

    foreach($arr1 as $var)
    {
       echo $var,"<br>";
    }
    echo "Array using print_r:";
    print_r($arr1);
?>
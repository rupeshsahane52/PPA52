<?php
$a = array(11,21,22,51,101);
foreach($a as $value)
{
    if($value % 2 == 0)
    {
        echo $value."\n ";
        continue;
    }
}
?>
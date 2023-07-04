<?php

function keep_track()
{
    static $count = 1;

    $count++;
   echo "\nThe value is : ". $count;
    

} 
keep_track();
keep_track();
keep_track();

?>
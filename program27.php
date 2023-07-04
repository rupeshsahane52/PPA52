<?php
$var = date("D");
$var = (string)readline("Enter the day:\n");
switch($var)
 {
    
    case "Sunday":
        echo "It is Sunday";
        break;
    case "Monday":
            echo "It is Monday";
            break;
    case "Tuesday":
         echo "It is Tuesnday";
         break;
     case "Wenday":
         echo "It is Wnsnday";
         break;
     case "Thrusday":
          echo "It is Thursnday";
          break;
    case "Friday":
        echo "It is Friday";
        break;
    case "Saturday":
        echo "It is saturday";
        break;

    case "Default":
            echo "Default case\n";
 }
 
 
?>
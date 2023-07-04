<?php
//Deefault parameter

function Drink($Tea = "MilkTea")
{
    return "making a cup of $Tea.\n";
}
//echo $Tea(null);
echo $Tea();
echo $Tea("GreenTea");





?>
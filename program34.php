<html>
    <head>
    <title>break statement</title>
</head>
<body>


<?php

$i = 1;
while($i<=10)
{
    $j = 1;
    while($j <= 10)
    {
        if($j == 10)
        {
            break 2; //breaks out of two while loops
        }
        $j++;
    }
    $i++;
} 

echo $i;
echo "<br>";
echo "<br\>";

echo $j;
?>
</body>
</html>
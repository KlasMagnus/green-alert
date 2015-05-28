//TODO A nice looking interface
<?php
        $humidity = "";
        $temperature = "";
        echo "You have reached Enekullegatan"."<br>";
        echo "Today's date and time is: ". date('Y-m-d H:i:s')."<br>";
        $myfile = fopen("workfile", "r") or die("Unable to open file!");
        $tempstring = fread($myfile,filesize("workfile"));
        fclose($myfile);
        if (strlen($tempstring > 3)){
                $temparray = str_split($tempstring, 2);
                global $humidity, $temperature;
                $humidity = $temparray[0];
                $temperature = $temparray[1];
        }
        echo "Humidity is ". $humidity . " %"."<br>";
        echo "Temperature is ". $temperature . " degrees Celsius";
 ?>

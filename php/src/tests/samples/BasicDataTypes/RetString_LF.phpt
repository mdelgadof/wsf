--TEST--
RetString_LF("LF:Hello_LF_World")
--FILE--
<?php

try {

   $wsdl = file_get_contents('config/SimpleDataTypesWsdlDoclitB.txt');
    $client = new WSClient(array("wsdl" => $wsdl));
    
    $proxy = $client->getProxy();
    $stringLF = "Hello 
			World";
    $val =  $proxy->RetString($stringLF);
    
    echo $val."\n";
    

} catch (Exception $e) {

        if ($e instanceof WSFault) {
                printf("Soap Fault: %s\n", $e->Code);
                printf("Soap Reason: %s\n", $e->Reason);
        } else {
                printf("Message = %s\n",$e->getMessage());
        }
}
?>
--EXPECT--
 Hello 
			World

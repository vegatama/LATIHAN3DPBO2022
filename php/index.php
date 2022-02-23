<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";
include "Pc.php";

// instansiasi objek
$prcs = new Processor("Intel i7 12600H", "$399");
$dsk = new Disk("SSD", "512Gb", "$250");
$rm = new Ram("16Gb", "$150");
$rakitpc = new Pc($prcs, $dsk, $rm);

// output
$rakitpc->printPc();

?>
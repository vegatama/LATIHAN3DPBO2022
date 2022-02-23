<?php

class Pc{
	// atribut private
    private $prcs;
    private $dsk;
    private $rm;

	// constructor
	public function __construct($prcs, $dsk, $rm){
        $this->prcs = $prcs;
        $this->dsk = $dsk;
        $this->rm = $rm;
	}

	// setter/getter
    public function setprcs($prcs){
		$this->prcs = $prcs;
	}
    public function getprcs(){
		return $this->prcs;
	}

    public function setdsk($dsk){
		$this->dsk = $dsk;
	}
    public function getdsk(){
		return $this->dsk;
	}

    public function setrm($rm){
		$this->rm = $rm;
	}
    public function getrm(){
		return $this->rm;
	}

	/*Method*/
	public function printPc(){
		$this->prcs->printProcessor();
		$this->dsk->printDisk();
		$this->rm->printRam();
	}
}

?>
<?php

class Processor{
	// atribut private
    private $name;
    private $price;

	// constructor
	public function __construct($name, $price){
        $this->name = $name;
        $this->price = $price;
	}

	// setter/getter
    public function setname($name){
		$this->name = $name;
	}
    public function getname(){
		return $this->name;
	}

    public function setprice($price){
		$this->price = $price;
	}
    public function getprice(){
		return $this->price;
	}

	/*Method*/
	public function printProcessor(){
		echo "Processor name : ".$this->name."<br>";
		echo "Processor price : ".$this->price."<br>";
	}
}

?>
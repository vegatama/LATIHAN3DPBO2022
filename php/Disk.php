<?php

class Disk{
	// atribut private
    private $type;
    private $capacity;
    private $price;

	// constructor
	public function __construct($type, $capacity, $price){
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
	}

	// setter/getter
    public function settype($type){
		$this->type = $type;
	}
    public function gettype(){
		return $this->type;
	}

    public function setcapacity($capacity){
		$this->capacity = $capacity;
	}
    public function getcapacity(){
		return $this->capacity;
	}

    public function setprice($price){
		$this->price = $price;
	}
    public function getprice(){
		return $this->price;
	}

	/*Method*/
	public function printDisk(){
		echo "Disk type : ".$this->type."<br>";
		echo "Disk capacity : ".$this->capacity."<br>";
		echo "Disk price : ".$this->price."<br>";
	}
}

?>
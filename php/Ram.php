<?php

class Ram{
	// atribut private
    private $capacity;
    private $price;

	// constructor
	public function __construct($capacity, $price){
        $this->capacity = $capacity;
        $this->price = $price;
	}

	// setter/getter
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
	public function printRam(){
		echo "Ram capacity : ".$this->capacity."<br>";
		echo "Ram price : ".$this->price."<br>";
	}
}

?>
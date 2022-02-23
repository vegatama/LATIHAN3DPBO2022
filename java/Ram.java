class Ram{
	// atribut private
    private String capacity;
	private String price;

	// constructor
	public Ram(){}
	public Ram(String capacity, String price){
		this.capacity = capacity;
		this.price = price;
	}

	// setter/getter
	public void setcapacity(String capacity) {
		this.capacity = capacity;
	}
	public String getcapacity() {
		return capacity;
	}
	public void setprice(String price) {
		this.price = price;
	}
	public String getprice() {
		return price;
	}

	/*Method*/
	void printRam(){
		System.out.println("Ram capacity : " + this.capacity);
		System.out.println("Ram price : " + this.price);
	}
}
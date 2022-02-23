class Disk{
	// atribut private
    private String type;
	private String capacity;
	private String price;

	// constructor
	public Disk(){}
	public Disk(String type, String capacity, String price){
		this.type = type;
		this.capacity = capacity;
		this.price = price;
	}

	// setter/getter
	public void settype(String type) {
		this.type = type;
	}
	public String gettype() {
		return type;
	}
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
	public void printDisk(){
		System.out.println("Disk type : " + this.type);
		System.out.println("Disk capacity : " + this.capacity);
		System.out.println("Disk price : " + this.price);
	}
}
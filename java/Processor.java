class Processor{
	// atribut private
    private String name;
	private String price;

	// constructor
	public Processor(){}
	public Processor(String name, String price){
		this.name = name;
		this.price = price;
	}

	// setter/getter
	public void setname(String name) {
		this.name = name;
	}
	public String getname() {
		return name;
	}
	public void setprice(String price) {
		this.price = price;
	}
	public String getprice() {
		return price;
	}

	/*Method*/
	public void printProcessor(){
		System.out.println("Processor name : " + this.name);
		System.out.println("Processor price : " + this.price);
	}
}
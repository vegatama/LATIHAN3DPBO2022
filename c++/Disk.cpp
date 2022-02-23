class Disk{
	private:
		/*atribut private*/
		string type;
		string capacity;
		string price;

	public:
		/*constructor*/
		Disk(){}
		Disk(string type, string capacity, string price){
			this->type = type;
			this->capacity = capacity;
			this->price = price;
		}

		/*getter/setter*/
		void settype(string type){
			this->type = type;
		}
		string gettype(){
			return this->type;
		}
		void setcapacity(string capacity){
			this->capacity = capacity;
		}
		string getcapacity(){
			return this->capacity;
		}
		void setprice(string price){
			this->price = price;
		}
		string getprice(){
			return this->price;
		}

		/*Method*/
		void printDisk(){
			cout << "Disk type : " << this->type << endl;
			cout << "Disk capacity : " << this->capacity << endl;
			cout << "Disk price : " << this->price << endl;
		}
		/*destructor*/
		~Disk(){}
};
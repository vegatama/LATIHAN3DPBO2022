class Ram{
	private:
		/*atribut private*/
		string capacity;
		string price;

	public:
		/*constructor*/
		Ram(){}
		Ram(string capacity, string price){
			this->capacity = capacity;
			this->price = price;
		}

		/*getter/setter*/
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
		void printRam(){
			cout << "Ram capacity : " << this->capacity << endl;
			cout << "Ram price : " << this->price << endl;
		}
		/*destructor*/
		~Ram(){}
};
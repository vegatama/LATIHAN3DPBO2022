class Processor{
	private:
		/*atribut private*/
		string name;
		string price;

	public:
		/*constructor*/
		Processor(){}
		Processor(string name, string price){
			this->name = name;
			this->price = price;
		}

		/*getter/setter*/
		void setname(string name){
			this->name = name;
		}
		string getname(){
			return this->name;
		}
		void setprice(string price){
			this->price = price;
		}
		string getprice(){
			return this->price;
		}

		/*Method*/
		void printProcessor(){
			cout << "Processor name : " << this->name << endl;
			cout << "Processor price : " << this->price << endl;
		}
		/*destructor*/
		~Processor(){}
};
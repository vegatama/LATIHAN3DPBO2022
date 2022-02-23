class Pc{
	private:
		/*atribut private*/
		Processor prcs;
		Disk dsk;
		Ram rm;

	public:
		/*constructor*/
		Pc(){}
		Pc(Processor prcs, Disk dsk, Ram rm){
			this->prcs = prcs;
			this->dsk = dsk;
			this->rm = rm;
		}

		/*getter/setter*/
		void setprcs(Processor prcs){
			this->prcs = prcs;
		}
		Processor getprcs(){
			return this->prcs;
		}
		void setdsk(Disk dsk){
			this->dsk = dsk;
		}
		Disk getdsk(){
			return this->dsk;
		}
		void setrm(Ram rm){
			this->rm = rm;
		}
		Ram getrm(){
			return this->rm;
		}

		/*Method*/
		void printPc(){
			this->prcs.printProcessor();
			this->dsk.printDisk();
			this->rm.printRam();
		}
		/*destructor*/
		~Pc(){}
};
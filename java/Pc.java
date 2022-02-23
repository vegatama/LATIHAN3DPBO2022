class Pc{
	// atribut private
    private Processor prcs;
	private Disk dsk;
	private Ram rm;

	// constructor
	public Pc(){}
	public Pc(Processor prcs, Disk dsk, Ram rm){
		this.prcs = prcs;
		this.dsk = dsk;
		this.rm = rm;
	}

	// setter/getter
	public void setprcs(Processor prcs) {
		this.prcs = prcs;
	}
	public Processor getprcs() {
		return prcs;
	}
	public void setdsk(Disk dsk) {
		this.dsk = dsk;
	}
	public Disk getdsk() {
		return dsk;
	}
	public void setrm(Ram rm) {
		this.rm = rm;
	}
	public Ram getrm() {
		return rm;
	}

	/*Method*/
	public void printPc(){
		this.prcs.printProcessor();
		this.dsk.printDisk();
		this.rm.printRam();
	}
}
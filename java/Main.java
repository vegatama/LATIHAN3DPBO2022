public class Main{
    public static void main(String[] args){
        
        // instansiasi objek
        Processor prcs = new Processor("Intel i7 12600H", "$399");
        Disk dsk = new Disk("SSD", "512Gb", "$250");
        Ram rm = new Ram("16Gb", "$150");
        Pc rakitpc = new Pc(prcs, dsk, rm);

        /*output*/
        rakitpc.printPc();
    }
}

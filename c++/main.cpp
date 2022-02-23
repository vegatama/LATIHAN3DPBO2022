#include <iostream>
#include <string>

using namespace std;

#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
#include "Pc.cpp"

int main(){
	/*instansiasi objek*/
	Processor prcs("Intel i7 12600H", "$399");
    Disk dsk("SSD", "512Gb", "$250");
    Ram rm("16Gb", "$150");
	Pc rakitpc(prcs, dsk, rm);

	/*output*/
    rakitpc.printPc();
	
	return 0;
}
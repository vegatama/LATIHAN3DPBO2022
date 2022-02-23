from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc

# instansiasi objek
prcs = Processor("Intel i7 12600H", "$399")
dsk = Disk("SSD", "512Gb", "$250")
rm = Ram("16Gb", "$150")
rakitpc = Pc(prcs, dsk, rm)


# output
rakitpc.printPc()
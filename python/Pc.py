from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc:
	# atribut private
	__prcs = Processor("", "")
	__dsk = Disk("", "", "")
	__rm = Ram("", "")

	# constructor
	def __init__(self, prcs, dsk, rm):
		self.__prcs = prcs
		self.__dsk = dsk
		self.__rm = rm

	# getter/setter
	def setprcs(self, prcs):
		self.__prcs = prcs

	def getprcs(self):
		return self.__prcs

	def setdsk(self, dsk):
		self.__dsk = dsk

	def getdsk(self):
		return self.__dsk
	
	def setrm(self, rm):
		self.__rm = rm

	def getrm(self):
		return self.__rm

	# method
	def printPc(self):
		self.__prcs.printProcessor()
		self.__dsk.printDisk()
		self.__rm.printRam()

class Disk:
	# atribut private
	__type = ""
	__capacity = ""
	__price = ""

	# constructor
	def __init__(self, type, capacity, price):
		self.__type = type
		self.__capacity = capacity
		self.__price = price

	# getter/setter
	def settype(self, type):
		self.__type = type

	def gettype(self):
		return self.__type

	def setcapacity(self, capacity):
		self.__capacity = capacity

	def getcapacity(self):
		return self.__capacity
	
	def setprice(self, price):
		self.__price = price

	def getprice(self):
		return self.__price

	# method
	def printDisk(self):
		print("Disk type : " + str(self.__type))
		print("Disk capacity : " + str(self.__capacity))
		print("Disk price : " + str(self.__price))
	

class Processor:
	# atribut private
	__name = ""
	__price = ""

	# constructor
	def __init__(self, name, price):
		self.__name = name
		self.__price = price

	# getter/setter
	def setname(self, name):
		self.__name = name

	def getname(self):
		return self.__name

	def setprice(self, price):
		self.__price = price

	def getprice(self):
		return self.__price

	# method
	def printProcessor(self):
		print("Processor name : " + str(self.__name))
		print("Processor price : " + str(self.__price))
	
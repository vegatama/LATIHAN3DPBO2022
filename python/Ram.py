class Ram:
	# atribut private
	__capacity = ""
	__price = ""

	# constructor
	def __init__(self, capacity, price):
		self.__capacity = capacity
		self.__price = price

	# getter/setter
	def setcapacity(self, capacity):
		self.__capacity = capacity

	def getcapacity(self):
		return self.__capacity

	def setprice(self, price):
		self.__price = price

	def getprice(self):
		return self.__price

	# method
	def printRam(self):
		print("Ram capacity : " + str(self.__capacity))
		print("Ram price : " + str(self.__price))

from convert import *

number = input("Enter an integer: ")
base = input("Enter the base of the integer: ")

#convert to dec
c = Convert()
answer = c.convertToDec(number,base)

print 'The given integer in base 10 is: ', answer

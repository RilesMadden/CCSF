# Assignment 0: Riley Madden
# This program prints out as many asterisks as the user wants.

answer = int(input("How many asterisks would you like?: "))

asterisks = ''
for i in range(1, answer+1):
    asterisks += '*'

print(asterisks)
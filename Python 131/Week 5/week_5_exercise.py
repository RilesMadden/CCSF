"""
Write a program that prints out a number so great that
it is at least ten lines long in your terminal.
"""
num = 7
for i in range(0,10):
    print(i)
    num += num ** i
print(num)
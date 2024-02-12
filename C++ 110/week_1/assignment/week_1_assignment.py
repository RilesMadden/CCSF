# Assignment 1 - Ages
# Asks a user to input their age, program will determine if they are a child, teen, adult, or retiree.
# Riley Madden, CS110B

age = int(input("What is your age?: "))
while (age < 0):
    age = int(input("Please enter a valid age: "))

if age >= 65:
    print("You are a retiree.")
elif age >= 18:
    print("You are an adult.")
elif age >= 12:
    print("You are a teenager.")
else:
    print("You are a child.")

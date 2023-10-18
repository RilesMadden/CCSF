"Write a program that simulates throwing a 9-sided die and a 9000-sided die, once each, and indicates whether or not the sum of the results is a multiple of three & peer review, both due 10/22."

import random

print("Let's roll the dice!")

# We'll use the random module with the method .randint() to give us a random integer, simulating the die roll.
die_9 = random.randint(1,9)
print(f"The 9-sided die gives us {die_9}.")
die_9000 = random.randint(1,9000)
print(f"The 9000-sided gives us {die_9000}.")

# Calculate sum and determine if divisible by 3
die_sum = die_9000 + die_9 
if die_sum % 3 == 0:
    print(f"The sum is {die_sum}, which is divisible by 3! :D")
else:
    print(f"The sum is {die_sum}, which is not divisible by 3. :(")
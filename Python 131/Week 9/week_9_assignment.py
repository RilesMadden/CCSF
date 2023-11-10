"""Adapt the previous assignment to roll both dies one hundred times, indicating how many times the sum of the results was a multiple of three"""

import random

multiple_of_three_counter = 0

for i in range(0,100):
    if (random.randint(1,9) + random.randint(9,1000)) % 3 == 0:
        multiple_of_three_counter += 1

print(f"After 100 rolls, the sum of the rolls was a multiple of three {multiple_of_three_counter} times.")

# print(len([i for i in range(0,100) if (random.randint(1,9) + random.randint(1,1000)) % 3 == 0])) updated for one line arrangement

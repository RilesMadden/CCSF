import random

# Function to simulate throwing a 9-sided die
def result_9_sided_die():
    return random.randint(1, 9)  # Generate a random integer between 1 and 9

# Function to simulate throwing a 9000-sided die
def result_9000_sided_die():
    return random.randint(1, 9000)  # Generate a random integer between 1 and 9000

num_simulations = 100
count_multiple_of_three = 0


# Simulate throwing the dice
for _ in range(num_simulations):
    sum_9_sided = result_9_sided_die()
    sum_9000_sided = result_9000_sided_die()

    total = sum_9_sided + sum_9000_sided

    if total % 3 == 0:
        count_multiple_of_three += 1

# Print the result
print()
print(f"A multiple of three was thrown {count_multiple_of_three} times out of {num_simulations} throws.")
print(f"The above simulation was based on 100 throws of a 9 sided and a 9000 sided die.")
print()

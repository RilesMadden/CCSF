# Write an adder program that prints the sum of all the integer command line arguments passed
# ignoring any non-integers that may be mixed in 

args_passed = ['1', '2', '5', 'a', '3.14', '10', 'bologna']

sum_of_args = 0

for arg in args_passed:
    try:
        sum_of_args += int(arg)
    except:
        pass

print(f"The sum of all integers passed is: {sum_of_args}")

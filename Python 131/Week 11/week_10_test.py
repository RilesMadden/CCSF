import sys

def sum_of_arguments():
        # initialize total
        total = 0

        # Get the command line arguments, excluding the file name
        command_line_arguments = sys.argv[1:]

        # Iterate through each string and convert to integer
        for argument in command_line_arguments:

                # Attempt to convert arguments to an integer and add it to total
                try:
                        total += int(argument)


                # If a ValueError occurs, do nothing
                except ValueError:
                        pass

        # Print the results
        print(f'The sum of the command line arguments excluding non-integers is {total}.')

# call the function
sum_of_arguments()
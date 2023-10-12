"Write a program that prints all the unique (distinct) command line arguments it receives in alphabetical order, avoiding any duplication"

import sys

list_of_args = sys.argv[1:] # Save incoming arguments as a list but it might have duplicates and multiple data types.

if len(list_of_args) == 0: # Check if no arguments were passed and print special exception if so.
        print("No arguments passed.")
else:
        set_of_args = set([str(arg) for arg in list_of_args]) # Turning the list into a set to get rid of any duplicates and changing each argument to a string to ensure no issues during sorting.

        arg_string = '' # Create a nice, readable output.
        for arg in sorted(set_of_args):
                arg_string += arg + ' '

        print(arg_string)







"Write a program that prints all the unique (distinct) command line arguments it receives in alphabetical order, avoiding any duplication"

import sys

list_of_args = sys.argv[1:] # Save incoming arguments as a list. This could have duplicates and multiple data types, however.

# First we'll check if any arguments were passed. If not, we'll do a one-off message.
if len(list_of_args) == 0:
        print("No arguments passed.")
else:
        set_of_args = set([str(arg) for arg in list_of_args]) # Turning the list into a set to get rid of any duplicates. At the same time, changing each argument to a string to ensure no issues during sorting.

        arg_string = '' # To make the output read nicely, I'm creating an empty string after which I'll iterate through our sorted set to build our output string.
        for arg in sorted(set_of_args):
                arg_string += arg + ' '

        print(arg_string)







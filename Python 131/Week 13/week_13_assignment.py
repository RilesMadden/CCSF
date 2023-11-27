"""
Write a program that indicates the single greatest integer in the text whose pathname is passed as argument.
"""

import sys
import re

# path = sys.argv[1]

# path for testing:
path = 'C:\\Users\\Riley\\Desktop\\VSCode\\CCSF\\CCSF\\Python 131\\Week 13\\test.txt'

try:
    print(f"Let's find the largest integer in file: {path}")

    with open(path, 'r') as text_file:
        # create a set of all integers in the file
        # regex '\b\d+\b' reads as 'begin word (\b), find digits (\d), until (+), end word (non-digit is found) (\b)
        set_of_integers = set(re.findall(r'\b\d+\b', text_file.read()))

        # use max() function to find the largest integer, converting each digit into an int from str
        max_integer = max([int(number) for number in set_of_integers])
        print(f"The largest integer is {max_integer}.")
except ValueError:
    print("Sorry, that file doesn't have any integers, please try another file.")
except FileNotFoundError:
    print(f"Sorry, I couldn't find that file.")
except Exception as error:
    print(f"An error occurred: {error}")


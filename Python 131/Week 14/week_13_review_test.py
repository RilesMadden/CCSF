import re

f = 'Python 131\\Week 14\\test.txt'


# CS 131B - Nick A. - 11/26/2023  HOMEWORK 12
# < Write a program that indicates the single greatest integer in the text whose pathname is passed as argument.

import sys
import re

def single_greatest_integer(file_path):   # Create a function that searches for d greatest integer in a filename that was passed
    try:
        with open(file_path, 'r', encoding='utf-8') as file:         # Open in read mode the text file that was passed as agument
            content_of_file = file.read()                            # Store the content of the text file
            all_integers = re.findall(r'\b\d+\b', content_of_file)   # Get the integers in the text using regular expression module

            if all_integers:
                all_integers = list(map(int, all_integers))          # Convert string-integers found in the file into integers
                highest_integer = max(all_integers)                  # Get the highest integer among all integers found

                print(f"\nThe single greatest integer found in the file '{file_path}' is: {highest_integer}\n")  #Print the results
            else:
                print(f"\nNo integers found in the file '{file_path}'.\n")

    except FileNotFoundError:                               # Check for exceptions - if filename passed is not in the directory
        print(f"\nFile not found.\n")
    except PermissionError:                                 # Check for exceptions - if file is unreadable
        print ("\nFile not readable.\n")
    except Exception as except1:                            # Check for any other Exception and assign it to variable “except1”
        print(f"\nAn error occurred: {except1}\n")

if __name__ == "__main__":
    if len(sys.argv) != 2:                                  # Check if a filename was passed or not in the command-line argument
        print("\nNo filename entered.\n")
    else:
        file_path = sys.argv[1]                             # Get the filename that was passed in the command-line argument
        single_greatest_integer(file_path)                  # Call the function created at the beginning of the script – line 7

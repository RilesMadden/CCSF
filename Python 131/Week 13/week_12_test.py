# Write a program that shows ten distinct random words, all over ten characters long, that occur in the text whose pathname is passed as argument.

# Import sys, string and random modules
import sys
import string
import random

# Open the file included in the command line argument
try:
        fname = open(sys.argv[1])

# Check if the file path was entered as an argument
except IndexError:
        print('No filename passed.')
# Check if the file exists
except FileNotFoundError:
        print('File not found.')
# Check if file permissions allow opening
except PermissionError:
        print('File not readable.')
# Check UnicodeDecodeError
except UnicodeDecodeError:
        print ('File is not in UTF-8.')

# Read file into string
ftext = fname.read()
# Remove punctuation from string
np_ftext = ftext.translate(str.maketrans('', '', string.punctuation))
# Convert string into list
flist = np_ftext.split()
# Eliminate capitalization duplication by converting to lowercase
flist_lower = [word.lower() for word in flist]
# Eliminate numbers using list comprehension
words_list = [string for string in flist_lower if not string.isdigit()]
# Eliminate duplicate words by converting to set
words_set = set(words_list)
# Convert back to list in order to use random.choice (random.choice cannot be used with sets)
words_unique = list(words_set)

# Define function to select random word from file
def get_random_word(filename):
        return random.choice(filename)

# Initialize counter of random words with more than 10 characters
counter = 10
# Define list to hold random words with more than 10 characters
ten_random = []
# Iterate through list of words to get random words and add them to a list if they are more than 10 characters long

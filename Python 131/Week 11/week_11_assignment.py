"""
Assignment: Write a program that estimates the number of distinct words in the text whose pathname is passed as argument
"""
import sys

input_text = sys.argv[1] # capture pathname as argument

punctuation_list = [",", ".", "!", "?", ";", ":", "(", ")", "[", "]", "{", "}", "<", ">", "/", "|", "@", "#" , "$", "%", "^", "&", "*", "_", "-", "+", "=", "~",]

# function to remove any punctuation marks from any word

def remove_punctuation(word):
    return ''.join([letter for letter in word if letter not in punctuation_list]) # recreate word without punctuation marks

# open input file and perform word count

try:
        with open(file=input_text, mode="r") as text_source:

                text_file = text_source.read() # create a text file variable from text

                unique_words_with_punctuation = set(text_file.lower().split()) # set of all words in text and lowercases them

                # there may be duplicates in this set though due to punctuation such as "word" vs "word."
                # let's create an additional set to run through this set and remove punctuation marks so these are both counted as 1 word.

                unique_words_without_punctuation = {remove_punctuation(word) for word in unique_words_with_punctuation}

                print(f"There are an estimated {len(unique_words_without_punctuation)} unique words in the text.")
except:
        print("File not found, please try again.")




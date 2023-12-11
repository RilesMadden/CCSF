"""
Write a program that defines and demonstrates a class of Book objects having at least three functions useful for handling the text content of books.
"""

import sys, re, string

class Book:
    def __init__(self, file_path):
        self.file_path = file_path

    # Function to approximate word count in file
    def word_count(self):
        try:
            with open(self.file_path, 'r') as text_file:
                # Create a set of all words by spliting the file by space '', making each word lower case, as well as remove punctuation.
                unique_words_without_punctuation = set(word.strip(string.punctuation) for word in text_file.read().lower().split())
                text_file.close()
                return f'This file has approximately {len(unique_words_without_punctuation)} words.'
        except Exception as error:
            print(f"An error occurred: {error}")

    def largest_integer(self):
        try:
            with open(self.file_path, 'r') as text_file:
                # create a set of all integers in the file and convert them to type int
                # regex '\b\d+\b' reads as begin word (\b), find digits (\d), until (+), end word (non-digit is found) (\b)
                max_integer = max([int(number) for number in set(re.findall(r'\b\d+\b', text_file.read()))])
                text_file.close()
                return f'The largest integer in this file is {max_integer}.'
        except ValueError:
            return "Sorry, that file doesn't have any integers."
        except Exception as error:
            print(f"An error occurred: {error}")
    
    def longest_words(self):
        try:
            with open(self.file_path, 'r') as text_file:
                # Create a set of all words by spliting the file by space '', making each word lower case, as well as remove punctuation.
                unique_words_without_punctuation = set(word.strip(string.punctuation) for word in text_file.read().lower().split())

                # We'll then iterate through the set to find both the longest word(s) and how long they are.
                longest_words = []
                longest_words_length = 0

                for word in unique_words_without_punctuation:
                    if len(word) > longest_words_length: # if the word is the new longest word
                        longest_words_length = len(word) # set new length
                        longest_words.clear() # clear existing list
                        longest_words.append(word) # start new list
                    elif len(word) == longest_words_length:
                        if word not in longest_words:
                            longest_words.append(word)
                    else:
                        pass

                # Now we'll make a human readable output string depending on how many longest words there were
                output_string = ''
                
                if len(longest_words) == 1:
                    output_string = f'{longest_words[0]}' # "long_word"
                elif len(longest_words) == 2:
                    output_string = f'{longest_words[0]} and {longest_words[1]}' # "long_word1 and long_word2"         
                else:
                    for i in range(0, len(longest_words)-1): 
                        output_string += longest_words[i] + ', ' # add comma between each word except for last word
                    output_string += 'and '+ longest_words[-1] # "long_word1, long_word2, and long_word3"
                text_file.close()
                return f'The longest word was {longest_words_length} letters long: {output_string}.'
        except Exception as error:
            print(f"An error occurred: {error}")


file_path = sys.argv[1]
text = Book(file_path=file_path)
print(f"Let's find some information about the words and numbers in this file: {file_path}")
try:
    print(text.largest_integer())
    print(text.word_count())
    print(text.longest_words())
except Exception as error:
    print(f"An error occurred: {error}")
    sys.exit()

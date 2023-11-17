"Write a program that shows ten distinct random words, all over ten characters long, that occur in the text whose pathname is passed as argument."
import random

path = 'Python 131/Week 12/test_txt_0.txt'

# function will take a word, make it lower case, and remove any punctuation marks
def remove_punctuation(word):
    cleaned_word = word.lower().strip(".,!?():;").replace("'","")
    return cleaned_word

# function to build a human-readible word list
# it will add a comma between each word, except for the last one, where it adds an 'and' in between.
def build_word_list(list):
    output_string = ''
    for i in range(0, len(list)-1): 
        output_string += list[i] + ', ' # add comma between each word except for last word
    output_string += 'and '+ list[-1] +'.'
    return output_string

try:
    with open(path, "r") as text_source:

        text_file = text_source.read()

        long_words = []

        for word in text_file.split():
            cleaned_word = remove_punctuation(word)
            if len(cleaned_word) > 10 and cleaned_word not in long_words:
                long_words.append(cleaned_word)

        if len(long_words) >= 10:
            print(f"Ten distinct, random words from the provided text are: {build_word_list(random.choices(long_words, k=10))}")
        elif len(long_words) == 0:
            print("I couldn't find any words with more than 10 letters, try another book!")
        else:
            print(f"I couldn't quite find 10 words with more than 10 letters, but here are as many as I found: {build_word_list(long_words)}")
except:
    print("File not found, please try again!")
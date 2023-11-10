# Write a program that estimates the number of distinct words in the text whose pathname is passed as argument

text_location = "C:/Users/Riley/Desktop/VSCode/CCSF/CCSF/Python 131/Week 11/Text_txt.txt"

punctuation_list = [",", ".", "!", "?", ";", ":", "(", ")", "[", "]", "{", "}", "<", ">", "/", "|", "@", "#" , "$", "%", "^", "&", "*", "_", "-", "+", "=", "~",]

# function will remove any punctuation marks from any word passed into it

def remove_punctuation(word):
    letter_list = [letter for letter in word if letter not in punctuation_list]
    return ''.join(letter_list)

with open(file=text_location, mode="r") as text_source:
    text_file = text_source.read()

    text_words = text_file.lower().split() # list of all words in the text and make lower case

    set_of_unique_words = set()

    for word in text_words:
        set_of_unique_words.add(remove_punctuation(word))


    print(set_of_unique_words)
    print(len(set_of_unique_words))


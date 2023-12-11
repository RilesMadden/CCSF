
# Write a program that defines and demonstrates a class of Book objects having
# at least three functions useful for handling the text content of books.
# Test with /users/abrick/resources/urantia.txt

import sys

# Defining a class of Book object and initializing the object's attribute
# init method lets the class initialize the object's attributes
# self represents the instance of class here

class Book:
    def __init__(self, title, author, content):
        self.title = title
        self.author = author
        self.content = content

    # defining the first of the three functions to search for a particular word
    def search_word(self, word):
        count = self.content.lower().count(word.lower())
        print(f"\nThe word '{word}' appears {count} times in '{self.title}'.\n")

    # defining the second of the three functions to replace a particular word with a new one
    def replace_word(self, old_word, new_word):
        new_content = self.content.replace(old_word, new_word)
        print(f"\nContent of '{self.title}' will replace '{old_word}' with '{new_word}'\n")

    # defining the third of the three functions to perform word count
    def word_count(self):
        words = self.content.split()
        print(f"\nWord count in '{self.title}': {len(words)}\n")

# Calling the function for execution
if __name__ == "__main__":
    if len(sys.argv) != 2:
        sys.exit(1)

    file_path = sys.argv[1]

    try:
        with open(file_path, 'r', encoding='utf-8') as file:
            text = file.read()

        # Creating a book object from the text content
        book = Book("Book", "Author", text)

        # Searching for a word in the book content
        book.search_word("example")

        # Replacing  a word in the book content
        book.replace_word("example", "hello-hello")

        # Counting  words in the book content
        book.word_count()

    except FileNotFoundError:
        print(f"File '{file_path}' not found.")

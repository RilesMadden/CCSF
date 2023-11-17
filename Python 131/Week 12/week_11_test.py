path = 'Python 131/Week 12/test_txt.txt'
path_name = path
# It's possible to combine this guard into the same place as the prior guard, but it's best to contain file operations 
# to the context manager.
try:
    with open(path_name) as f:
        contents = f.read()
except FileNotFoundError as e:
    # Somewhat unnecessary extra
    print(f"The provided path name, {path_name}, could not be resolved. Please check the path and try again.")
    raise e
except PermissionError as e:
    print(f"File not readable.")
    raise e

# Separate the words into a list by breaking on whitespace, and then some basic cleaning to catch punctuation and casing
# differences. This is wrapped in a set comprehension to ensure the words are distinct.
distinct_words = {word.lower().strip(".,!?():;") for word in contents.split()}

print(f"There are {len(distinct_words):,} distinct words in the provided file, '{path_name}'.")

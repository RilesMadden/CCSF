"Write a program that prints out the exact command line arguments it receives, unchanged, but reordered from last to first"

import sys
list_of_args = sys.argv[1:] # save incoming arguments as a list
list_of_args.reverse() # reverse the list's order

# To dispay our reversed order, I'll create an empty string and iterate through our now-reversed list, adding each argument to the string.

arg_string = ''
for arg in list_of_args:
        arg_string += arg + ' ' # added space after each arg for easier readability

print(arg_string) # display completed string

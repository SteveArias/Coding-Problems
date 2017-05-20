# Pig Latin is a language game, where you move the first letter of the word to the end and add "ay." So "Python" becomes "ythonpay."
# Create a program that changes a word input into the 'Pig Latin' translation

pyg = 'ay'
original = raw_input('Enter a word:')
word = original.lower()
first = word[0]
new_word = word[1:len(new_word)] + first + pyg

if len(word) > 0 and word.isalpha():
    print new_word
else:
    print 'empty'
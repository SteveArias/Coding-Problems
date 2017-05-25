pyg = 'ay'
original = raw_input('Enter a word:')
word = original.lower()
first = word[0]
new_word = word[1:len(new_word)] + first + pyg

if len(word) > 0 and word.isalpha():
    print new_word
else:
    print 'empty'

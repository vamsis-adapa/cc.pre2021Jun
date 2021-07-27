inputStrings = '(rw)'


def reverseInParentheses(inputString):
    inputString = inputString.replace('(', ')')
    inputString = inputString.split(')')
    print(inputString)
    temp = inputString[1]
    inputString[1] = temp[::-1]
    inputString = inputString[0]+inputString[1]+inputString[2]
    return inputString


print(reverseInParentheses(inputStrings))

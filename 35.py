text = input("") 

def countA(text):
    count = 0
    for c in text:
            count = count + 1
    return count

print(countA(text))

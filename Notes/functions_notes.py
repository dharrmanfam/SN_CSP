#SN 6th Functions Notes

import random

#What is a function?
    #A function is just a set of instructions that is executed when calling on a key word. Not attatched to an specific data type.
#Why do we use functions?
    #To make coding easier and not too repetitive or time consuming, it also helps condense complex problems to easier ones.
def welcome(): 
    name = input("what is your name\n")
    print(f"Hello {name}!")
    #make sure to indent after a colon before typing anything else

print(f"The function is over!")

#calling the function
welcome()
welcome()
welcome()
welcome()
welcome()
welcome()

def add(number, number_two): #Parameters given when we define the function, inside the parenthesis of function.
    number = number_two + number
    print(number)
num_one = 12
num_two = 14
#add(num_one, num_two) #Arguments are given when we define the function, the actualy values held inside the call.
#add(4,8)
#add(9,700)
#add(87,45)

def clean(info):
    return info.strip().lower()
#What are return statements?
    #Stops the function completely and passes a specific value back to the caller.

name = input("what is your name?")
quest = input("what is your quest?")
color = input("what is your favorite color?")

print(f"Hello, {clean(name)}. I have heard you are trying to {clean(quest)}, that is super cool! are you sure {clean(color)} is your favorite color?")

def believe(sentence): 
    length = len(sentence)
    spot_one = random.randint(0,length -1)
    spot_two = random.randint(0,length -1)
    spot_three = random.randint(0,length -1)
    full_sentence = sentence.split(" ")
    full_sentence.insert(spot_one, "Believe it!")
    full_sentence.insert(spot_two, "Believe it!")
    full_sentence.insert(spot_three, "Believe it!")
    sentence = " ".join(full_sentence)
    return sentence



new_sentence = believe("The quick brown fox jumps over the lazy dog!")
print(new_sentence) #or
print(believe("Peter piper pciked a peck of pickled peppers!"))




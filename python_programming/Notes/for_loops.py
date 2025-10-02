#SN 6th Time and For Loops Notes!
import datetime
#A loop is a block of code that is repeated


current = datetime.datetime.now()
hour = current.hour

#print(f("The time in seconds since Jan 1,1960:{epoch}")
print(f"The time is: {current}")
print(f"The hour is: {hour}")

#Lists
siblings = ["Alex", "Katie", "Vienna", "Ted", "Charlie","Treyson","Sophie", "Jake"]
#Lists are mutiple quantities of values put into an organized string in straight brackets

print(siblings[3])
print(siblings)
siblings[4] = "Tia"
siblings[6] = "Xavier"
siblings.remove("Vienna")
print(siblings)

#For loop
    #Goes until there's no more to operate it into
for x in siblings:
    print(f"Hello {x}")

for x in range(1,20):
    print(x)
#runs only until 19, because range is telling to stop at 20.
for x in range(20,-11,-1):#where we start, where we stop at, and what we count by. (if we don't set the last one, then it's default is to count by +1)
    print(x)


# Two types of loops are while loops and infinite loops

#Iteration: one instance of a loop. iterator keeps track of how many times it iterates


#While loops
    #infinite loops
#while True:

    #print("OH NO!")

#good while loop
i = 1
while i < 21:
    print(i)
    i += 2 #counting up from 1 by 2 up to 20

#Iteration is 

x =1
while x < 21:
    if x % 2 ==0: #modulo gives remainder and remainder = 0 in here
        print(f"{x} is even")
    else:
        print(f"{x} is odd") #since it doesn't have remainder, then it can't divide evenly making it odd
    x+=1

import random

number = random.randint(1,20)

y=1
while y != number:
    print("Duck")
    y +=1

print("goose!")

#or you could

while True:
    if number == y:
        print("Goose!")
        break #just stops the loop
    else:
        print("Duck")
        y+= 1
   





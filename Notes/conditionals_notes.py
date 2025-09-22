#SN 6th Conditionals Notes

num = 12
#This is called a boolean statemnet or a condition. either true or false.
#An if statement makes an output when the condition was true. Code HAS to go through it and output it if it is true.
if num < 10:
    print(f"{num} is a single digit number")
#Else statements create an alternate output when the if condition was shown false. A catch all.
elif num< 100:
    print(f"{num} is not a two digit number")
elif num ==4:
      print("That is the winning number!")
      #or you could do another if statement(it wil always come out it's ture however.)
else:
    print("nothing")
        
#You use an if statement if you have more than 2 needed outcomes.

name = input ("Tell me your name").title()

if name == ("Ms Larose"):
    print("You are the teacher!")

elif name == "Tia":
    print("You are the TA!")
else: 
    if name == "Lucas":
        print("You are in the 6th period!")
    print(f"Hello {name}, you are the student!")

#Comparison Operators
    #<: less than
    #>: greater than
    #<=: less than or equal
    #>=: greater than or equal
    #==: equal
    #!=: not equal

#Logical operators
    #AND OR NOT
    #Lets us check two or more ocnditions at the same time

if num>=0 and num<10: #and means both must be true
    print(f"{num} is a single digit number")
elif num <25 or num == 50: #or means only 1 must be true
    print(f"Wow {num} is a really cool number!")
elif not num < 100: #not checks if the opposite is true
    print(f"{num} is a large number")
else:
    print(f"You typed in a {num}")
#A nested conditional statement allows the checking of multiple conditions in a sequence, to make it less complex.

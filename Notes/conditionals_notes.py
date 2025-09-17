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
    print()
        
#You use an if statement if you have more than 2 needed outcomes.

name = input ("Tell me your name")

if name == ("Ms Larose"):
    print("You are the teacher!")
else: 
     print(f"Hello {name}, you are a student!")
if name == "Tia":
    print("You are the TA!")
elif name == "Tia":
    print("You are the TA!")







#Comparison Operators
    #<: less than
    #>: greater than
    #<=: less than or equal
    #>=: greater than or equal
    #==: equal
    #!=: not equal
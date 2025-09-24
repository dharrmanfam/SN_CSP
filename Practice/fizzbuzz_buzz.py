#SN 6th FizzBuzz Practice

y= 1

while y <= 50:
    if y % 3 == 0 and y % 5== 0:
        print("FizzBuzz")
    elif y % 3 == 0:
        print("Fizz")
    elif y % 5 == 0:
        print ("Buzz")
    else:
        print(y)
    y += 1
    

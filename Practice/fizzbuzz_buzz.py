#SN 6th FizzBuzz Practice

y= 1

while y < 51:
    if y % 3 == 0:
        print("fizz")
    elif y % 5 == 0:
        print ("buzz")
    elif y % 3 == 0 and y % 5== 0:
        print("fizzbuzz")
    else:
        print(y)
    y += 1
    

#SN 6th Old Enough

age = int(input("How old are you?"))

if age >= 18:
    print("You are old enough to vote!")
elif age >= 16:
    print("You can drive!")
elif age >= 15:
    print("You can get your learner's permit!")
elif age >= 4:
    print("Go to school!")
else:
    print("You are not old enough to do any of these options yet!")

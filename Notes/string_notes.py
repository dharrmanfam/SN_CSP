#SN 6th Strings Notes

print("I did it!")
#What makes something a string?
    #A string is a collection of symbols held together by quotation marks including numbers, letters, puncutation
#Why do we have strings?
    #A string is the only data type that allow letters.
#How do stupid proofing and sanitization relate to each other?
    
first_name = input("What is your first name?"). strip().title()

last_name = input("What is your last name?"). strip().title()

full_name = first_name + " " + last_name

sentence = "The quick brown fox jumps over the lazy dog." 

print("Welcome to my program", full_name + "!")

print(sentence.find("brown"))
print(sentence[10:15])

#debugging is fixing problems in my code!
   
    #Syntax Error
string = 'This is my string'
   #Logic Error: code does something that we didn't expect it to do.
numOne = "1"
numTwo = "3"
print(numOne + numTwo)
    #Run-Time Error: a problem in the code that breaks the code when trying to run
letter = "a" 
#a bug is any error in your code that keeps it from running or improperly

#How do you debug the different types of errors? 
    #By 
#Describe what each of the methods below does:
    #a.)find(): return for us the index number foir that particular item
    #b.)concatenate (add): combines two or more strings into a single string using the "+" operator.
    #c.)upper()
    #d.)lower()
    #e.)strip()

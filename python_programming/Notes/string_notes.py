#SN 6th Strings Notes

print("I did it!")
#What makes something a string?
    #A string is a collection of symbols held together by quotation marks including numbers, letters, puncutation
#Why do we have strings?
    #A string is the only data type that allow letters.
#How do stupid proofing and sanitization relate to each other?
    # "Stupid proofing" means anticipating user or programmer mistakes and coding in a way that prevents errors, crashes, or dangerous behavior.
    # Sanitization is one of the ways you can stupid proof where you clean or validate inputs to ensure they’re safe and in the correct form.
first_name = input("What is your first name?"). strip().title()

last_name = input("What is your last name?"). strip().title()

full_name = first_name + " " + last_name

sentence = "The quick brown fox jumps over the lazy dog." 

print("Welcome to my program", full_name + "!")

print(sentence.find("brown"))
print(sentence[10:15])

#Debugging is fixing problems in my code!
   
    #Syntax Error
string = 'This is my string'
   #Logic Error: code does something that we didn't expect it to do.
numOne = "1"
numTwo = "3"
print(numOne + numTwo)
    #Run-Time Error: a problem in the code that breaks the code when trying to run
letter = "a" 
#A bug is any error in your code that keeps it from running or improperly

#How do you debug the different types of errors? 
    #By reading the error message which will show the position or line it is on, then fix the mistake that is explained.
#Describe what each of the methods below does:
    #a.)find(): return for us the index number for that particular item
    #b.)concatenate (add): combines two or more strings into a single string using the "+" operator.
    #c.)upper(): a built-in string method that converts all lowercase characters within a string to their uppercase equivalents.
    #d.)lower(): a built-in string method that converts all uppercase characters within a string to their lowercase equivalents.
    #e.)strip(): removes any unnecessary whitespace or spaces within a string. 

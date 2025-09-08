#SN 6th Financial Calculator

your_income = float(input("what is your monthly income?"))
print("monthly income:", "$", your_income)
your_rent = float(input("What is your monthly rent?"))
print("monthly rent:", "$", your_rent, "which is", your_rent / your_income *100, "% of your income")
your_utilities = float(input("What is your monthly utility cost?"))
print("monthly utility cost:", "$", your_utilities, "which is", your_utilities / your_income *100, "% of your income")
your_groceries = float(input("What is your monthly grocery cost?"))
print("monthly grocery cost:", "$",your_groceries, "which is", your_groceries / your_income *100, "% of your income")
your_transportation = float(input("What is your monthly transportation cost?"))
print("your transportation:", "$", your_transportation , "which is", your_transportation / your_income *100, "% of your income")
savings = 0.4*(your_income - your_rent - your_utilities - your_groceries - your_transportation)
print("you should save", "$",savings, "which is", savings / your_income*100, "% of your income")
spending =(your_income - your_rent - your_utilities - your_groceries - your_transportation - savings)
print("you can spend", "$", spending, "every month which is", spending / your_income*100, "% of your income!")



#SN 6th Updated Financial Calculator


def get_user_inputs():
    income = float(input("What is your monthly income? "))
    rent = float(input("What is your monthly rent? "))
    utilities = float(input("What is your monthly utility cost? "))
    groceries = float(input("What is your monthly grocery cost? "))
    transportation = float(input("What is your monthly transportation cost? "))
    
    expenses = {
        "Rent": rent,
        "Utilities": utilities,
        "Groceries": groceries,
        "Transportation": transportation
    }
    return income, expenses


def calculate(income, expenses):
    output_lines = []
    for name, amount in expenses.items():
        percent = (amount / income) * 100
        line = f"{name} is {percent:.2f}% of your income."
        print(line)               
        output_lines.append(line) 
    return "\n".join(output_lines)



income, expenses = get_user_inputs()
expense= calculate(income, expenses)




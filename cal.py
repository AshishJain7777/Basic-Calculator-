def add(val1, val2):
    val3 = val1 + val2
    return val3

def sub(val1, val2):
    val3 = val1 - val2
    return val3

def mul(val1, val2):
    val3 = val1 * val2
    return val3

def div(val1, val2):
    val3 = val1 / val2
    return val3

def rem(val1, val2):
    val3 = val1 % val2
    return val3
while True:
 print("Enter add for ADDITION")
 print("Enter sub for SUBTRACTION")
 print("Enter mul for MULTIPLICATION")
 print("Enter div for DIVIDE")
 print("Enter rem for REMAINDER")
 print("If You Want To End The Program Type 'done' ")
  
 option = input("Enter Your Choice What You Want To Do:")
#  if option != "done" or option != "add" or option != "ADD" or option != "sub" or option != "SUB" or option != "mul" or option != "MUL" or option != "div" or option != "DIV":
#     print("Enter a correct value")
 if option == "add" or option == "ADD" or option == "sub" or option == "SUB" or option == "mul" or option == "MUL" or option == "div" or option == "DIV" or option == "rem" or option == "REM":
    num1 = input("Enter The First Number:")
    num2 = input("Enter The Second Number:")
 elif option == "done" or option == "DONE":
    print("Calculation Completed")
    break
 elif option != "done" or option != "add" or option != "ADD" or option != "sub" or option != "SUB" or option != "mul" or option != "MUL" or option != "div" or option != "DIV" or option != "rem" or option != "REM":
    print("Wrong Input.")
    print("Please Try Considering Only Provided Functions. As given Above ^")
#  num1 = int(num1)
#  num2 = int(num2)
 total = None
 try:
# if statement for adding two digits
     if option == "add" or option == "ADD":
                num1 = int(num1)
                num2 = int(num2)
                total = add(num1, num2)
                print("")
                print("Sum Of Your Equation:", total)
                print("")
# elif statement for subtracting two digits
     elif option == "sub" or option == "SUB":
                num1 = int(num1)
                num2 = int(num2)
                total = sub(num1, num2)
                print("")       
                print("Sum Of Your Equation:", total)
                print("")       
# elif statement for multiplying two digits 
     elif option == "mul" or option == "MUL":
                num1 = int(num1)
                num2 = int(num2)
                total = mul(num1, num2)
                print("")
                print("Sum Of Your Equation:", total)
                print("")
# elif statement for dividing two digits   
     elif option == "div" or option == "DIV":
                num1 = int(num1)
                num2 = int(num2)
                total = div(num1, num2)
                print("")
                print("Sum Of Your Equation:", total)
                print("")
# elif statement for remainder of two numbers
     elif option == "rem" or option == "Rem":
                num1 = int(num1)
                num2 = int(num2)
                total = rem(num1, num2)
                print("")
                print("Sum Of Your Equation:", total)
                print("")
 #this is an except statement if someone put anything other than digits or numericals so this statement will occur and program will start doing everything from the beginning.
 except:
        print("***Value Input Error***")
        print("Please Enter The Correct Value")
        continue # "continue" to make this program run till the break doesn't happen.
quit()
# Inputs the main command for running the program
ERROR      = "Invalid input!"
DATA_FAIL  = "No data was entered"

def command_input(inputPrompt):
    command = input(inputPrompt)
    print()
    if command == "begin" or command == "exit":
        return command
    else:
        print(ERROR)
        return command_input(inputPrompt)

def input_data(inputPrompt, inputType):
    if inputType == "i":
        inputStr = input(inputPrompt)
        try:
            inputValue = int(inputStr)
            return inputValue
        except ValueError:
            print(ERROR)
            return input_data(inputPrompt, "i")
    elif inputType == "f":
        inputStr = input(inputPrompt)
        try:
            inputValue = float(inputStr)
            return inputValue
        except ValueError:
            print(ERROR)
            return input_data(inputPrompt, "f")
    elif inputType == "s":
        inputStr = input(inputPrompt)
        try:
            inputValue = str(inputStr)
            return inputValue
        except ValueError:
            print(ERROR)
            return input_data(inputPrompt, "s")
    else:
        print(DATA_FAIL)

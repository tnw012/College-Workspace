"""
The main script of the program, it imports the WageCalc class
and uses an input method to calculate wages input into program.
"""
import WageCalc

CMD_PROMPT = "Enter \"begin\" to continue or \"exit\" to exit. "
CMD_ERROR  = "ERROR! wrong command entered.\n"

# Inputs the commands for controlling the program
def command_input(inputPrompt, error):
    command = input(inputPrompt)
    print()
    if command == "begin" or command == "exit":
        return command
    else:
        print(error)
        return command_input(inputPrompt, error)

# Main method of program
def main():
    mainInput = command_input(CMD_PROMPT, CMD_ERROR)
    while mainInput != "exit":
        newEmployee = WageCalc.WageCalc()
        newEmployee.input_info()
        newEmployee.calc_weekly_pay()
        if newEmployee.weeklyPay > 0.0:
            newEmployee.print_weekly_pay()
        mainInput = command_input(CMD_PROMPT, CMD_ERROR)

if __name__ == '__main__':
    main()

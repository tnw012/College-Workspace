"""
Main script program. The main file imports the Sphere class
and uses an input function to calculate the diameter, circumference,
surface area, and volume of a sphere
"""
import sphere

RADIUS_PROMPT   = "Enter the radius of the sphere (in meters): "
INPUT_ERROR_MSG = "\nERROR! Invalid Input\n"
CMD_PROMPT      = "Enter \"begin\" to continue or \"exit\" to exit. "
CMD_ERROR       = "ERROR! wrong command entered.\n"

# Inputs the main command for running the program
def command_input(inputPrompt, error):
    command = input(inputPrompt)
    print()
    if command == "begin" or command == "exit":
        return command
    else:
        print(error)
        return command_input(inputPrompt, error)

# Main method of the script
def main():
    mySphere = sphere.Sphere()
    userInput = command_input(CMD_PROMPT, CMD_ERROR)
    while userInput != "exit":
        mySphere.get_calculations(RADIUS_PROMPT, INPUT_ERROR_MSG)
        userInput = command_input(CMD_PROMPT, CMD_ERROR)

if __name__ == "__main__":
    main()

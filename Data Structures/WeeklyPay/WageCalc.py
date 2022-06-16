"""
WageCalc Class takes the hourly wage, regular hours worked,
and the overtime hours worked for an employee and calculates
their weekly wages.
"""
class WageCalc:
    OVER_TIME_RATE = 1.5
    ERROR_MSG       = "\nERROR! invalid wage & time input.\n"
    REGULAR_PROMPT  = "Enter regular hours: "
    OVERTIME_PROMPT = "Enter overtime hours: "
    WAGE_PROMPT     = "Enter your hourly wage: "

    # Constructor Initializes attributes to 0.0
    def __init__(self):
        self.weeklyPay  = 0.0
        self.hourlyWage = 0.0
        self.regHours   = 0.0
        self.overHours  = 0.0
        self.overPay    = 0.0

    # User inputs the hourly wage, regular hours worked, and overtime hours
    def input_info(self):
        wage     = input(self.WAGE_PROMPT)
        regHours = input(self.REGULAR_PROMPT)
        ovrhours = input(self.OVERTIME_PROMPT)
        try:
            self.hourlyWage = float(wage)
            self.regHours   = float(regHours)
            self.overHours  = float(ovrhours)
        except ValueError:
            print(self.ERROR_MSG)
            return self.input_info()

    # Calculates the weekly salary
    def calc_weekly_pay(self):
        if self.overHours != 0:
            self.calc_overtime_pay()
        self.weeklyPay = (self.regHours * self.hourlyWage) + self.overPay

    # Calculates the overtime pay
    def calc_overtime_pay(self):
        self.overPay = self.overHours * (self.OVER_TIME_RATE * self.hourlyWage)

    # Output the weekly pay
    def print_weekly_pay(self):
        print()
        print("Your weekly pay is", "$" + str(self.weeklyPay))
        print()

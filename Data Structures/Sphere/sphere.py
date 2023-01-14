"""
Sphere class that takes the radius as input and calculates the
diameter, circumference, surface area, and volume of a sphere.
"""
from math import pi

class Sphere:
    # Class attribute
    instances = 0

    # Constructor initializes the attributes to 0.0
    def __init__(self):
        Sphere.instances += 1
        self.radius = 0.0
        self.diameter = 0.0
        self.circumference = 0.0
        self.surfaceArea = 0.0
        self.volume = 0.0

    # Interface method that calls the input and handles calculations
    def get_calculations(self, prompt, message):
        self.__input_dimensions(prompt, message)
        self.__calc_diameter()
        self.__calc_circumference()
        self.__calc_surface_area()
        self.__calc_volume()
        self.__output_calculations()

    # Inputs the dimensions of the sphere.
    def __input_dimensions(self, inputPrompt, error):
        inputRadius = input(inputPrompt)
        try:
            self.radius = float(inputRadius)
        except ValueError:
            print(error)
            return self.__input_dimensions(inputPrompt, error)

    # Calculate the diameter of the sphere.
    def __calc_diameter(self):
        self.diameter = 2 * self.radius

    # Calculate the circumference of the sphere.
    def __calc_circumference(self):
        self.circumference = 2 * pi * self.radius

    # Calculate the surface area of the sphere
    def __calc_surface_area(self):
        self.surfaceArea = 4 * pi * (self.radius ** 2)

    # Calculate the volume of the sphere
    def __calc_volume(self):
        self.volume = (4 / 3) * pi * (self.radius ** 3)

    # Outputs all of the calculations to the console.
    def __output_calculations(self):
        print("%-15s%0.3fm " % ("Diameter:", self.diameter))
        print("%-15s%0.3fm" % ("Circumference:", self.circumference))
        print("%-15s%0.3fm^2" % ("Surface Area:", self.surfaceArea))
        print("%-15s%0.3fm^3" % ("Volume:", self.volume))
        print()

class Counter:
    # Class Variable keeps track of the number of instances
    instances = 0

    # Class constructor
    def __init__(self):
        self.value = 0
        Counter.instances += 1

    # Mutator methods
    def reset(self):
        self.value = 0

    def increment(self, amount):
        self.value += amount

    def decrement(self, amount):
        self.value -= amount

    # Accessor Methods
    def get_value(self):
        return self.value

    def __str__(self):
        return str(self.value)

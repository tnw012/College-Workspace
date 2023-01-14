# Represents a linear array
class Array:
    # Instance Variable
    logicalSize = 0

    # Constructor Method
    def __init__(self, capacity, fillValue=None):
        self.array = list()
        self.capacity = capacity
        for count in range(self.capacity):
            self.array.append(fillValue)

    # Mutator Methods
    def __setitem__(self, index, newItem):
        self.array[index] = newItem

    def grow(self):
        if self.logicalSize == len(self.array):
            tempArray = Array(len(self.array) + 1)
            for index in range(self.logicalSize):
                tempArray[index] = self.array[index]
            self.array = tempArray

    def shrink(self):
        if self.logicalSize <= len(self.array) // 4 and len(self.array) >= self.capacity * 2:
            tempArray = Array(len(self.array) // 2)
            for index in range(self.logicalSize):
                tempArray[index] = self.array[index]
            self.array = tempArray

    def insert_item(self, insertIndex, insertItem):
        # Increase the physical size if necessary
        self.grow()
        # Shifts data down by one size
        for index in range(self.logicalSize, insertIndex, -1):
            self.array[index] = self.array[index - 1]
        # Add new data and increase logical size
        self.array[insertIndex] = insertItem
        self.logicalSize += 1

    def remove_item(self, removeIndex):
        # Shifts items up by one position
        for index in range(removeIndex, self.logicalSize - 1):
            self.array[index] = self.array[index + 1]
        # Decrement logical size
        self.logicalSize -= 1
        # Decrease physical size of array if necessary
        self.shrink()

    # Accessor Methods
    def size(self):
        return self.logicalSize

    def __len__(self):
        return len(self.array)

    def __str__(self):
        return str(self.array)

    def __iter__(self):
        return iter(self.array)

    def __getitem__(self, index):
        return self.array[index]

# Represents a two-dimensional array
class Grid:
    def __init__(self, rows, columns, fillValue=None):
        self.grid = Array(rows)
        for row in range(rows):
            self.grid[row] = Array(columns, fillValue)

    def reset(self):
        for row in range(self.get_height()):
            for col in range(self.get_width()):
                self.grid[row][col] = 0

    def get_height(self):
        return len(self.grid)

    def get_width(self):
        return len(self.grid[0])

    def __getitem__(self, row):
        return self.grid[row]

    def __str__(self):
        result = ""
        for row in range(self.get_height()):
            for col in range(self.get_width()):
                result += str(self.grid[row][col]) + " "
            result += "\n"
        return result

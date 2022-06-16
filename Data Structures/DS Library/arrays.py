class Array:
    """
    Array Data Structure: Linear Structure
    ------------------------------------------------
    array       :
    capacity    :
    fillValue   :
    logicalSize :
    ------------------------------------------------
    Time Complexity  :
    Space Complexity :
    ------------------------------------------------
    """
    __logicalSize = 0

    # Constructor Method
    def __init__(self, capacity, fillValue=None):
        self.__array = list()
        self.__capacity = capacity
        for count in range(self.__capacity):
            self.__array.append(fillValue)

    # Mutator Methods
    def __setitem__(self, index, newItem):
        self.__array[index] = newItem

    def __grow(self):
        if self.__logicalSize == len(self.__array):
            tempArray = Array(len(self.__array) + 1)
            for index in range(self.__logicalSize):
                tempArray[index] = self.__array[index]
            self.__array = tempArray

    def __shrink(self):
        if self.__logicalSize <= len(self.__array) // 4 and len(self.__array) >= self.__capacity * 2:
            tempArray = Array(len(self.__array) // 2)
            for index in range(self.__logicalSize):
                tempArray[index] = self.__array[index]
            self.array = tempArray

    def insert(self, insertIndex, insertItem):
        # Increase the physical size if necessary
        self.__grow()
        # Shifts data down by one size
        for index in range(self.__logicalSize, insertIndex, -1):
            self.__array[index] = self.__array[index - 1]
        # Add new data and increase logical size
        self.__array[insertIndex] = insertItem
        self.__logicalSize += 1

    def remove(self, removeIndex):
        # Shifts items up by one position
        for index in range(removeIndex, self.__logicalSize - 1):
            self.__array[index] = self.__array[index + 1]
        # Decrement logical size
        self.__logicalSize -= 1
        # Decrease physical size of array if necessary
        self.__shrink()

    # Accessor Methods
    def size(self):
        return self.__logicalSize

    def __len__(self):
        return len(self.__array)

    def __str__(self):
        return str(self.__array)

    def __iter__(self):
        return iter(self.__array)

    def __getitem__(self, index):
        return self.__array[index]

class Grid:
    """
    Grid Data Structure: Two-Dimensional Array
    ------------------------------------------------
    grid      :
    rows      :
    columns   :
    fillValue :
    ------------------------------------------------
    Time Complexity  :
    Space Complexity :
    ------------------------------------------------
    """
    def __init__(self, rows, columns, fillValue=None):
        self.grid = Array(rows)
        for row in range(rows):
            self.grid[row] = Array(columns, fillValue)

    # Mutator Methods
    def reset(self):
        for row in range(self.getHeight()):
            for col in range(self.getWidth()):
                self.grid[row][col] = 0

    # Accessor Methods
    def getHeight(self):
        return len(self.grid)

    def getWidth(self):
        return len(self.grid[0])

    def __getitem__(self, row):
        return self.grid[row]

    def __str__(self):
        result = ""
        for row in range(self.getHeight()):
            for col in range(self.getWidth()):
                result += str(self.grid[row][col]) + " "
            result += "\n"
        return result

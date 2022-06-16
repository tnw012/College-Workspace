from counter import Counter

# Exercise 1
def tester(problemSize, counter):
    while problemSize > 0:
        counter.increment(1)
        problemSize = problemSize // 2
    return counter.get_value()

# Exercise 2 using main
def main():
    testCounter = Counter()
    testList = [1000, 2000, 4000, 10000, 100000]
    listLength = len(testList)
    print("Iterations")
    for index in range(listLength):
        iterations = tester(testList[index], testCounter)
        print(iterations)
        testCounter.reset()


if __name__ == '__main__':
    main()

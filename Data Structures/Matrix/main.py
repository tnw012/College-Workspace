import arrays

def main():
    matrix = arrays.Grid(11, 11)
    for row in range(matrix.get_height()):
        for column in range(matrix.get_width()):
            matrix[row][column] = row * column

    print(matrix)


if __name__ == '__main__':
    main()

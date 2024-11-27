#!/usr/bin python3
""" Defines an island perimeter calculating function"""


def island_perimeter(grid):
    """Return the perimeter of an island
    Arg:
        grid: A list of list of integers
    Return:
        perimeter: Perimeter of an island"""

    height = len(grid)
    length = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(length):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter

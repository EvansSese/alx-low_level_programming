#!/usr/bin/python3
""" This function finds perimeter of island """


def island_perimeter(grid):
    """ Works the perimeter of the island """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for j in range(width):
            if grid[k][j] == 1:
                size += 1
                if (j > 0 and grid[k][j - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][j] == 1):
                    edges += 1
    return (size * 4 - edges * 2)

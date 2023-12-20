#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
    - grid (List[List[int]]): Grid representing the island

    Returns:
    - int: Perimeter of the island
    """

    if not grid:
        return 0

    perimeter = 0
    rows, columns = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter


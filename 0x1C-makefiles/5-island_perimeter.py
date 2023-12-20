#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


# Function to count the water portion adjacent to a given cell in the grid
def num_water_portion(grid, i, j):
    """Returns the number of adjacent water portions to a cell in a grid."""

    # Init a var to count the number of adjacent water portions
    num = 0

    # Check if the cell has water in the up dir or is at the edge
    if i <= 0 or not grid[i - 1][j]:
        num += 1

    # Check if the cell has water portion in the left dir or is at the edge
    if j <= 0 or not grid[i][j - 1]:
        num += 1

    # Check if the cell has water portion in the right dir or is at the edge
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1

    # Check if the cell has water portion in the down dir or is at the edge
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


# Function to calculate the perimeter of the island in the grid
def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    # Initialize the perimeter to zero
    perimeter = 0

    # Loop through each row in the grid
    for i in range(len(grid)):
        # Loop through each cell in the row
        for j in range(len(grid[i])):
            # Check if the cell represents land (1)
            if grid[i][j]:
                # Call the num_water_portion fnx and + the count to perimeter
                perimeter += num_water_portion(grid, i, j)

    return perimeter

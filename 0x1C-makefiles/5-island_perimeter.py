#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of an island represented by a grid.

    Args:
    grid (list of list of int): A 2D grid where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - The grid is rectangular, with width and height not exceeding 100.
    - The grid is completely surrounded by water, and there is one island (or nothing).
    - The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
    - Grid cells are connected horizontally/vertically (not diagonally).

    """

    def count_neighbors(i, j):
        # Function to count the number of neighboring land cells.
        count = 0
        if i > 0 and grid[i - 1][j] == 1:
            count += 1  # Up
        if i < len(grid) - 1 and grid[i + 1][j] == 1:
            count += 1  # Down
        if j > 0 and grid[i][j - 1] == 1:
            count += 1  # Left
        if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
            count += 1  # Right
        return count

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4  # Start with 4, accounting for potential neighbors

                # Subtract the number of adjacent land cells
                perimeter -= count_neighbors(i, j)

    return perimeter

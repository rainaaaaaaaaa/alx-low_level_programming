#!/usr/bin/python3
"""
module
"""


def island_perimeter(grid):
    """
    returns the perimeter
    """
    perimiter = 0
    for r_indx, row in enumerate(grid):
        for c_indx, column in enumerate(row):
            if column == 1:
                perimiter += count_waters(grid, column, r_indx, c_indx)
    return perimiter


def count_waters(grid, column, r_indx, c_indx):
    """
    counts the water around a land
    """
    ru = 0
    rd = 0
    lu = 0
    ld = 0
    water_count = 0
    if r_indx <= 0 and c_indx <= 0:
        water_count += 2
        lu = 1
    if r_indx >= len(grid) - 1 and c_indx >= len(grid[r_indx]) - 1:
        water_count += 2
        rd = 1
    if c_indx <= 0 and r_indx >= len(grid) - 1:
        water_count += 2
        ld = 1
    if r_indx <= 0 and c_indx >= len(grid[r_indx]) - 1:
        water_count += 2
        ru = 1

    """up is r_indx - 1, same c_indx"""
    if (lu == 0 and ru == 0) and (r_indx <= 0 or grid[r_indx - 1][c_indx] == 0):
        water_count += 1

    """down r_indx + 1, same c_indx"""
    if (ld == 0 and rd == 0) and (
        r_indx >= len(grid) - 1 or grid[r_indx + 1][c_indx] == 0
    ):
        water_count += 1

    """right same r_indx, c_indx + 1"""
    if (rd == 0 and ru == 0) and (
        c_indx >= len(grid[r_indx]) - 1 or grid[r_indx][c_indx + 1] == 0
    ):
        water_count += 1

    """left same r_indx, c_indx - 1"""
    if (ld == 0 and lu == 0) and (c_indx <= 0 or grid[r_indx][c_indx - 1] == 0):
        water_count += 1

    return water_count

#!/usr/bin/python3

def island_perimeter(grid):

    """returns the perimeter of the island"""
    perimeter = 0
    rows = len(grid) # returns number of list items which is the number of rows
    cols = len(grid[0]) if rows> 0 else 0 # returns the number of list items in the first list which is the number of columns and this code executes only if rows is greater than 0/ grid is not empty
    
    for r in range(rows):
      for c in range(cols):
        if grid[r][c] == 1:
          perimeter +=4
          
          #check left neigbour
          if c> 0 and grid[r][c - 1] == 1:
            perimeter -= 1
          
          #check right neigbour
          if c> 0 and grid[r][c + 1] == 1:
            perimeter -= 1
          
          #check top neigbour
          if r>0 and grid[r - 1][c] == 1:
            perimeter -= 1
          
          #check bottom neigbour
          if r>0 and grid[r + 1][c] == 1:
            perimeter -= 1
    return perimeter

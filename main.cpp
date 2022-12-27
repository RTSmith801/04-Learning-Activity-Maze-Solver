/**
 * @file: Maze.h
 * @assignment_name: 04 Learning Activity: Maze Solver
 * @author: Rick Smith (rickysmith@mail.weber.edu)
 * @date: 12/27/2022
 * @brief: using recursion to solve a pathfinding problem through a maze. 
 *
 */

#include<iostream>
#include "Maze.h"
int main()
{   //Print, solve and show the maze
    Maze m;
    m.solve();
    m.printMaze();
    return 0;
}
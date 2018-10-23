Brittany Ohalete | Project 1, Part 1

HOW TO BUILD AND RUN
Linux/Mac:
1. open terminal
2. run "make" in project directory
3. run "./test"

Windows:
1. download linux-based subsystem
2. Follow Linux steps

# ASSIGNMENT PIECES
Goal of project is to create a C-string linked list that can store character strings. User should be able to create list/new nodes,
add new elements, remove element, print list, flush list and free list.

list.h - Header file used to define each function needed to create/modify linked list
list.c - Source code used to write out implementation for each function
list_test.c - Source code used to test and show output for each function
make - Runs commands to create an executable files(list_test.o, list.o, test) for linked list

# CHALLENGES
- Learning/understanding C langauge
- Understanding how to create a make file
- Fighting through depressive episode to finally start/finish project

# RESOURCES/DISCUSSIONS
malloc - allocates requested memory & returns a pointer to it

Refresher course on linked list
- each element is stored in a node
- a node consist of 2 sub elements
  • data (stores the element)
  • next (stores link to next node)
- first node used to traverse list, last node points to NULL
-implemented using structs & pointers

https://www.geeksforgeeks.org/linked-list-set-1-introduction/
https://www.geeksforgeeks.org/generic-linked-list-in-c-2/
https://www.youtube.com/watch?v=i3tYp88YHbI

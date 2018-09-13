//countYourCousins example

/*
  5         10      15 16 17            25 26 27 28             90

  10 is a child of 5
  15 16 17 are children of 10
  25 26 27 28 are children of 15
  90 is child of 16

  25,26,27,28 and 90 are Cousins

cousins are same grandparent and different parents

hint:
  create a vector
      for every node record
              record grandparent and parent

      grandparent - parent[parent]


5 and 10 do not have grandparents  && 5 doesnt have a parent




2 parallel arrays
currentParentsINdex = 0;  //put into parents array

value[]
0        1
1        3          currentParentsIndex = 1
2        4
3        5
4        8          currentParentsIndex = 2
5        9
6       15         currentParentsIndex = 3
7       30
8       31
9


parent[]
-1            corresponds with value array
0
0
0
1
1
2
3
3

grandparent = parent[parent[i]];
count all values where grands are equal but parents are not

if statement to make sure -1 isnt read or will be out of the array
*/

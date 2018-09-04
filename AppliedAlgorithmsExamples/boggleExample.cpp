#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
  Vectors are passed by value by default
  means when we change things, we are changing a copy
*/


bool isValid(vector<vector<char>> grid,string targetWord, int rowPosition, int colPosition )
{
  if(targetWord.size() == 1 && grid[rowPostion][colPosition] == targetWord[0])
  {
    return true;
  }
  if(grid[rowPosition][colPosition] != targetWord[0])
  {
    return false;
  }
  //got here? then i know that the targetWord.size() > 1 && that grid[rowPosition][colPosition] == targetWord[0]

  //need to mark the current row and col (can change it to anything but a letter. (change to hashtag))
  grid[rowPosition][colPosition] = '#';

  string newTarget = targetWord, substr(1,targetWord.size());   //might be targetWord.size() - 1 or written substr(1)

  for(rowDelta = -1; rowDelta <= +1; rowDelta++)
  {
    for(int colDelta = -1; colDelta <= +1; colDelta++)
    {
      if(isValid(grid, newTarget, rowPostion + rowDelta; colPosition + colDelta))
      {
        return true;
      }
    }
  }





}

void main()
{
  //intialize files
  //make sure size is there for grid

  //create a 6X6 grid of hashtags
  vector < vector <char> > grid(6, vector<char>(6, '#'));
  //read in grid using a nested for loop to read the 4 by 4 chars

  //read in a word (is it valid?)

  //while word isn't a '*'
  {
    bool found = false;
    for(int row = 1; row <= 4; row++)
    {
      for(int col = 1; col <=4; col++)
      {
        if( isValid(grid, word,initalRow, initialCol))
        {
          //print the word valid
        }
      }
    }
    if(!found)
    {
      //print Not Valid
    }


  }


}

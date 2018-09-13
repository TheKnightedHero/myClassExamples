//Anagram class example

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


/*
  read the one string,
  check for alpha character if its not alphabetical, skip it
  if it is, add 1 to element in an array



int letterCount1[26];
int letterCount2[26];

use  isAlpha()  && toUpper


  if letter 'B'
  ('B' - 65)     ==  (66 - 65)      65 is the ASCII for 'A'

  compare the integer arrays
  look at multiset if you want to be fancy
*/



/*
  Below are in class examples
*/
void main()
{
  ifstream fin("anagrams.in");
  if(fin.is_open())
  {
    ofstream fout("anagrams.out");
    string line1, line2;

    getline(fin, line1);
    getline(fin, line2);
    while(!(line == "<end>" && line2 == "<end"))
    {
      //do stuff
      vector<int> coutLine1Letters (26,0);  //26 in vector, intialized to 0
      vector<int> coutLine2Letters (26, 0);

      //count # of A's, B's, C's, etc in line 1
      for each(char c in line1)
      {
        if(isalpha(c))
        {
          int letterIndex = tolower(c) - 'a';
          coutLine1Letters[letterIndex]++;
        }
      }

      for each(char c in line2)
      {
        if(isalpha(c))
        {
          int letterIndex = tolower(c) - 'a';
          coutLine2Letters[letterIndex]++;
        }
      }

      if(coutLine1Letters == coutLine2Letters)
      {
        fout << "YES";
      }
      else
      {
        fout << "NO"
      }

      getline(fin, line1);
      getline(fin, line2);

    }
    fout.close();
    fin.close();
  }
  else
  {
    cout << "unable to open";
  }
}

/*
Alternate code for void main()
{
  ifstream fin("anagrams.in");
  if(fin.is_open())
  {
    ofstream fout("anagrams.out");
    string line1, line2;

    getline(fin, line1);
    getline(fin, line2);
    while(!(line == "<end>" && line2 == "<end"))
    {
    
    fout.close();
    fin.close();
  }
  else
  {
    cout << "unable to open";
  }

}
*/

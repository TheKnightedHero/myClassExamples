//Anagram class example

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <multiset>
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
Alternative solution



void buildMultiset(multiset<char> &letters, string s)
{
  for(char c : s)    //same as for each
  {
    if(isalpha(c))
    {
      letters.insert(tolower(C));   //Big O(log(current size of letters))

      //O(lg(1)) + O(lg(2)) + O(lg(3)) .... O(lg(# of letters)) = nlg(n)
    }
  }
}



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
      multiset<char> line1Letters;
      multiset<char> line2Letters;

      buildMultiset(line1Letters, line1);
      buildMultiset(line2Letters, line2);



    if(line1Letters == line2Letters)
    {
      fout << "YES";
    }
    else
    {
      fout << "NO"
    }


    fout.close();
    fin.close();
  }
  else
  {
    cout << "unable to open";
  }
}



*/

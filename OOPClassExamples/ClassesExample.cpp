//Class Example on Wednesday, August 29th, 2018
//Caleb Herring

#include <iostream>
#include "Lion.h"
using namespace std;

void main()
{
  Lion lion;
  lion.x = 99;

  Lion lion2(3);



}


Lion::Lion(int legCount)
{
  //legCount = legCount;
  Lion::legCount = legCount;

  //this is a pointer to the current object
  this->legCount = legCount;
  //dereference this (same as above code for this pointer)
  (*this).legCount = legCount;

}

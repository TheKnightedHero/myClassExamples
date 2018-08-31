void move (int , char fromPeg, char destinationPeg, char usingPeg)
{
if(height == 1)
{
  cout << "move disk" << fromPeg << "to" << destinationPeg
 << endl;
 numMoves++;
 }
 else
 {
move(height - 1, fromPeg, usingPeg, destinationPeg);
cout << "move disk from" << fromPeg << "to" destinationPeg << endl;
numMoves++;


 }
}

void Main()
{
  int height;
  cin >> height;

  while(height > 0)
  {
    numMoves = 0;

    move(height, 'A, 'B', 'C');
    
  }
}

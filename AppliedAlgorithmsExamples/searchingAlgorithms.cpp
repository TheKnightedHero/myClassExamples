/*
Based off examples in the fundamentals of algorithmic problem solving
Old world puzzle

steps to solve:
1) take goat
2)go back empt handed
3) take cabbage or wolf ( we choose wolf)
4) come back with goat
5) take cabbage
6) come back empty
7) take goat



new world problem:

enum Flashlight {left,right};

struct status
{
  bitset<4> leftSide;
  bitset<4> rightSide;
  int time;
  Flashlight FlashlightSide;
}

void mark(status visited, set<int> &markSet)
{
  int integerValue = visited.leftSide.to_ulong();
  integerValue = integerValue*16 + visited.rightSide.to_ulong();
  markSet.insert(integerValue);
}
bool marked(status cuurentStatus, set<int> &markSet)
{
int integerValue = currentStatus.leftSide.to_ulong();
integerValue = integerValue*16 + currentStatus.rightSide.to_ulong();

return (markSet.count(integerValue) == 1);
}

void main()
{
  queue<status> statusQueue;
  set<int> previousStates;


  status initialStatus = {bitset<4>("0000"), bitset<4>("1111"), 0, Flashlight::right};

  statusQueue.push(initialStatus);
  while(!statusQueue.empty())
  {
    status currentStatus;
    currentStatus = statusQueue.front(); statusQueue.pop();

    if(currentStatus.leftSide == bitset<4>("1111"))
    {
      cout << currentStstaus.time << endl;
    }
    mark(currentStatus, previousStates);

    /*
      For all possible moves,
    */


  }
}


status initialStatus = {bitset<4>("0000"), bitset<4>("1111"), 0};




*/

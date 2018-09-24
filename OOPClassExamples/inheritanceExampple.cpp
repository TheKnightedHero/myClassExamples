// Watch class lecture on 9/24/18


#include <string>
using std::string

class animal
{
  public
  Animal();
  ~Animal();

  void breathe();
  void eat();
  void move();


private:
  string name;
  string phylum;
  bool tail;
  bool dead;
  int legCount;
}


class Fish : Public Animal
{
public:
  Fish();
  ~Fish();
  void swim();

private:
}




//pretend this is source.cpp
void main()
{
  Animal a;
  Fish f;

  a.eat();
  f.eat();

}

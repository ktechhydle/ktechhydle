#include <iostream>
#include <vector>

using std::string, std::cout, std::vector;

class Keller
{
  public:
    string name;
    int age;
    vector<string> qualities;

  Keller(string name, int age, vector<string> qualities){
    this->name = name;
    this->age = age;
    this->qualities = qualities;
  }
};

int main()
{
  vector<string> qualities = {"Snowboarding", "Wakeboarding", "German Learning", "Programming", "Math"}; // TODO: add more qualities

  Keller keller("Keller Hydle", 15, qualities);
  
  return 0;
}

#include<iostream>
using namespace std;
class World {
  public:
    World() {
      cout << "This is World!\n";
    }
};
//here is Single Inheritance
class Continent: public World {
  public: 
    Continent() {
      cout << "This is Continent\n";
    }
};
class Country : public World{
  public:
Country() {
      cout << "This is the Country\n";
    }
};
// here is multiple Inheritance
class Pakistan: public Continent, public Country {
  public: 
    Pakistan() {
      cout << "Beautiful Pakistan!";
    }
};
int main() {
 Pakistan myworld;
  return 0;
}


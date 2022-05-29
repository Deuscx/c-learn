#include "utils.h"

class Entity {
public:
  float x, y;
  Entity() {}
  // 构造函数
  Entity(float x, float y) : x(x), y(y) {
    std::cout << "Entity constructor" << std::endl;
  }
  // 析构函数
  ~Entity() { std::cout << "Entity destructor" << std::endl; }
  void print() { std::cout << "x: " << x << " y: " << y << std::endl; }
  void move(float x, float y) {
    this->x += x;
    this->y += y;
  }
  // 虚函数
  virtual std::string getName() { return "Entity"; }
};

class Player : public Entity {
public:
  std::string name;
  // 构造函数
  Player(float x, float y) : Entity(x, y) {
    std::cout << "Player constructor" << std::endl;
  }
  Player(std::string &name) : name(name) {}
  void printName() { std::cout << "name: " << name << std::endl; }
  void setName(char *name) { this->name = name; }
  std::string getName() { return name; }
};

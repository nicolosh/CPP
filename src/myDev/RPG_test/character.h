#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>

class Character
{
public:
  // Constructor, destructor
  Character(const std::string &name, int health);
  ~Character();
  // methods
  void displayStatus() const;

  // getters
  const std::string &getCharName() const { return characterName; }
  int getCharHealth() const { return health; }

  // setters
  void setCharName(const std::string &newName) { characterName = newName; }
  void updateCharHealth(int healthPoints) { health += healthPoints; }

protected:
  std::string characterName; // variable
  int health;                // variable

private:
  void validateEmptyString(const std::string &str, const std::string &fieldName = "") const;
};

#endif
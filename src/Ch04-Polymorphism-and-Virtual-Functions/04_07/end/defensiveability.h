#ifndef DEFENSIVE_ABILITY_H
#define DEFENSIVE_ABILITY_H

#include "ability.h"

class DefensiveAbility : public Ability
{
public:
  DefensiveAbility(const std::string &name, int protection);
  ~DefensiveAbility();

  void use() const override;
  void describe() const override;

private:
  int protectionAmount; // Amount of protection provided
};

#endif
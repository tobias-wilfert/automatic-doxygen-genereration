//============================================================================
// Name        : Bot.cpp
// Author      : Tobias Wilfert
//============================================================================

#include "Bot.h"

Bot::Bot(std::string greeting) : greeting(std::move(greeting)) {}

void Bot::greet(const std::string &name) const {
  std::cout << greeting  << " " << name << std::endl;
}

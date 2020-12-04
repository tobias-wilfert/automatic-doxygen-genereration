//============================================================================
// Name        : Bot.h
// Author      : Tobias Wilfert
//============================================================================

#ifndef AUTOMATIC_DOXYGEN_GENERATION__BOT_H_
#define AUTOMATIC_DOXYGEN_GENERATION__BOT_H_

#include <string>
#include <utility>
#include <iostream>

/// A Bot that greets people/things
class Bot {
 private:

  /// The greeting the bot should use
  std::string greeting;
 public:

  explicit Bot(std::string greeting);

  /**
   * Greets a person/thing
   * @param name the name of the person/thing
   */
  void greet(const std::string& name) const;

};

#endif //AUTOMATIC_DOXYGEN_GENERATION__BOT_H_

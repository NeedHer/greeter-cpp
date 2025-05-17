#ifndef GREETER_FAREWELL_GOODBYEWORLD_HPP
#define GREETER_FAREWELL_GOODBYEWORLD_HPP

#include <string>

namespace greeter::farewell {
class GoodbyeWorld {
private:
  std::string name;

public:
  GoodbyeWorld(const std::string& user);
  std::string goodbye() const;
  void sayGoodbye() const;
};
} // namespace greeter::farewell

#endif // GREETER_FAREWELL_GOODBYEWORLD_HPP

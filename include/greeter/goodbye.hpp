#ifndef GREETER_GOODBYE_HPP
#define GREETER_GOODBYE_HPP

#include <string>

namespace greeter::goodbye {
class GoodbyeWorld {
private:
  std::string name;

public:
  GoodbyeWorld(const std::string& user);
  std::string goodbye() const;
  void sayGoodbye() const;
};
} // namespace greeter::goodbye

#endif // GREETER_GOODBYE_HPP

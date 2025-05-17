#ifndef GREETER_WELCOME_HELLOWORLD_HPP
#define GREETER_WELCOME_HELLOWORLD_HPP

#include <string>

namespace greeter::welcome {
class HelloWorld {
private:
  std::string name;

public:
  HelloWorld(const std::string& user);
  std::string hello() const;
  void sayHello() const;
};
} // namespace greeter::welcome

#endif // GREETER_WELCOME_HELLOWORLD_HPP

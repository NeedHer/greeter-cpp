#ifndef GREETER_HELLO_HPP
#define GREETER_HELLO_HPP

#include <string>

namespace greeter::hello {
class HelloWorld {
private:
  std::string name;

public:
  HelloWorld(const std::string& user);
  std::string hello() const;
  void sayHello() const;
};
} // namespace greeter::hello

#endif // GREETER_HELLO_HPP

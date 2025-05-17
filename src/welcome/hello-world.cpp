#include <greeter/welcome.hpp>
#include <print>

using namespace std;

namespace greeter::welcome {
HelloWorld::HelloWorld(const string& user)
  : name(user) { }

string HelloWorld::hello() const {
  return format("Hello {} from C++ library!", this->name);
}

void HelloWorld::sayHello() const {
  string message = this->hello();
  println("{}", message);
}
} // namespace greeter::welcome

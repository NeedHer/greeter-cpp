#include <greeter/hello.hpp>
#include <print>

using namespace std;

namespace greeter::hello {
HelloWorld::HelloWorld(const string& user)
  : name(user) { }

string HelloWorld::hello() const {
  return format("Hello {} from C++ library!", this->name);
}

void HelloWorld::sayHello() const {
  string message = this->hello();
  println("{}", message);
}
} // namespace greeter::hello

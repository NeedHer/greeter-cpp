#include <greeter/farewell.hpp>
#include <print>

using namespace std;

namespace greeter::farewell {
GoodbyeWorld::GoodbyeWorld(const string& user)
  : name(user) { }

string GoodbyeWorld::goodbye() const {
  return format("Goodbye {} from C++ library!", this->name);
}

void GoodbyeWorld::sayGoodbye() const {
  string message = this->goodbye();
  println("{}", message);
}
} // namespace greeter::farewell

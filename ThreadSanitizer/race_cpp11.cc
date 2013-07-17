#include <thread>

int main(void) {
  std::thread t1([]{});
  std::thread t2([]{});
  t1.join();
  t2.join();
  return 0;
}

// queue::push/pop
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> myqueue;  /// using namespace std , na likhle...every library
                            /// er age std :: , lekha lagbe...
  int n,myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";
  std::cin >> n;
  do {
    std::cin >> myint;
    myqueue.push (myint);
  } while (n--);

  std::cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    std::cout << ' ' << myqueue.front();
    myqueue.pop();
  }
  std::cout << '\n';

  return 0;
}

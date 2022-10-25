#include <chrono>
#include <iostream>

namespace
{
  auto checkTime = [](void (*func)()) 
  {
      auto begin = std::chrono::high_resolution_clock::now();
      func();
      auto end = std::chrono::high_resolution_clock::now();
      auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
      std::cout << "execution time : " << elapsed << std::endl;
  };
}

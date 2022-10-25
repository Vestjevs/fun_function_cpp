#include <chrono>
#include <iostream>

namespace
{
  // No return
	auto check_time = [](void (*func)())
	{
		auto begin = std::chrono::high_resolution_clock::now();
		func();
		auto end = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		std::cout << "execution time : " << elapsed << std::endl;
	};

	// sample with arg it can be edited by example
	auto check_time_func_with_arg = [](void (*func)(int a), int a)
	{
		auto begin = std::chrono::high_resolution_clock::now();
		func(a);
		auto end = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		std::cout << "execution time : " << elapsed << std::endl;
	};

	// sample with return it can be edited by example
	auto checkTimeWithReturn = [](int (*func)()) -> int
	{
		auto begin = std::chrono::high_resolution_clock::now();
		auto result = func();
		auto end = std::chrono::high_resolution_clock::now();
		auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
		std::cout << "execution time : " << elapsed << std::endl;
		return result;
	};

	// func <- pointer to function
}

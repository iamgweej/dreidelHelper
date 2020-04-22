#include "pic.h"

#include <iostream>

extern "C" void picbootstrap_start();
extern "C" void picbootstrap_end();

int main(int argc, char* argv[]) {
	size_t pic_size = &s_picEnd - &s_picStart;
	size_t bootstrap_size = reinterpret_cast<char*>(&picbootstrap_end) - reinterpret_cast<char*>(&picbootstrap_start);

	std::cout << "pic addr: " << picmain << std::endl;
	std::cout << "pic size: " << pic_size << std::endl;
	std::cout << "bootstrap size: " << bootstrap_size << std::endl;
	return 0;
}

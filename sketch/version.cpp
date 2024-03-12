#include <iostream>

int main(int argc, char* argv[]) {
#ifdef __cplusplus
    std::cout << "C++ Standard: " << __cplusplus << "L" << std::endl;
#else
    std::cerr << "Not a C++ program." << std::endl;
#endif

    return 0L;
}

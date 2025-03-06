#include <iostream>
#include <chrono>

int main()
{
    auto sysTime = std::chrono::system_clock::now();
    std::time_t dateTime = std::chrono::system_clock::to_time_t(sysTime);
  
    std::cout << "Hello ICT group!" << std::endl;
    std::cout << "Today is a good day: " << std::ctime(&dateTime) << std::endl;
    
    return 0;    
}

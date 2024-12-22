#include<stdexcept> // using runtime_error 

class runtime_error : public std::runtime_error
{
public:
    runtime_error() : std::runtime_error{" string output "} {}
};
//Checking fetch

#include <iostream>

class FunctionCaller {
public:
 
    void operator()(int arg1, int arg2) const {
        std::cout << "Function called with arguments: " << arg1 << ", " << arg2 << std::endl;
       
    }
};

int main() {
    FunctionCaller caller;

   
    caller(10, 20);

    return 0;
}


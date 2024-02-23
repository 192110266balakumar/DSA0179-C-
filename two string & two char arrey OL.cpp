#include <iostream>
#include <cstring>


std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}


char* concatenate(const char* arr1, const char* arr2) {

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int totalLength = len1 + len2;

  
    char* result = new char[totalLength + 1]; 


    strcpy(result, arr1);

  
    strcat(result, arr2);

    return result;
}

int main() {
   
    std::string str1 = "Hello, ";
    std::string str2 = "world!";
    std::string resultStr = concatenate(str1, str2);
    std::cout << "Concatenated string: " << resultStr << std::endl;

    
    const char* arr1 = "Hello, ";
    const char* arr2 = "world!";
    char* resultArr = concatenate(arr1, arr2);
    std::cout << "Concatenated character array: " << resultArr << std::endl;

    
    delete[] resultArr;

    return 0;
}


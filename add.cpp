#include <iostream>
#include <string>

int str_num(int num,std::string brr)
    {
        for(int i = 0 ; i < num ; ++i)
        {
            std::cout<<brr<<std::endl;
        }
    }
int main() {
    std::cout << "你好世界" << std::endl;
    
    str_num(5,"Hello World");

    
    return 0;
}
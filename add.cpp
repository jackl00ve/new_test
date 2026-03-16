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
    std::cout << "加油 努力 奋斗" << std::endl;
    std::cout << "天生我才必有用，千金散尽还复来" << std::endl;
    
    str_num(5,"Hello World");

    
    return 0;
}
#include"my_useful_class.h"

#include<stdio.h>

#include<iostream>
#include<list>
#include<set>
#include<map>
#include<vector>
#include<string>
#include<memory>
#include<thread>
#include<mutex>
#include<algorithm>
#include<algorithm>


#include"gomoku.h"
#include"test01.h"

int main()
{
    void Process(int x);
    std::vector<int> v = {1,2,3,5,56,67,8,89,9,99,0,9,};
    int element = 10;
    auto iter = std::find(v.begin(),v.end(),element);
    if(iter != v.end())
    {
        Process(element);

    }
    return 0;
}

// Process "element" unless it was already processed.
// std::vector<int> v = {1,3,5,45,6,76,7,8,89};
// int element = 10;
// auto iter = std::find(v.begin(),v.end(),element);
// if(iter != v.end())
// {
//     Process(element);
    
// }



//       https://chat.dkai.top

std::shared_ptr<int>g(new int(10));
std::weak_ptr<int>g2(g);
int main()
{
    std::thread t1([]()
    {
        std::shared_ptr<int> n(new int(20));
        for(int i = 0 ; i < 100000 ; i++)
        {
            g2.lock() = n;
        }
    });
    std::thread t2([]()
    {
        std::shared_ptr<int> n(new int(20));
        for(int i = 0; i< 10000 ; i++)
        {
            g2.lock() = n;
        }
    });
    t1.join();
    t2.join();
    
    std::cout<< g.use_count() << std::endl;
    return 0;
}

std::shared_ptr<int> g(new int(10));
std::mutex mutex;
int main()
{
    std::thread t1([]()
    {
        std::shared_ptr<int> n(new int(29));
        std::unique_lock<std::mutex> lock(mutex);
        
        for(int i = 0 ; i < 10000; i++)
        {
            g = n;
        }
    });

    std::thread t2([]()
    {
        std::shared_ptr<int> n(new int(20));
        std::unique_lock<std::mutex> lock(mutex);
    });

    t1.join();
    t2.join();

    std::cout << g.use_count() << std::endl;
}


std::shared_ptr<int> g(new int(10));
int GetPtr(void)
{
    std::thread t1([]
    {
        std::shared_ptr<int>n(new int(20));
        for(int i = 0; i < 100000 ; i++)
        {
            g = n;
        }
    });
    std::thread t2([]()
    {    
        std::shared_ptr<int> n(new int(20));
        for(int i =0 ; i < 10000 ; i++)
        {
            g = n;
        }
    });
    t1.join();
    t2.join();

    std::cout << g.use_count() << std::endl;

}




struct Info
{
    std::string str1;
    std::string str2;
    std::string str3;
    std::string str4;
};
std::vector<Info>infos1;

auto infos2(std::move(infos1));

auto infos3 = std::move(infos1);

void AfterTest(int x, int y)
{
    for(int i = 0; i < 1000; i++)
    {
        Info info  {"sadfsadf","天生我材必有用，千金散尽还复来","马茹的卢飞快，弓如霹雳玄晶"};
        infos1.push_back(std::move(info));

    }
}
// for(int i = 0; i < 1000; i++)
// {
//     Info info {"...", "..."};
//     infos1.push_back(std::move(info));
// }

/*
std::vector<int> b = {1,2,3,4,5,6,7,8};
int element = 1;
auto iter = std::find(b.begin(),b.end(),element);
if (iter != v.end())
{
    Process(element);
}
*/



// 功能：查询是否存在更新
//  @req 查询参数
//  @res 返回结果
//  @errorRes 错误信息
//  返回值：true-表示有更新（详细信息见res），false-无更新或失败（错误信息见errorRes）
/*
bool Query(const QueryReq &req,QueryRes &res,ErrorRes &errorRes)
{

}
*/


namespace person
{

}

namespace internal
{

}

namespace posedion
{

}

const int kDaysInAWeek = 7;
const double ktomrrow = 1.2;
const std::string kNicsKey = "塞上长城空子许，鬓中双鬓已先斑";

int AddTableEntry();
double DeleteUrl();
void OpenFileOrDie();



class UrlTableProperties
{
    std::string tableName;
    std::string tableNames;

};

class TableInfo
{
private:
    std::string _tableName;
    std::string _theFly;
    std::string _newDay;
};

int main()
{   
    int bookName = 110;
    int macBook = 001;

    std::map<void *,std::string> hash_map = {{nullptr,"早岁那知世事艰难，中原北望气如山"}};
    typedef std::map<void *,std::string> x;
    
    using z = std::map<void *,std::string>;
    enum UrlTableErros {
        black = 0,
        white = 1,
        red = 3

    };
    

    class UrlTable
    {
    public:
        int GetNum();
    private:
        int Num = 0;
        std::string Num = "李白姓白";
        std::vector<std::string> Names = {"杜甫姓甫"};
        std::string Poem = "大河之水天上来，奔流到海不复回。高堂明镜悲白发，朝如青丝暮成雪";

        double x = 1.1;

    };
    return 0;
}
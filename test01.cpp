/*
#include<iostream>
#include<cstdint>
#include<set>
#include<vector>
#include"test01.h"
#include<cstdint>
*/
/*
1. `core/at_exit.h`(优先位置，详情如下)
2. 操作系统文件
3. C系统文件
4. C++系统文件
5. 其他库`.h`文件
6. 本项目内`.h`文件
*/
#include"test01.h"

#include<assert.h>
#include<cstdint>
#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>

#include<list>
#include<vector>
#include<set>
#include<map>

#include"gomoku.h"



struct A
{
    int a;
    int b;
    int c;
    int d;
    int e;
};

void DoSometing(const A& a);


void DoSometing1(int* a);
void DoSometing2(int* b);

void DoSometing3(int& c);
void DoSometing4(int& d);

void DoSometing(const int a,const int b,int* result)
{
    assert(result);
    *result = a + b;
}

int arr = 0;
int* result = &arr;
void DoSometing(const int a,int* result,const int b)
{
    assert(result);
    *result = a + b;
}

class test
{
public:
    int amx();
    double x();
protected:
    int mmmx();
    long str();
private:
    int _name;
    std::string age;
    std::vector<int>a;
    std::map<int,int>b;
    std::list<int>w;
};

class Poseidon
{
public:
    std::string GetName(){return _name;}

    void DoSomeThing();
private:
    std::string _name="x";
};

class Poseidon
{
public:
    std::string GetName();

    void DoSomeThing()
    {

    }
private:
    std::string x="sjl;jkklj";
};

class Person
{
public:
    std::string GetName();
private:
    std::string arr="wdt";
};

class Poseidon
{
public:
    std::string arr = "sdafasdfasdfsda";

};



class A
{
public:
    virtual ~A() = default;

    virtual bool DoWork() = 0;
    virtual bool DoDelayedWork(int time) = 0;
    virtual bool DoIdleWork() = 0;
};

class B : public A
{
public:
    ~B() override;

        bool DoWork() override;
    bool DoDelayedWork(int time) override;
    bool DoIdleWork() final;
};//好的继承

class Delegate
{
public:
    virtual ~Delegate() = default;
    
    virtual bool DoWork() = 0;
    virtual bool DoDelayedWork(int time) = 0;
    virtual bool DoIdleWork() = 0;

};

class MessgeLoop : public Delegate
{
public:
    virtual ~MessgeLoop();

    virtual bool DoWork();
    virtual bool DoDelayedWork();
    virtual bool DoIdleWork();
};//bad 继承



class Foo
{
public:
    Foo(){}
    explicit Foo(double x,double y);
    explicit Foo(long x,long long y);
    explicit Foo(int x);
    explicit Foo(int x,double y);

    explicit operator std::string();
    void DoSomething()
    {
        std::cout<<"do something"<<std::endl;
    }
};

void InitializeFoo()
{
    Foo f;
    for(int i=0;i<10000;i++)
    {
        f.DoSomething();
    }
}

namespace x
{
    int a(const char* str)
    {
        while(const char* p=strchr(str,'/'))str = p+1;
    }
}// namespace x



int g()
{
    return 0;
}
int j=g();
std::vector<int>v={1,2,3,4,5};
std::list<int>s={1,32,5,35,353,535,234};
std::set<int>ss={1,32,5,35,353,535,234};

static constexpr int kTestIntMax=250;
static const char kTestString[]="test string";
int Testing()
{

}

namespace poseidon
{
    int Testing();
}// namespace poseidon

class Widgets
{
public:
    std::string GetTitle();
};// Widgets


int main()
{
    std::cout<<"ni hao"<<std::endl;

    return 0;
} // namespace name


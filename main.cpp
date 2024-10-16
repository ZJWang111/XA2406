#include <iostream>
#include<string>
using namespace std;
class stu
{
public:
    string name;
    int age;
/*    stu(string n, int a)
    {
        cout << "构造函数" << endl;
        name = n;
        age = a;

    }*/
    stu(/*stu *this,*/string name, int age)//this关键字只能用于类中的非静态成员函数中
    {
//        cout << "构造函数" << endl;
        cout<<"构造函数"<<":"<<this<<endl;//this就是一个指向当前对象的指针
        this->name = name;//当函数成员中的局部变量与类中的数据成员出现重名，此时可以使用this关键字来加以区分
        this->age = age;

    }
    stu* print()
    {
        cout << name << age << endl;
        return this;//返回当前对象的自身引用
    }

    //析构函数的定义              当对象在销毁时则会自动触发析构函数的调用
    //析构函数的特点：1.名字是 ~+类名   2，没有返回类型  3，没有形参，析构在类中只有一个 4，不需要用户手动去调用
    //析构函数的作用：清理收尾工作
    //析构函数如果用户没有提供，编译器会自动生成一个
    ~stu()
    {
        cout << "析构函数" <<this<< endl;

    }


};

void test()
{
    static   stu s3("sss", 10);
    cout << "test1111" << endl;


}


int main()
{

//    stu  s1("zhang", 12),s2("yang",33);
//    test();
//    stu("kkk",33);//创建一个匿名对象,一旦离开了匿名对象的创建语句则该对象将被销毁
//    cout << "test=============" << endl;
    stu s1("zhang",12);//我们在创建对象时，系统会自动传递一个隐形的实参，就是当前的对象指针，类中普通成员函数和构造函数都带有这个隐形形参
    cout<<"类外1："<<&s1<<endl;
    stu s2("yang",33);
    cout<<"类外2："<<&s2<<endl;
    return 0;
}



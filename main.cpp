#include <iostream>
#include <string>

using namespace std;
class stu
{
public:
    string name;
    int age;
    int score;//const修饰类中的数据成员，意味着该成员
    stu(string name,int age,int score){
        this->name=name;
        this->age=age;
        this->score=score;
    }
    stu(const stu& temp){//拷贝构造函数   ---定义了拷贝规则
        this->name=temp.name;
        this->age=temp.age;
        this->score=temp.score;
    }
};

void test(stu& ss){
    cout<<ss.name<<" "<<ss.age<<" "<<ss.score<<endl;
}

stu mytest(){
    stu s11("ljs1",112,133);
    cout<<"mytest"<<endl;
    return s11;
}

int main() {
    //stu s1("ljs",12,33);
    //stu s2=s1;
    //cout<<s2.name<<" "<<s2.age<<" "<<s2.score<<endl;

    const stu s1("zhang",33,44);//在定义对象前面加了const就相当于将该对象中的所有数据成员都加了const，外部访问只能读成员的 值不能试图修改
    cout<<s1.name<<s1.age<<endl;
//    s1.age=33;
//    s1.test();//通过常对象来调用类中的普通成员函数 是不允许的

    /*stu s3(s1);
    cout<<s3.name<<" "<<s3.age<<" "<<s3.score<<endl;*/
//    test(s1);
    stu s11 = mytest();
    cout<<s11.name<<" "<<s11.age<<" "<<s11.score<<endl;
    return 0;
}
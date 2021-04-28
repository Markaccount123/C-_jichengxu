#include<iostream>
#include<string>
using namespace std;

//class Person{
//public: string _name; // 姓名
//}; 
//class Student : public Person
//{
//protected : int _num ; //学号
//};
//class Teacher : public Person
//{
//protected : int _id ; // 职工编号
//};
//class Assistant : public Student, public Teacher
//{
//protected : string _majorCourse ; // 主修课程
//};
//void Test ()
//{
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a ; a._name = "peter"; 
//	
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决,且是一种指标不治本的手段 
//	a.Student::_name = "xxx"; 
//	a.Teacher::_name = "yyy";
//}


//class Person
//{
//public: string _name; // 姓名
//};
//class Student : virtual public Person
//{
//protected : int _num ; //学号
//};
//class Teacher : virtual public Person
//{protected : int _id ; // 职工编号
//};
//class Assistant : public Student, public Teacher
//{
//protected : string _majorCourse ; // 主修课程
//};
//void Test ()
//{ 
//	Assistant a; 
//	a._name = "peter";
//}

//class A
//{ 
//public: int _a; 
//}; 
//
//// class B : public A
//class B : virtual public A
//{
//public: int _b;
//}; 
//// class C : public A
//class C : virtual public A
//{
//public: int _c;
//}; 
//class D : public B, public C
//{
//public: int _d;
//};
//int main()
//{ 
//	D d;
//	cout << sizeof(d) << endl;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4; 
//	d._d = 5; 
//	return 0;
//}

// Car和BMW Car和Benz构成is-a的关系 
class Car
{ 
protected: string _colour = "白色"; // 颜色 
		   string _num = "陕ABIT00"; // 车牌号
};  
class BMW : public Car
{
public: 
	void Drive() 
	{
		cout << "好开-操控" << endl;
	} 
}; 
class Benz : public Car
{
public: 
	void Drive() 
	{
		cout << "好坐-舒适" << endl;
	} 
}; 
// Tire和Car构成has-a的关系  
class Tire
{
protected: 
	string _brand = "Michelin"; // 品牌 
	size_t _size = 17; // 尺寸 
};  
class Car
{ 
protected: 
	string _colour = "白色"; // 颜色
	string _num = "陕ABIT00"; // 车牌号
	Tire _t; // 轮胎
}; 
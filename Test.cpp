#include<iostream>
#include<string>
using namespace std;

//class Person{
//public: string _name; // ����
//}; 
//class Student : public Person
//{
//protected : int _num ; //ѧ��
//};
//class Teacher : public Person
//{
//protected : int _id ; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected : string _majorCourse ; // ���޿γ�
//};
//void Test ()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a ; a._name = "peter"; 
//	
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����,����һ��ָ�겻�α����ֶ� 
//	a.Student::_name = "xxx"; 
//	a.Teacher::_name = "yyy";
//}


//class Person
//{
//public: string _name; // ����
//};
//class Student : virtual public Person
//{
//protected : int _num ; //ѧ��
//};
//class Teacher : virtual public Person
//{protected : int _id ; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected : string _majorCourse ; // ���޿γ�
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

// Car��BMW Car��Benz����is-a�Ĺ�ϵ 
class Car
{ 
protected: string _colour = "��ɫ"; // ��ɫ 
		   string _num = "��ABIT00"; // ���ƺ�
};  
class BMW : public Car
{
public: 
	void Drive() 
	{
		cout << "�ÿ�-�ٿ�" << endl;
	} 
}; 
class Benz : public Car
{
public: 
	void Drive() 
	{
		cout << "����-����" << endl;
	} 
}; 
// Tire��Car����has-a�Ĺ�ϵ  
class Tire
{
protected: 
	string _brand = "Michelin"; // Ʒ�� 
	size_t _size = 17; // �ߴ� 
};  
class Car
{ 
protected: 
	string _colour = "��ɫ"; // ��ɫ
	string _num = "��ABIT00"; // ���ƺ�
	Tire _t; // ��̥
}; 
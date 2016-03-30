#pragma once
#include<iostream>
using namespace std;
//Implementor��
class Implementor
{
public:
	virtual void Operation() = 0;
};
//������
class ConcreteImplementorA : public Implementor
{
public:
	void Operation()
	{
		cout << "����ʵ��A�ķ���ִ��" << endl;
	}
};
class ConcreteImplementorB : public Implementor
{
	void Operation()
	{
		cout << "����ʵ��B����ִ��" << endl;
	}
};
//Abstraction��
class Abstraction
{
protected:
	Implementor * implementor;
public:
	void SetImplementor(Implementor * im)
	{
		this->implementor = im;
	}
	virtual void Operation()
	{
		implementor->Operation();
	}
};
//RefinedAbstraction��
class RefinedAbstraction : public Abstraction
{
public:
	void Operation()
	{
		implementor->Operation();
	}
};
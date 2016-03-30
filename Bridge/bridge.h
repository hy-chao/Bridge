#pragma once
#include<iostream>
using namespace std;
//Implementor类
class Implementor
{
public:
	virtual void Operation() = 0;
};
//派生类
class ConcreteImplementorA : public Implementor
{
public:
	void Operation()
	{
		cout << "具体实现A的方法执行" << endl;
	}
};
class ConcreteImplementorB : public Implementor
{
	void Operation()
	{
		cout << "具体实现B方法执行" << endl;
	}
};
//Abstraction类
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
//RefinedAbstraction类
class RefinedAbstraction : public Abstraction
{
public:
	void Operation()
	{
		implementor->Operation();
	}
};
#include <iostream>

#define LOG(x) std::cout<<x<<std::endl

class A
{
public:
	virtual void f() 
	{
		LOG("I'm A");
	}
};

class B:public A
{

};

class C :public A
{
	void f() 
	{
		LOG("I'm C");
	}
};

void Process(A* a)
{
	void** vtAddr = reinterpret_cast<void**>(a);
	void** fAddr = reinterpret_cast<void**>(vtAddr[0]);

	void(*f)() = reinterpret_cast<void(*)()>(fAddr[0]);
	if (nullptr != f)
	{
		f();
	}	
}

int main()
{
	A *a = new A;
	A *b = new B;
	A *c = new C;

	Process(a);
	Process(b);
	Process(c);

	system("pause");
	return 0;
}
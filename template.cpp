#include <iostream>
using namespace std;

//template使用时有三个点需要注意
//1.class 类名前要使用一句 template<class ElemType1, class ElemType2, ...>
//ElemType1 代表一种数据类型，方便进行更改替换
//2.在类中声明函数不用不用更改格式，但在类外进行定义函数时需要更改
//先在函数上面加一句模板（第五行）然后写成 primitive classname<ElemType>:: fun()
//3.后续使用时，只要用上了classname就必须再后面加上<primitive>

//下面是例子

template <class ElemType>
class example
{
public:
	example();
	~example();
	int fun1();

private:

};
template <class ElemType>
example<ElemType>::example()
{
}
template <class ElemType>
example<ElemType>::~example()
{
}
template <class ElemType>
int example<ElemType>::fun1()
{

}
int main()
{
	example<int> E;


	system("pause");
	return 0;
}
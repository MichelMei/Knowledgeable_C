#include <iostream>
using namespace std;

//templateʹ��ʱ����������Ҫע��
//1.class ����ǰҪʹ��һ�� template<class ElemType1, class ElemType2, ...>
//ElemType1 ����һ���������ͣ�������и����滻
//2.�����������������ò��ø��ĸ�ʽ������������ж��庯��ʱ��Ҫ����
//���ں��������һ��ģ�壨�����У�Ȼ��д�� primitive classname<ElemType>:: fun()
//3.����ʹ��ʱ��ֻҪ������classname�ͱ����ٺ������<primitive>

//����������

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
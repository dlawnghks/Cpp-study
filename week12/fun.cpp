#include "fun.h"

// ������
template <typename T>
Fun <T>::Fun(T d)
	: data(d)
{
}
// �Ҹ���
template <typename T>
Fun <T>::~Fun()
{
}
// ������ �Լ�
template <typename T>
T Fun <T>::get() const
{
	return data;
}
// ������ �Լ�
template <typename T>
void Fun <T>::set(T d)
{
	data = d;
}
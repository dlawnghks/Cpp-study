#include "fun.h"

// 생성자
template <typename T>
Fun <T>::Fun(T d)
	: data(d)
{
}
// 소멸자
template <typename T>
Fun <T>::~Fun()
{
}
// 접근자 함수
template <typename T>
T Fun <T>::get() const
{
	return data;
}
// 설정자 함수
template <typename T>
void Fun <T>::set(T d)
{
	data = d;
}
#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// 템플릿 함수 정의
template <typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// 템플릿 함수 특수화
template<>
const char* smaller(const char* const& first, const char* const& second)
{
    cout << strcmp(first, second) << '\n';
    if (strcmp(first, second) < 0)
    {
        return first;
    }
    return second;
}
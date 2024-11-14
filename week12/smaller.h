#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// ���ø� �Լ� ����
template <typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}
// ���ø� �Լ� Ư��ȭ
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
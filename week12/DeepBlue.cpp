#include "fun.cpp"

int main()
{
	// 서로 다른 자료형으로 클래스의 인스턴스 생성
	Fun<int> Fun1(23);
	Fun<double> Fun2(12.7);
	Fun<char> Fun3('A');
	Fun<string> Fun4("Hello");
	// 각 클래스의 값 출력
	cout << "Fun1: " << Fun1.get() << endl;
	cout << "Fun2: " << Fun2.get() << endl;
	cout << "Fun3: " << Fun3.get() << endl;
	cout << "Fun4: " << Fun4.get() << endl;
	// 값 설정
	Fun1.set(47.99f);
	Fun3.set(90);
	// 호출 후의 값 출력
	cout << "set 호출 후의 Fun1: " << Fun1.get() << endl;
	cout << "set 호출 후의 Fun3: " << Fun3.get() << endl;
	return 0;
}


//#include "smaller.h"
//
//int main()
//{
//    // 문자열로 템플릿 함수 호출
///*    string str1 = "Hello";
//    string str2 = "Ha"*/;
//    string str1("Hello");
//    string str2("Ha");
//    cout << "Smaller(Hello , Ha) = " << smaller(str1, str2) << endl;
//    // C 문자열로 템플릿 함수 호출 
//    const char* s1 = "ByeA";
//    const char* s2 = "Bye Bye";  // 1
//    cout << "Smaller(ByeA, Bye Bye) = " << smaller(s1, s2) << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//template <typename T>
//T smaller(T first, T second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//
//int main()
//{
//    cout << "1와 z 중에 작은 것 = " << smaller<char>(49, 'z') << endl;
//    cout << "a와 B 중에 작은 것 = " << smaller('a', 'B') << endl;
//    //cout << "11.12와 15 중에 작은 것 = " << smaller (11.12, 15) << endl;
//    cout << "11와 15 중에 작은 것 = " << smaller <int>(11.12, 15) << endl;
//    cout << "44.2와 33.1 중에 작은 것 = " << smaller(44.2, 33.1) << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//// 템플릿 함수 정의
//template <typename T, int N>
//void print(T(&array)[N])
//{
//    for (int i = 0; i < N; i++)
//    {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}
//
//int main()
//{
//    // 배열 생성
//    int arr1[4] = { 7, 3, 5, 1 };
//    double arr2[3] = { 7.5, 6.1, 4.6 };
//    char arr3[3] = { 65, 49, 122 };
//    // 템플릿 함수 호출
//    print(arr1);
//    print(arr2);
//    print(arr3);
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
////template <typename T>
////void exchange(T& first, T& second)
////{
////	T temp = first;
////	first = second;
////	second = temp;
////}
//
//template <typename T>
//void exchange(T* first, T* second)
//{
//	T temp = *first;
//	*first = *second;
//	*second = temp;
//}
//
//int main()
//{
//	// int 자료형 스왑
//	int integer1 = 5;
//	int integer2 = 70;
//	exchange(&integer1, &integer2);  // pass by pointer
//	cout << "swap(5, 70) = ";
//	cout << integer1 << "  " << integer2 << endl;
//	// double 자료형 스왑
//	double double1 = 101.5;
//	double double2 = 402.7;
//	exchange(&double1, &double2);
//	cout << "swap(101.5, 402.7) = ";
//	cout << double1 << "  " << double2 << endl;
//	// float 자료형 스왑
//	float float1 = 111.5f;
//	float float2 = 555.7f;
//	exchange(&float1, &float2);
//	cout << "swap(111.5, 555.7) = ";
//	cout << float1 << "  " << float2 << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//// 템플릿 함수 정의
//template <typename T>
//T smaller(T first, T second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//
//int main()
//{
//    cout << "a와 B 중에 작은 것 = " << smaller('a', 'B') << endl;
//    //cout << "12와 15 중에 작은 것 = " << smaller(12, 15) << endl;
//    cout << "44.2와 33.1 중에 작은 것 = " << smaller(44.2, 33.1) << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//char smaller(char first, char second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//int smaller(int first, int second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//double smaller(double first, double second)
//{
//    if (first < second)
//    {
//        return first;
//    }
//    return second;
//}
//
//int main()
//{
//    cout << "a와 B 중에 작은 것 = " << smaller('a', 'B') << endl;  // 97, 66
//    //cout << "12와 15 중에 작은 것 = " << smaller(12, 15) << endl;  // 12
//    cout << "44.2와 33.1 중에 작은 것 = " << smaller(44.2, 33.1) << endl;  // 33.1
//    return 0;
//}


//#include <iostream>
//#include <new>  // bad_alloc 예외처리
//using namespace std;
//
//int main() {
//	try {
//		int* ptr = new int[20000000000];
//		delete[] ptr;
//		ptr = nullptr;
//		cout << "힙메모리 할당 후 해제\n";
//	}
//	catch (const bad_alloc& e) {
//		cout << "메모리 할당 오류 : " << e.what() << '\n';
//	}
//	
//
//	return 0;
//}
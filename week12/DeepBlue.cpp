#include "fun.cpp"

int main()
{
	// ���� �ٸ� �ڷ������� Ŭ������ �ν��Ͻ� ����
	Fun<int> Fun1(23);
	Fun<double> Fun2(12.7);
	Fun<char> Fun3('A');
	Fun<string> Fun4("Hello");
	// �� Ŭ������ �� ���
	cout << "Fun1: " << Fun1.get() << endl;
	cout << "Fun2: " << Fun2.get() << endl;
	cout << "Fun3: " << Fun3.get() << endl;
	cout << "Fun4: " << Fun4.get() << endl;
	// �� ����
	Fun1.set(47.99f);
	Fun3.set(90);
	// ȣ�� ���� �� ���
	cout << "set ȣ�� ���� Fun1: " << Fun1.get() << endl;
	cout << "set ȣ�� ���� Fun3: " << Fun3.get() << endl;
	return 0;
}


//#include "smaller.h"
//
//int main()
//{
//    // ���ڿ��� ���ø� �Լ� ȣ��
///*    string str1 = "Hello";
//    string str2 = "Ha"*/;
//    string str1("Hello");
//    string str2("Ha");
//    cout << "Smaller(Hello , Ha) = " << smaller(str1, str2) << endl;
//    // C ���ڿ��� ���ø� �Լ� ȣ�� 
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
//    cout << "1�� z �߿� ���� �� = " << smaller<char>(49, 'z') << endl;
//    cout << "a�� B �߿� ���� �� = " << smaller('a', 'B') << endl;
//    //cout << "11.12�� 15 �߿� ���� �� = " << smaller (11.12, 15) << endl;
//    cout << "11�� 15 �߿� ���� �� = " << smaller <int>(11.12, 15) << endl;
//    cout << "44.2�� 33.1 �߿� ���� �� = " << smaller(44.2, 33.1) << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//// ���ø� �Լ� ����
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
//    // �迭 ����
//    int arr1[4] = { 7, 3, 5, 1 };
//    double arr2[3] = { 7.5, 6.1, 4.6 };
//    char arr3[3] = { 65, 49, 122 };
//    // ���ø� �Լ� ȣ��
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
//	// int �ڷ��� ����
//	int integer1 = 5;
//	int integer2 = 70;
//	exchange(&integer1, &integer2);  // pass by pointer
//	cout << "swap(5, 70) = ";
//	cout << integer1 << "  " << integer2 << endl;
//	// double �ڷ��� ����
//	double double1 = 101.5;
//	double double2 = 402.7;
//	exchange(&double1, &double2);
//	cout << "swap(101.5, 402.7) = ";
//	cout << double1 << "  " << double2 << endl;
//	// float �ڷ��� ����
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
//// ���ø� �Լ� ����
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
//    cout << "a�� B �߿� ���� �� = " << smaller('a', 'B') << endl;
//    //cout << "12�� 15 �߿� ���� �� = " << smaller(12, 15) << endl;
//    cout << "44.2�� 33.1 �߿� ���� �� = " << smaller(44.2, 33.1) << endl;
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
//    cout << "a�� B �߿� ���� �� = " << smaller('a', 'B') << endl;  // 97, 66
//    //cout << "12�� 15 �߿� ���� �� = " << smaller(12, 15) << endl;  // 12
//    cout << "44.2�� 33.1 �߿� ���� �� = " << smaller(44.2, 33.1) << endl;  // 33.1
//    return 0;
//}


//#include <iostream>
//#include <new>  // bad_alloc ����ó��
//using namespace std;
//
//int main() {
//	try {
//		int* ptr = new int[20000000000];
//		delete[] ptr;
//		ptr = nullptr;
//		cout << "���޸� �Ҵ� �� ����\n";
//	}
//	catch (const bad_alloc& e) {
//		cout << "�޸� �Ҵ� ���� : " << e.what() << '\n';
//	}
//	
//
//	return 0;
//}
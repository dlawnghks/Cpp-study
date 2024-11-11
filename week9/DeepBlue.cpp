//#include <iostream>
//using namespace std;
//
//int b = 9;  // static memory (global variable & static variable)
//void test(int a)
//{
//    //int b = 9;
//    cout << a + b << endl;
//}
//
//int main()
//{
//    int c = 11;
//    cout << "test함수 호출 전\n";
//    test(c); // pass by value
//    cout << "test함수 호출 후\n";
//    cout << b << endl;
// 
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int quotient(int first, int second)
//{
//    // try-catch 블록
//    try {
//        if (second == 0)
//        {
//            //throw 999;
//            throw 123.9;
//        }
//    }
//    catch (int e) {
//        cout << "호출된 함수 쪽의 캐치 구문 동작\n";
//        throw;
//    }
//    return first / second;
//}
//
//int main()
//{
//    int num1, num2, result;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "정수를 입력하세요: ";
//        cin >> num1;
//        cout << "또 다른 정수를 입력하세요: ";
//        cin >> num2;
//        // try-catch 블록
//        try
//        {
//            cout << "결과 = " << quotient(num1, num2) << endl;
//        }
//        catch (int ex)
//        {
//            cout << "0으로 나눌 수 없습니다. (int)" << endl;
//        }
//        catch (double ex)
//        {
//            cout << "0으로 나눌 수 없습니다. (double)" << endl;
//        }
//        catch (...) {
//            cout << "예외발생\n";
//        }
//
//    }
//    return 0;
//}

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
//    cout << "test�Լ� ȣ�� ��\n";
//    test(c); // pass by value
//    cout << "test�Լ� ȣ�� ��\n";
//    cout << b << endl;
// 
//    return 0;
//}



//#include <iostream>
//using namespace std;
//
//int quotient(int first, int second)
//{
//    // try-catch ���
//    try {
//        if (second == 0)
//        {
//            //throw 999;
//            throw 123.9;
//        }
//    }
//    catch (int e) {
//        cout << "ȣ��� �Լ� ���� ĳġ ���� ����\n";
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
//        cout << "������ �Է��ϼ���: ";
//        cin >> num1;
//        cout << "�� �ٸ� ������ �Է��ϼ���: ";
//        cin >> num2;
//        // try-catch ���
//        try
//        {
//            cout << "��� = " << quotient(num1, num2) << endl;
//        }
//        catch (int ex)
//        {
//            cout << "0���� ���� �� �����ϴ�. (int)" << endl;
//        }
//        catch (double ex)
//        {
//            cout << "0���� ���� �� �����ϴ�. (double)" << endl;
//        }
//        catch (...) {
//            cout << "���ܹ߻�\n";
//        }
//
//    }
//    return 0;
//}

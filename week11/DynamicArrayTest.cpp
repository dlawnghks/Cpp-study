//#include <iostream>
//#include "DynamicArray.h"
//#include "MyException.h"
//
//using namespace std;
//
//int main()
//{    
//    //DynamicArray da01(5);  // ������ ���ʿ��� ���ܰ� �߻�
//
//    try {
//        DynamicArray da01(5);  // ������ ���ʿ��� ���ܰ� �߻�, try���� �������� �̵�
//
//        da01.setAt(0, 100);
//        da01.setAt(4, -7);
//
//        cout << da01.getAt(0) << endl;
//        cout << da01.getAt(2) << endl;
//        cout << da01.getAt(4) << endl;
//
//        //da01.setAt(11, 27);  // �ε��� ������ ���
//
//        cout << da01.getAt(9) << endl;  // �ε��� ������ ���, ���� �߻�
//    }
//    catch (int err) {
//        cout << "�ε����� ������ ������ϴ�\n";
//    }
//    catch (string err) {  // ���ڿ� ��ü
//        cout << err;
//    }
//    catch (const char* err) {  // ���ڿ� ���ͷ�
//        cout << err;
//    }
//    catch (const MyException& me) {  // Ŀ���� Ŭ���� ��ü
//        //cout << err;
//        cout << "�����ڵ� : " << me.getErrorCode() << '\n';
//        cout << "�������� : " << me.getErrorMessage() << '\n';
//        cout << "�޸� ���� �ּ� : " << me.getAddress() << '\n';
//    }
//
//    return 0;
//}


//#include <iostream>
//#include "DynamicArray.h"
//using namespace std;
//
//int main()
//{
//    int r;
//    DynamicArray da01(5);
//    r = da01.setAt(0, 100);
//    if (r == -1)
//        cout << "�ε����� ������ ������ϴ�\n";
//    else
//        cout << "���� �Ҵ�Ǿ����ϴ�\n";
//
//    r = da01.setAt(4, -7);
//    if (r == -1)
//        cout << "�ε����� ������ ������ϴ�\n";
//    else
//        cout << "���� �Ҵ�Ǿ����ϴ�\n";
//
//    r = da01.setAt(11, 27);  // ????
//    if (r == -1)
//        cout << "�ε����� ������ ������ϴ�\n";
//    else
//        cout << "���� �Ҵ�Ǿ����ϴ�\n";
//
//    cout << da01.getAt(0) << endl;
//    cout << da01.getAt(2) << endl;
//    cout << da01.getAt(4) << endl;
//    //cout << da01.getAt(9) << endl;  // ????
//    //cout << da01.getAt(11) << endl;  // ????
//
//    return 0;
//}
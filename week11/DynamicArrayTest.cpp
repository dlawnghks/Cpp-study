//#include <iostream>
//#include "DynamicArray.h"
//#include "MyException.h"
//
//using namespace std;
//
//int main()
//{    
//    //DynamicArray da01(5);  // 생성자 안쪽에서 예외가 발생
//
//    try {
//        DynamicArray da01(5);  // 생성자 안쪽에서 예외가 발생, try구문 안쪽으로 이동
//
//        da01.setAt(0, 100);
//        da01.setAt(4, -7);
//
//        cout << da01.getAt(0) << endl;
//        cout << da01.getAt(2) << endl;
//        cout << da01.getAt(4) << endl;
//
//        //da01.setAt(11, 27);  // 인덱스 범위를 벗어남
//
//        cout << da01.getAt(9) << endl;  // 인덱스 범위를 벗어남, 예외 발생
//    }
//    catch (int err) {
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    }
//    catch (string err) {  // 문자열 객체
//        cout << err;
//    }
//    catch (const char* err) {  // 문자열 리터럴
//        cout << err;
//    }
//    catch (const MyException& me) {  // 커스텀 클래스 객체
//        //cout << err;
//        cout << "에러코드 : " << me.getErrorCode() << '\n';
//        cout << "에러내용 : " << me.getErrorMessage() << '\n';
//        cout << "메모리 번지 주소 : " << me.getAddress() << '\n';
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
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    r = da01.setAt(4, -7);
//    if (r == -1)
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    r = da01.setAt(11, 27);  // ????
//    if (r == -1)
//        cout << "인덱스의 범위를 벗어났습니다\n";
//    else
//        cout << "정상 할당되었습니다\n";
//
//    cout << da01.getAt(0) << endl;
//    cout << da01.getAt(2) << endl;
//    cout << da01.getAt(4) << endl;
//    //cout << da01.getAt(9) << endl;  // ????
//    //cout << da01.getAt(11) << endl;  // ????
//
//    return 0;
//}
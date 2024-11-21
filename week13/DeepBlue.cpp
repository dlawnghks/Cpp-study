#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;
    ifstream inStrm("daelim.txt");
    if (!inStrm.is_open())
    {
        cout << "daelim.txt을 열 수 없습니다.";
        assert(false);
    }
    for (int i = 1; i <= 10; i++)
    {
        inStrm >> data;
        cout << data << " ";
    }
    inStrm.close();
    return 0;
}

//#include <iostream>
//#include <fstream>
//#include <cassert>
//using namespace std;
//
//int main()
//{
//    //ofstream outStrm;
//    //outStrm.open("daelim.txt");
//
//    ofstream outStrm("daelim.txt");
//    if (!outStrm.is_open())
//    {
//        cout << "daelim.txt을 열 수 없습니다.";
//        assert(false);
//    }
//    // 삽입 연산자 오버로드 함수를 활용해 파일에 쓰기
//    for (int i = 1; i <= 10; i++)
//    {
//        outStrm << i * 10 << "  ";
//    }
//    // 파일 닫기 
//    outStrm.close();
//    // return 이후에 ofstream 객체가 소멸
//    return 0;
//}


//#include "stack.cpp"
//#include "pokemon.h"
//
//typedef Stack<Pokemon> pokemonStack;  // Aliases
//int main()
//{
//	try {
//		//Stack<Pokemon> stack4(5);
//		pokemonStack stack4(5);
//		stack4.push(Pokemon("피카츄"));
//		stack4.push(Pokemon("파이리"));
//		stack4.push(Pokemon("이상해씨"));
//		stack4.push(Pokemon("꼬부기"));
//		stack4.push(Pokemon("개굴닌자"));
//
//		for(int i=0; i < 5; i++)
//		   cout << stack4.pop().getName() << endl;
//	}
//	catch (const overflow_error& e) {
//		cout << e.what();
//	}
//	catch (const out_of_range& e) {
//		cout << e.what();
//	}
//	//cout << stack4.pop().getName();
//
//
//	
//
// // Stack<double> stack2(3);
// // Stack<int> stack1(4);
// // stack1.push(5);
// // stack1.push(6);
// // stack2.push(3.999);
// // stack1.push(7);
// // stack1.push(3);  // excess stack size
// // cout << stack1.pop() << endl;
// // cout << stack1.pop() << endl;
// // cout << stack2.pop() << endl;  
// // Stack<char> stack3(3);
// // stack3.push(65);
// // stack3.push(48);
// // stack3.push(122);
//
// // for(int i=0; i < 3; i++)
//	//cout << stack3.pop() << endl;
//  return 0;
//}
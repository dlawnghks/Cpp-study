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
        cout << "daelim.txt�� �� �� �����ϴ�.";
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
//        cout << "daelim.txt�� �� �� �����ϴ�.";
//        assert(false);
//    }
//    // ���� ������ �����ε� �Լ��� Ȱ���� ���Ͽ� ����
//    for (int i = 1; i <= 10; i++)
//    {
//        outStrm << i * 10 << "  ";
//    }
//    // ���� �ݱ� 
//    outStrm.close();
//    // return ���Ŀ� ofstream ��ü�� �Ҹ�
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
//		stack4.push(Pokemon("��ī��"));
//		stack4.push(Pokemon("���̸�"));
//		stack4.push(Pokemon("�̻��ؾ�"));
//		stack4.push(Pokemon("���α�"));
//		stack4.push(Pokemon("��������"));
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
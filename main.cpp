// Mona Ibrahim
// Description: Hello World in C++
//============================================================




#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
    string name1="Mona Ibrahim";
    hello1Function(name1);
    string name2="Strauss Diebold";
    hello2Function(name2);
    return 0;
}

hello1Function
/*
* hello1Function.cpp
*
*/
#include <iostream>
using namespace std;
int hello1Function(string name1)
{
cout << "hello World " << name1 << endl;
return 0;
}
hello1Function
Lab 2
/*
* hello2Function.cpp
*
*/
#include <iostream>
using namespace std;
int hello2Function(string name2)
{
cout << "hello World " << name2 << endl;
return 0;
}

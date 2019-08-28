#include <iostream>
using namespace std;

// class cls{
//     public:
//         cls(){
//             func();
//         }
//         ~cls(){
//             func();
//         }
//         void func(){
//             cout<<3<<endl;
//         }
//         void fun(){
//             func();
//         }
// };
// class b:public cls{
//     void func(){
//         cout<<2<<endl;
        
//     }
// };
int fun(int a,int b=1,int c=2){
    return a+b+c;
}
int main() {
	// your code goes here
   cout<<fun(12, ,2)<<end
	return 0;
}

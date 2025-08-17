//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
class cube{
       public:
    double height=2.0;
    double width=3.0;
    double length=5.0;
      double volume(){
        double v;
        v=height*width*length;
        return v;
    }
    };
    int main(){
        cube cube1;
        double vol=cube1.volume();
        double height=cube1.height;
        cout<<"height \n"<<height;
        cout<<"volume \n"<<vol<<endl;
        return 0;
    }

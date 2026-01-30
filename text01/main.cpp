#include <iostream>
using namespace std;
int main() {
    for (int i=0;i<3;i++) {
        cout<<endl<<"i = "<<i<<endl;
        for (int j=0;j<4;j++) {
            cout<<"\t"<<"j = "<<j;
        }
    }
    cout<<endl<<"over";
    return 0;
}
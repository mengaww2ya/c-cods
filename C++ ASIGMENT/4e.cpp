#include <iostream>//4e
using namespace std;

int main() {

  
    for(char i ='g'; i >= 'a'; --i)
    {
        for(char j ='a' ;j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

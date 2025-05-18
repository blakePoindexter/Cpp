#include<iostream>
using namespace std;

int main()
{
  cout << "hello, world!" << endl;
  int x, y;
  for(x = 0; x < 10; x++)
  {
    cout << x;
    for(y = 0; y < 10; y++)
    {
      cout << y << endl;
    }
  }

  return 0;
}

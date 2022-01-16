#include<iostream>
#include<string>

using namespace std;

int main()
{
	
    int tool ;
	cout << "enter tool :" << "\n";
	cin >> tool;

	for (int j = 0; j < tool; j++)
	{
		
        if (j % 2 == 0)
      cout << "&"<<"\n";
   
    else
      cout << "$"<<"\n";
	}

	system("pause");
}
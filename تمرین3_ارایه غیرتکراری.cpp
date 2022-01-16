#include<iostream>
#include<string>

using namespace std;

int main() 
{
	
    int n;
	cin >> n;
	
    int* arr = new int[n];
	srand((unsigned)time(0));
	cout << "[ ";
	
    for (int j = 0; j < n; j++)
	{
		int random = rand();
		bool toAdd = true;
		
        for (int i = 0; i < n; i++)
		{
			
            if (random == arr[i]) toAdd = false;
		}
		
        if (toAdd) 
        {
			arr[j] = random;
			
            if (j < n - 1)  
            cout << arr[j] << ",";
			
            else cout << arr[j];
		}

	}
	cout << " ]" ;

	system("pause");

}
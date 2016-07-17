#include <bits/stdc++.h>

using namespace std;

void printspace(int s)
{
	for(int i = 1; i<=s; i++)
		cout<<" ";
}

void printchar(int c, int sc)
{
	for(int i = 1; i <= c; i++)
	{
		if(sc % 4 == 1)
			cout<<"_";
		else if(sc % 4 == 2)
			cout<<"/";
		else if(sc % 4 == 3)
			cout<<" ";
		else
			cout<< "\\";
		sc = (sc + 1) % 4;
	}
}

int main()
{
	int n;
	cin >> n;
	while(n != -1)
	{
		for(int i = 1; i<=n; i++)
		{
			printspace(2*(n-i)+1);
			printchar(4*i-3,  1);
			cout << "\n";
		}
		for(int i = 1; i <= 2*n; i++)
		{
			if(i%2 != 0)
				printchar(4*n - 1, 2);
			else
				printchar(4*n - 1, 0);
			cout<<"\n";
		}
		for(int i = 1; i <= n-1; i++)
		{
			printspace(2*i);
			printchar(4*(n-i) - 1,0);
			cout<<"\n";
		}
		cout << "***\n";
		cin >> n;
	}
	return 0;
}


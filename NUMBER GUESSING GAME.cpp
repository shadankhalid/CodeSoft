#include <iostream>
using namespace std;


int main()

{
	srand(time(NULL));
	int randnum = rand() % 100 + 1;
	int gnum;
	while (true)
	{
		cout << " enter guess number!!!"<<endl;
		cin >> gnum;
		if (gnum > randnum)
			cout << "to high" << endl;
		else if (gnum < randnum)
			cout << "to low" << endl;
		else
			cout << "correct num" << endl;
	}



}
#include <iostream>
using namespace std;

int main() {

	int arr[3][5];
	int res[3];
	int sum = 0;
	string nm[3]= {"Amar","Akbar","Anthony"};
	int pn = 0;
	int p =0;
	string t;
	float per[3];

	for(int i=0; i<3; i++) {
		for(int j = 0 ; j<5; j++) {

			if(j==0)
				t="physics";
			else if(j==1)
				t = "Chemistry";
			else if(j==2)
				t = "Maths";
			else if(j==3)
				t="English";
			else if (j==4)
				t = "Hindi";
			cout<<"Enter the "<<t<<" marks of :: "<<nm[i]<<" :=> ";
			cin>>arr[i][j];
			if(arr[i][j]>100) {
				cout<<"invalid input";
				break;
			} else
				continue;

		}

		cout<<"_______________________________________\n\n";
	}
	for(int i=0; i<3; i++) {
		res[i]=0;
		for(int j = 0 ; j<5; j++) {

			cout<<arr[i][j]<<"|  ";
			res[i]= res[i]+arr[i][j];
			per[i] = res[i]/5;

			if (p<res[i]) {
				p = res[i];
				pn = i;
			}
		}

		cout<<" Total of "<<nm[i]<<" := "<<res[i]<<"/500"<<" ,percentage is := "<<per[i]<<"%"<<endl;
		cout<<"_______________________________________________________\n\n";

	}

	cout<<"\n\t\t------------------------ "<< nm[pn] <<" is the Topper of the class with : "<<per[pn]<<"% -------------------------"<<endl;
	return 0;
}
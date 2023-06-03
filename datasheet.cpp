#include<iostream>
using namespace std;

int main() {
	string nm[5];
	int sal[5];
	int cal[6][5];
	int hra[5],ta[5],ecs[5],pf[5];
	int gross[5];

	for(int i = 0 ; i < 5 ; i++) {
		cout<<"Enter name of "<<i+1<<" person : ";
		cin>>nm[i];
		cout<<"Enter salary of "<<i+1<<" person : ";
		cin>>sal[i];
		cout<<endl;
	}

	for(int i = 0 ; i < 5 ; i++) {
		hra[i]= (20.0/100)*sal[i];
		ta[i]= (18.0/100)*sal[i];
		ecs[i]= (12.0/100)*sal[i];
		pf[i] = (12.0/100)*sal[i];

		for(int j = 0 ; j < 5 ; j++) {

			if(j==0) {
				cal[i][j]=sal[i];
				cout<<cal[i][j]<<" ";
			} else if(j==1) {

				cal[i][j]=hra[i];
				cout<<cal[i][j]<<" ";
			} else if(j==2) {

				cal[i][j]=ta[i];
				cout<<cal[i][j]<<" ";
			} else if(j==3) {

				cal[i][j]=ecs[i];
				cout<<cal[i][j]<<" ";
			} else if(j==4) {
				cal[i][j]=pf[i];
				cout<<cal[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0 ; i < 5 ; i++) {
		gross[i]=sal[i]+hra[i]+ta[i]-ecs[i]-pf[i];
		cout<<"gross salary of "<<i+1<<" person : "<<gross[i]<<endl;
	}
	return 0;
}

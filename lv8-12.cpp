#include<iostream>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
int Timvitri(float arr[], int n);
int Vitrisoamlonnhat(float arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	float arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	if (Timvitri(arr,n) == -1){
		cout<<"-1";
	} else {
		cout<<"Vi tri am lon nhat la: "<<Vitrisoamlonnhat(arr,n);
	}
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap n= ";
		cin >> n;		
	} while ((n < 1) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

int Timvitri(float arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < 0){
			return i;
		}
	} return -1;
}

int Vitrisoamlonnhat(float arr[], int n){
	int Vitri = Timvitri(arr,n);
	int Vt;
	float max = arr[Vitri];
	for (int i = Vitri + 1; i < n; i++){
		if ((arr[i] < 0) && (arr[i] > max)) {
			 Vt = i;
		}
	} return Vt;
}
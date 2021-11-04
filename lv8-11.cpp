#include<iostream>
void Nhapmang(float arr[], int &n);
void Xuatmang(float arr[], int n);
bool Kiemtra(int n);
int Timvitri(float arr[], int n);
float Sochannhonhat(float arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	float arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	if (Timvitri(arr,n) == -1){
		cout<<"0";
	} else {
		cout<<"Gia tri chan nho nhat la: "<<Sochannhonhat(arr,n);
	}
	return 0;
}

void Nhapmang(float arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i =0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(float arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

bool Kiemtra(int n){
	for (int i = 0; i <= n; i++) {
		if (n % 2 == 0) {
			return true;
		}
	}
	return false;
}

int Timvitri(float arr[], int n){
	for (int i = 0; i < n; i++){
		if (Kiemtra(arr[i])) {
			return i;
		}
	}
	return -1;
}

float Sochannhonhat(float arr[], int n){
	int Vitri = Timvitri(arr,n);
	int min = arr[Vitri];
	for (int i = Vitri + 1; i < n; i++) {
		if ((Kiemtra(arr[i])) && (arr[i] < min)) {
			min = arr[i];
		}
	} return min;
}
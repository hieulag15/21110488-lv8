#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
bool Kiemtra(int n);
int Timvitri(int arr[], int n );
float Sohoanhaonhonhat(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	if (Timvitri(arr,n) == -1){
		cout<<"0";
	} else {
		cout<<"So hoan hao nho nhat la: "<<Sohoanhaonhonhat(arr,n);
	}
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i =0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

bool Kiemtra(int n){
	int sum =0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		return true;
	} else {
		return false;
	}
}

int Timvitri(int arr[], int n ){
	for (int i = 0; i < n; i++) {
		if (Kiemtra(arr[i])) {
			return i;
		}
	}
	return -1;
}

float Sohoanhaonhonhat(int arr[], int n){
	int Vitri = Timvitri(arr,n);
	int min = arr[Vitri];
	for (int i = Vitri +1; i < n; i++) {
		if ((Kiemtra(arr[i])) && (arr[i] < min)) {
			min = arr[i];
		}
	} return min;
}
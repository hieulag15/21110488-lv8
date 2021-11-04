#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
int LocationAm(int arr[], int n);
int MaxAm(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl<<"Gia tri am lon nhat la: "<<MaxAm(arr,n);
	return 0;
}

void Nhapmang(int arr[], int &n){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for (int i = 0; i < n; i++) {
		cout<<"Arr["<<i<<"]= ";
		cin >> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for (int i = 0; i < n; i++)
	cout<<arr[i]<<"   ";
}

int LocationAm(int arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < 0)
			return i;
	}
	return -1;
}

int MaxAm(int arr[], int n){
	int vt = LocationAm(arr,n);
	int max = arr[vt];
	for (int i = vt; i < n; i++){
		if ((arr[i] < 0) && (arr[i] > max)){
			max = arr[i];
		}
	}
	return max;
}
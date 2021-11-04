#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
int LocationMax(int arr[], int n);
int LocationMin(int arr[], int n);
void hoanvi(int &x, int &y);
void Doicho(int arr[], int n);
using namespace std;

#define Max_Size 100


int main() {
	int arr[Max_Size];
	int n;
	Nhapmang(arr,n);
	Xuatmang(arr,n);
	cout<<endl;
	Doicho(arr,n);
	Xuatmang(arr,n);
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

int LocationMax(int arr[], int n){
	int locationmax = 0, max = arr[0];
	for (int i = 0; i < n; i++){
		if (max < arr[i]){
			locationmax = i;
		}
	}
	return locationmax;
}

int LocationMin(int arr[], int n){
	int locationmin = 0, min = arr[0];
	for (int i = 0; i < n; i++){
		if (min > arr[i]){
			locationmin = i;
		}
	}
	return locationmin;
}

void hoanvi(int &x, int &y){
	int tmp = x;
		  x = y;
		y = tmp;
}

void Doicho(int arr[], int n){
	int max = LocationMax(arr,n);
	int min = LocationMin(arr,n);
	hoanvi(arr[max], arr[min]);
}
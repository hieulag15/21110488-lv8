#include<iostream>
#include<stdio.h>
void Nhapmang(float arr[], int &n, float &x);
void Xuatmang(float arr[], int n);
int LocationAm(float arr[], int n);
void Amcuoicung(float arr[], int n, float x,float &Value);
void Xuat(float a);
using namespace std;

#define Max_Size 100

int main() {
	float arr[Max_Size];
	int n;
	float x, Value;
	Nhapmang(arr,n,x);
	Xuatmang(arr,n);
	cout<<endl;
	Amcuoicung(arr,n,x,Value);
	Xuat(Value);
	return 0;
}

void Nhapmang(float arr[], int &n, float &x){
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cout<<"Arr["<<i<<"]= ";
		cin>> arr[i];
	}
	cout<<"Nhap x: ";	cin >> x;
}

void Xuatmang(float arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

int LocationAm(float arr[], int n){
	for (int i = 0; i < n; i++){
		if (arr[i] < 0)
			return i;
	}
	return 0;
}

void Amcuoicung(float arr[], int n, float x,float &Value){
	Value = 0;
	for (int i = LocationAm(arr,n); i < n; i++){
		if ((arr[i] > x) && (arr[i] < 0)){
			Value = arr[i];
		}
	}
	
}

void Xuat(float a){
		cout<<a;
}


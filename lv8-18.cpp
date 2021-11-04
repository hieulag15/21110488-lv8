#include<iostream>
void Nhapmang(int arr[], int &n);
void Xuatmang(int arr[], int n);
void Gopmang(int A[], int nA, int B[], int nB, int C[], int &nC);
using namespace std;

#define Max_Size 100

int main() {
	int A[Max_Size], B[Max_Size], C[2*Max_Size];
	int nA,nB,nC;
	Nhapmang(A,nA);
	Nhapmang(B,nB);
	Gopmang(A,nA,B,nB,C,nC);
	Xuatmang(C,nC);
	return 0;
}

void Nhapmang(int arr[], int &n) {
	do {
		cout<<"Nhap Do dai cua mang: ";
		cin>>n;	
	} while ((n < 1 ) or (n > Max_Size));
	for(int i = 0; i < n; i++){
		cin>> arr[i];
	}
}

void Xuatmang(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"  ";
	}
}

void Gopmang(int A[], int nA, int B[], int nB, int C[], int &nC){
	nC = 0;
	int iA = 0;
	int iB = 0;
	while ((iA < nA) && (iB < nB)){
		C[nC++] = A[iA++];
		C[nC++] = B[iB++];
	}
	while (iA < nA){
		C[nC++] = A[iA++];
	}
	while (iB < nB){
		C[nC++] = B[iB++];
	}
}


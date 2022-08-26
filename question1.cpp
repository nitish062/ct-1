/*Name=Nitish 
roll number=2010990508
set no =3
question 1
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;

int a[] = {6,9,2,5,1,4};
int n = sizeof(a)/sizeof(a[0]);

for(int i=1;i<n-1;i+=2){
if(a[i] < a[i-1] or a[i] < a[i+1]){
if(a[i-1] > a[i+1])
swap(a[i],a[i-1]);
else
swap(a[i],a[i+1]);
}
}

for(auto ;x:a)
cout<<x<<" ";

return 0;
}

#include<iostream>
 using namespace std;
 int main()
 {float a,b,c,d,min;
 cout<< "nhap a: "<<endl;
 cin>>a;
 cout<< " nhap b"<<endl;
 cin>> b;
 cout<<"nhap c"<<endl;
 cin>>c;
 cout<<"nhap d"<<endl;
 cin>>d;
 { min=a;
 if (min<c && min<b && min<d)
 cout<<"so nho nhat la a"<<endl;
 else{
 	min=b;
 	if ( min<a && min<c && min<d)
 	cout<<"so nho nhat la b"<<endl;
      else{
    	min=c;
    	if (min<d && min<b && min<d)
cout<<"so nho nhat la c"<< endl;	
else{
	min=d;
	cout << "so nho nhat la d "<<endl;
}}}}
return 0;
 }
 

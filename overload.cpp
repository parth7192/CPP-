#include<iostream>
using namespace std;

class Number{
	
	private :
		
		int no;
		
	public :
		
		void setData(string obj){
			cout<<obj<<" Enter number : ";
			cin>>no;
		}

	bool operator>(Number n1)
	{
		if(no>n1.no){
			return true ;
		}
		else{
			return false;
		}
	}	
	
	bool operator<(Number n1)
	{
		if(no<n1.no){
			return true ;
		}
		else{
			return false;
		}
	}	
	
	bool operator==(Number n1)
	{
		if(no==n1.no){
			return true ;
		}
		else{
			return false;
		}
	}	
};
int main(){
	
	Number n,n1;
	n.setData("N1");
	n1.setData("N2");
	if(n>n1){
		cout<<"N1 is Higher Value...";
	}
	else{
		cout<<"N2 is Higher Value...";
	}
	cout<< endl<<"________________________"<< endl;

	n.setData("N1");
	n1.setData("N2");
	if(n<n1){
		cout<<"N1 is Lower Value...";
	}
	else{
		cout<<"N2 is Lower Value...";
	}
	
	cout<<endl<<"________________________"<< endl;
	
	n.setData("N1");
	n1.setData("N2");
	if(n==n1){
		cout<<"N1 and N2 is Equal Values...";
	}
	else{
		cout<<"N1 and N2 is Not Equal Value...";
	}
	
	cout<< endl<<"________________________"<<endl;

}

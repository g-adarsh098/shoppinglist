#include<iostream>
#include<string>
using namespace std;
class Product{
	private:
		int pid;
		//static int count;
		string pname;
		double prize;
		int stock;
	public:
		Product(){}
		 Product(int id,string n,double p,int s){
			this->pid = id;
			this->pname = n;
			this->prize = p;
			this->stock = s; 
		}
		int getproduct(string name,int p,int s){
			pname = name;
			prize = p;
			stock = s;
		}
		int setstock(int s){
			stock = s;
		}
		void putdetails(){
			cout<<"product name : "<<pname<<endl;
			cout<<"product id : "<<pid<<endl;
			cout<<"product prize : "<<prize<<endl;
			cout<<"product stock: "<<stock<<endl;
		}

};
int main()
{
	Product p[100];
	
	int n;
	cout<<"enter the total number of elements";
	cin>>n;
	int id,stock;
	string name;
	double prize;
	int i;
	for(i=0;i<n;i++){
		cout<<"enter the product id name prize stock :";
		cin>>id>>name>>prize>>stock;
	 p[i] = Product(id,name,prize,stock);
	}
	for(i=0;i<n;i++){
		p[i].putdetails();
	}
//int qty;
//cout<<"enter the quantity";
}

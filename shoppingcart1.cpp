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
		int putstock(){
			cout<<"stock : "<<stock<<endl;
	}
    bool matchesName(string productName){    
    if (pname == productName) {  
        return true;   
    } else {  
	    return false;  
    }  
}
    int getStock(){  
        return stock;  
    } 
};
int main(){
	Product p[100];
int n;  
    cout << "Enter the total number of products: ";  
    cin >> n;   
    for (int i = 0; i < n; i++) {  
        int id, stock;  
        string name;  
        double prize;  
        cout << "Enter the product id, name, prize, stock: ";  
        cin >> id >> name >> prize >> stock;   
        p[i] = Product(id, name, prize, stock);  
    }   
    for (int i = 0; i < n; i++) {  
        p[i].putdetails();  
    }  

    char opt = 'y';  
    do {  
        string proname;  
        cout << "Enter the product name to purchase: ";  
        cin >> proname;  

        int qty;  
        cout << "Enter the quantity: ";  
        cin >> qty;  

         
        bool found = false;    
        for (int i = 0; i < n; i++) {  
            if (p[i].matchesName(proname)) {  
                if (p[i].getStock() >= qty) {  
                    p[i].setstock(p[i].getStock() - qty);  
                    found = true;  
                    cout << "Successfully purchased " << qty << " of " << proname << endl;  
                } else {  
                    cout << "Not enough stock for " << proname << endl;  
                }  
                break;  
            }  
        }  
        if (!found) {  
            cout << "Product not found!" << endl;  
        }  

        cout << "Do you wish to continue? (y = yes || n = no): ";  
        cin >> opt;  

    } while(opt != 'n');  

    for (int i = 0; i < n; i++) {  
        p[i].putdetails();  
    }  

    return 0;  
}  

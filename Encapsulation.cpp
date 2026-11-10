#include<iostream>
using namespace std;
class employee{
	private:
		string name;
		double salary;
		public:
			void setname(string n){
				name=n;
			}
			void setsalary(double s){
			if(s>0){
			salary=s;
}else{
	cout<<"invalid amount"<<endl;
}
		}
void getname(){
	cout<<"Enter the name"<<endl;
	cin>>name;
	}
	void getsalary(){
		cout<<"Enter the salary"<<endl;
		cin>>salary;
		}
		void display(){
			cout<<"Employee Name"<<name<<endl;
			cout<<"Salary"<<salary<<endl;
		}		
			};
			int main(){
				employee e1;
				e1.setname("Ali");
				e1.setsalary(10000);
				e1.display();
				return 0;
				
			}

#include<iostream>
using namespace std;
class azeem{
	private:
	
		string name;
	
		public:
			setName(string a){
					name=a;
			}
	
			getName(){
				cout<<name;
			}
};
int main(){
	azeem aze;
aze.setName("this is how get and set function works !");
aze.getName();
}

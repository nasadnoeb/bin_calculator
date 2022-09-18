#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

class INBIN{
	public:
		void inbin(string str1){
			int num1, num2, num3;
			cout << endl;
			for(int i = 0; str1[i] != '\0'; ++i){
			num2 = str1[i];
			for(num3 = 7; num3 + 1; --num3){
			if(num2 >= (1<<num3)){
				num2 -= (1<<num3);
				cout << "1";
			} else {
				cout << "0";
			}
			}
			}
			cout << endl << endl;
		}
};

int main(int argc, char* argv[]){
	
	string str; INBIN bin; link1:
	cout << ">>> "; getline(cin, str);
	if(str == "exit"){ system("PAUSE"); goto link2; }
	if(str == "help"){ cout << "\nhelp\texit\n" << endl; goto link1; }
	bin.inbin(str); goto link1; link2:
	return 0;
}

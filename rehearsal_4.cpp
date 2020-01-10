#include <iostream>
#include <string>
using namespace std;

string compress(string word)
{
	string result = "";
	int i = word.size();
	int z=0;
	while(z <= i)
	{
		result = result + word[z];
		z += 3;
	} 
	return result;
}


int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string j = compress("CPECMU");
    string k = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n" << j << "\n" << k;

}

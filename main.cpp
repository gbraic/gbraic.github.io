#include <cstdlib>
#include <string>
#include <cstring>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char* argv[]){
	if(argc != 2) {
		cout << "Usage: update <commitnamewithoutspaces>" << endl;
		return 0;
	}
	system((string("git add --all && git commit -m \"")+string(argv[1],strlen(argv[1]))+string("\" && git push -u origin master")).c_str());
}

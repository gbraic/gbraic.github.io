#include <cstdlib>
#include <string>
#include <cstring>

using std::string;

int main(int argc, char* argv[]){
	system((string("git add --all;git commit -m \"")+string(argv[1],strlen(argv[1]))+string("\"; git push -u origin master")).c_str());
}

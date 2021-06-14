#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iterator>

using namespace std;
int square(int x){
return x*x;
}

int main()
{
    string cmd = "getmac /v /fo list";
    string filename = "macadd.txt";

    system((cmd + ">" + filename).c_str());
    string line;
    ifstream myfile ("mac_name.txt");

    if(myfile.is_open()){
        while(getline(myfile,line)){
        cout<<line<<end1;
    }
    myfile.close();
    }
else{
    cout<<"Unable to open the file";
    }

    return 0;
}


//
//  main.cpp
//  Sanju HW
//
//  Created by Rohan Kumara on 6/11/21.
//
#include<iostream>
#include<cmath>
#include <ctime>
#include <math.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iterator>
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctime>
#include <fstream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iterator>


using namespace std;

void mac(){
  string cmd = "getmac";
  string filename = "test.txt";

  system((cmd + ">" + filename).c_str());
  string line;
  ifstream myfile ("test.txt");

  if(myfile.is_open()){
    while(getline(myfile,line)){
      cout<<line<<endl;
    }
    myfile.close();
  }
  else
  cout<<"Unable to open the file";
}


string computerName(){
TCHAR nameBuf[MAX_COMPUTERNAME_LENGTH + 2];
DWORD nameBufSize;

nameBufSize = sizeof nameBuf - 1;
if (GetComputerName(nameBuf, &nameBufSize) == TRUE) {
    return nameBuf;
}};

int main(int argc, const char * argv[]) {
    float sq,n;
    string name,stid,cName,macA;
    // Create and open a text file
    ofstream MyFile("test.txt");
    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your STID : ";
    cin>>stid;

// write it on file
    MyFile<< "Name : "<<name<<endl<<endl;
    MyFile<< "Student ID : "<<stid<<endl<<endl;

    MyFile<<"Your MAC Address is : "<<endl;
    cout<<"Your MAC Address is : "<<endl;

    std::ifstream file("testmac.txt");
    std::string str;
    while (std::getline(file, str)) {
            MyFile<<str<<endl;// process string ...
            cout<<str<<endl;
    };
// Print computer Name
    cName = computerName();
    MyFile<<endl<<"Your Computer Name :"<<cName<<endl<<endl;
    cout<<endl<<"Your Computer Name :"<<cName<<endl<<endl;


    for (int i=1; i<=2; i++) {
        // current date/time based on current system
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout<<"Enter any number for get Square root :";
        cin>>n;
        sq=sqrt(n);
        MyFile<<"Square root of "<<n<<" is "<<sq<<endl;
        cout<<"Square root of "<<n<<" is "<<sq<<endl;
        time_t t = time(NULL);
        tm* tPtr = localtime(&t);
        MyFile << " Write Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        MyFile << " Write Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
        MyFile << " Count : " <<i<<endl;
        cout << " Write Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        cout << " Write Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
        cout << " Count : " <<i<<endl;
        cout <<endl;
        cout<<endl;
        MyFile << endl;

    }
    // Close the file
    MyFile.close();

    int x = 0;
   ifstream filef("test.txt");
    std::string strq;
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    std::getline(filef, strq);
    while (std::getline(filef, strq)) {
            x = x+1;
            cout<<strq<<endl;// process string ...
            if (x%4 ==0){
                    time_t t = time(NULL);
                    tm* tPtr = localtime(&t);
                    cout << " Reading Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
                    cout << " Reading Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;}



    };

    }

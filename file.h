#include<iostream>
#include<cstdio>
#include<fstream>
#include"encrypt.h"

using namespace std;


class file{
public:
  virtual void encfile()=0;
};

class encryptFile:public file{
  public:
  void encfile()
  {
    string name;
    cout<<"Enter the name of your text file:";
    getline(cin,name);
    
    ifstream inp(name);
    ofstream outt("output.txt");

    while(getline(inp,s))
    {
      enc(s,n,&head);
      outt<<s<<endl;
    }
    inp.close();
    outt.close();
    cout<<"\n\nEncrypted file is saved as output.txt\n\n";
  }

};


class decryptFile:public file{
  public:
  void encfile()
  {
    string name;
    cout<<"Enter the name of your encrypted text file:";
    getline(cin,name);
    
    ifstream inp(name);
    ofstream outt("decrypted_to_original.txt");

    while(getline(inp,s))
    {
      dec(s,n,&head);
      outt<<s<<endl;
    }
    inp.close();
    outt.close();
    cout<<"\n\nDecrypted file is saved as decrypted_to_original.txt\n\n";
  }
};

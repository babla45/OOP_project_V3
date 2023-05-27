//doubly linked list enc dec peoject
#include<bits/stdc++.h>
#include"design.h"
#include"file.h"
using namespace std;



int main()
{

  assign_value(&head);

  string name;
  cout<<"\nPlease enter your name: ";
  getline(cin,name);

  design a(name);
  a.decorate();


cout<<"\nSelect an optipon:\n";
cout<<"1. Encrypt/decrypt a text file\n";
cout<<"2. Encrypt/decrypt password\n";

int option; cin>>option; getchar();

if(option==1)
{
  cout<<"\n\nChoose what to do: \n";
  cout<<"1. Encrypt a plain text file\n";
  cout<<"2. Decrypt an encrypted  text file\n";


  int opt2; cin>>opt2; getchar();

  if(opt2==1)
  {
    encryptFile e;
    e.encfile();
  }
  else
  {
    decryptFile d;
    d.encfile();
  }
  return 0;
}



HOME:
  cout<<endl;
  design d(name);
  d.decorate2();

  cout<<"\nEnter the target string: ";
  getline(cin,s);
  n=2*s.size();
  s2=s;
x:
  cout<<"\n\nChoose what to do: \n";
  cout<<"1. Encrypt\n";
  cout<<"2. Decrypt \n";
  cout<<"3. Exit\n";
  cin>>t;
  if(t==1)
  {
    enc(s,n,&head);
    cout<<"\n\nOriginal  string: "<<s2<<"\nEncrypted string: "<<s;
    cout<<"\n\n\nDo you want to decrypt the encrypted string? (y/n) ";


    cin>>c;
    if(c=='y')
    {
      s2=s;
      goto D;
    }


    cout<<"\n\nGoto (menu/exit) ? (y/n)";
    cin>>c;
    if(c=='y')
    {
      getchar();
      goto HOME;
    }


    else cout<<"\nFinished";
  }


  else if(t==2)
  {
D:
    dec(s,n,&head);
    cout<<"\n\nOriginal  string: "<<s2<<"\nDecrypted string: "<<s<<endl;

    cout<<"\n\nGoto (menu/exit) ? (y/n)";
    cin>>c;
    if(c=='y')
    {
      getchar();
      goto HOME;
    }
    else cout<<"\nFinished";
  }


  else if(t==3)     cout<<"\nFinished\n";


  else
  {
    cout<<"\nEnter correct value.\n\n";
    goto x;
  }

  return 0;
}
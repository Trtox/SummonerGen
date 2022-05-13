#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

string name = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string nums = "123456789";

string generate_User()
{
    string user="";
    char current_char;
    for(int i=0; i<10; i++)
    {
      if(i<8)
      {
        current_char= name[rand()%52];
        user+=current_char;
      }
      else
      {
          current_char = nums[rand()%9];
          user+=current_char;
      }
    }
    return user;
}

int main()
{
    srand(time(NULL));
    ofstream f("file.txt");
    cout<<"How many names"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        string s=generate_User();
        f<<s<<"\n";
    }
    f.close();
}

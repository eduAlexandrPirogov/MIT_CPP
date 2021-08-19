#include <fstream>
#include <string>
#include <iostream>
using namespace std;

string readFiles();
bool isEnd(fstream& f);
void outFile(fstream& f, string& result);
void appendString(fstream& f,string& result);
void countLetter(fstream& f, const char letter);
void countWord(fstream&f, const char* word);

int main()
{
   string result = "";
   fstream f1;
   result = readFiles();
   outFile(f1, result);
   fstream f3; 
   countLetter(f3, 'O'); 
   countWord(f3, "Love");
   return 0;
};


void countWord(fstream& f, const char* word)
{
   f.open("FILE23.txt", ios::in);
   string fword = "";
   int count = 0;
   while (!f.eof())
   {
      f >> fword;
      if (fword == word)count++;
   }
   cout << "\nWord count: " << count << endl;
}

void countLetter(fstream& f, const char letter)
{
   f.open("FILE23.txt", ios::in);
   char s;
   int count = 0;
   while(!f.eof())
   {
      f >> s;
      if(s == letter) count++;
   }
   cout << "\nCount: " << count << endl;
   f.close();
}

void appendString(fstream& f, string& result)
{
   if(!isEnd(f))
   {
      string tmp = "";
      f >> tmp;
      result += tmp;
      result += "\n";
   }
}



string readFiles()
{
   string s = "";
   fstream f1, f2;
   f1.open("FILE1.txt", ios::in);
   f2.open("FILE2.txt", ios::in);
   while(!(isEnd(f1) && isEnd(f2)))
   {
       appendString(f1, s);
       appendString(f2, s);
   }
   return s;
};

bool isEnd(fstream& f)
{
    if(f.eof())return true;
    return false;
}

void outFile(fstream& f, string& result)
{
   f.open("FILE23.txt", ios::out);
   f << result;
   f << "I Love 6.096 too!";
   string s = "";
   cout << "Input whatever you want!To stop print 'stop' \n" << endl;
   while( s != "stop")
   {
      cin >> s;
      f << s;
   }
   f.close();
};

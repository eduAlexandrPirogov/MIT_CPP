#include <iostream>
#include <string>

using namespace std;

int main()
{
   string papayaWar = "No, Sir, Away! A papaya war is on";
   cout << "b. " << papayaWar.find("!") << endl;
   cout << "c. length: " << papayaWar.length() << endl;
   cout << "d. " << papayaWar.substr(papayaWar.length()-5, 5) << endl;
   cin >> papayaWar;
   papayaWar.append("rotator");
   cout << "f. " << papayaWar << endl;
   return 0;
}

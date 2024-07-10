#include <iostream>
#include <string>
#include <windows.h>
//More things to include for colours!


using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //Colours, again.


int main()
{
   //Super simple, hope to expand
   //Greeted with colour selection
   cout << "Choose your text colour (0-15): " ; //User gets to choose text colour

  /*
Colour coding:
0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
More to come?
   */

   int cchoice ;
   cchoice = 0 ; //For some reason wouldn't work without this
   cin >> cchoice ;
   system("cls");
   //Clear console for cleaner look
   //End user colour choice
   cout << "NED" << endl;
   cout << "NotED - Open-source note creator - https://github.com/gmemstr/NED" << endl ;
   cout << "Type and press [ENTER] when done." << endl ;
   cout << " " << endl;
   //Used to be a CHAR variable :P
   SetConsoleTextAttribute(console, cchoice); //Colouring in affect, chosen by user
   string a ;
   cin >> a;
   if (cin.get() == '\n')
    cout << " ";
  else
    cout << "" ;
    /*
    Failed attepmt at
    newlining :P
    */
    //VIEW README
    return 0;
}

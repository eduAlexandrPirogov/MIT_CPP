#include <iostream>

using namespace std;

void print_board(int arr[][3], const int row, const int col);

int main()
{
   int board[][3] = { {0, -1, 1}, {-1, 1, -1}, {-1, 1, 1}};
   print_board(board, 3, 3);
   return 0;
}

void print_board(int arr[][3], const int row, const int col)
{
   for(int i = 0; i < row; i++)
   {
      for(int j = 0; j < col; j++)
      {
         if(arr[i][j] == -1)cout << "O" << " ";
         else if(arr[i][j] == 1)cout << "X" << " ";
         else cout << " " << " ";
      }
      cout << endl;
   }
}

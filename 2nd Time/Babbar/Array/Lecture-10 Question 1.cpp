#include <iostream>
using namespace std;
int main()
{
   int size;
   cin >> size;
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }
   // Best Approch
   for (int i = 0; i < size; i += 2)
   {
      if (i + 1 < size)
      {
         swap(arr[i], arr[i + 1]);
      }
   }

   // 1st approch
   /* for (int i = 0; i < size; i += 2)
   {
      if (size % 2 == 0)
      {
          swap(arr[i], arr[i + 1]);
      }
      else
      {
         if (i + 1 == size)
         {
            break;
         }
         else
         {
            swap(arr[i], arr[i + 1]);
         }
      }
   } */

   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
}
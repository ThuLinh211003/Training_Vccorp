//Bài 3: Cho một ma trận mxn, các dòng và các cột tương ứng tăng dần. 
//Viết một phương thức tìm số lượng phần từ âm sao cho độ phức tạp là O(m+n)

#include <iostream>

using namespace std;

void search(int a[3][3], int n, int m)
{
    int i = 0, j = m-1;
    int dem = 0;
    while (i < n && j >=0)
    {
        if (a[i][j] > 0)
        {
            j--;
            i = 0;
        }
        else
        {
            i++;
            dem+=1;
        }
    }
    
    cout << "So so am la: " << dem;
}

int main ()
{
    int a[3][3] = { {-3,-2, 1},
                    {-2, -1, 3},
                    { 4, 7, 8}  } ;
    search(a,3,3);
}


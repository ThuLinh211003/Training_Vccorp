//Bài 3: Cho một ma trận mxn, các dòng và các cột tương ứng tăng dần. 
//Viết một phương thức tìm số lượng phần từ âm sao cho độ phức tạp là O(m+n)

#include <iostream>

using namespace std;


void find(int a[3][3],int n, int m)
{
    int dem  = 0;
    int i = 0 ,j = m-1;

    if(a[0][0] < 0)
    {
        dem+=1;
    }
    while (i < n && j >=0)
    {   

        if(a[i][j] > 0)
        {
            j--;
        }
        else if(a[i][j] == 0)
        {
            if (i > 0) 
            {
                dem+=1;
                j--;
            }
            else 
            {
                j--;
            }
        }
        else
        {
            if(a[i+1][j] == 0)
                {
                    i++;
                }
            else
                {
                    dem += 1;
                    i++;
                }
        }
    }
    cout << "So so am la: " << dem;
}

int main ()
{
    int a[3][3] = { {-3,-2, 1},
                    {-2, 1, 3},
                    { 4, 7, 8}  } ;
    find(a,3,3);
}


#include <iostream>

using namespace std;

int FindPos(int time[], int n)
{
    int min = time[0], pos = 0;
    for (int i = 1; i < n; ++i)
    {
        if (time[i] < min) 
        {
            min  = time[i];
            pos = i;
        }
    }
    return pos;
} 

int main ()
{
    int i,j,  so_khung, so_Trang, Khung[10],dem = 0, time[10], flag1, flag2, pos, loi = 0;
    // cout << "So khung: "; cin >> so_khung;
    // cout << "So trang: "; cin >> so_Trang;
    // cout << "Danh sach:";
    // for ( i = 0; i < so_Trang;++i)
    // {
    //     cin >>Trang[i];
    // }

    so_khung = 3;
    so_Trang = 6;
    int Trang[30] = {1,2,3,4,1,2}; 

    for ( i = 0; i < so_khung;++i)
    {
        Khung[i] = -1;
    }

    for( i = 0; i < so_Trang; ++i)
    {
        flag1 = flag2 = 0;
        for( j = 0; j < so_khung; ++j)
        {
            if(Khung[j] == Trang[i])
            {
                dem++;
                time[j] = dem;
                flag1 = flag2 = 1;
                    break;
                }
            } 

    
    if(flag1 == 0)
    {
        for(j = 0; j < so_khung; ++j)
        {
            if(Khung[j] == -1)
            {
                dem++;
                loi++;
                Khung[j] = Trang[i];
                time[j] = dem;
                flag2 = 1;
                break;
            }
        }
    }
    
    if(flag2 == 0)
    {
        pos = FindPos(time, so_khung);
        dem++;
        loi++;
        Khung[pos] = Trang[i];
        time[pos] = dem;
    }
    
    cout << endl;
    
    for(j = 0; j < so_khung; ++j)
     {
        cout<< "[ " << Khung[j] << " ]"<< "\t";
     }
    }
    cout << "\n\nSo Trang loi = "<< loi;
    
    return 0;
    }

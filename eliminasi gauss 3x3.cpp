#include <iostream>
using namespace std;

int main()
{
    float a[3][3];
    float b[3];
    float (*pa)[3] = a;
    float *pb = b;
    float x,y,z;

    cout << "Masukan Angka" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "["<<i+1<<"]" << "["<<j+1<<"]" << " = ";
            cin >> *(*(pa +i)+j);
        }
    }

    cout << endl << "Matriks" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << *(*(pa +i)+j) << "\t";
            if (j%2 == 0 && j!=0)
                cout << "= x" << i+1 <<endl;
        }
    }

    cout << endl << "Masukan Angka" << endl;
    for (int i=0;i<3;i++)
    {
        cout << "x" << i+1 << " = ";
        cin >> *(pb +i);
    }

    x = *(*(pa +1))/ **pa;

    for(int i=0;i<3;i++)
    {
        *(*(pa +1)+i) = *(*(pa +1)+i) - (x * *(*(pa)+i));
    }

    y = *(*(pa +2))/ **pa;

    for(int i=0;i<3;i++)
    {
        *(*(pa +2)+i) = *(*(pa +2)+i) - (y * *(*(pa)+i));
    }

    z = *(*(pa +2)+1)/ *(*(pa +1)+1);

    for(int i=0;i<3;i++)
    {
        *(*(pa +2)+i) = *(*(pa +2)+i) - (z * *(*(pa +1)+i));
    }

    cout << endl << "Matriks Segitiga Atas" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << *(*(pa +i)+j) << "\t";
            if (j%2 == 0 && j!=0)
                cout << "= " << *(pb +i) <<endl;
        }
    }

    cout << a[2][1];
    return 0;
}

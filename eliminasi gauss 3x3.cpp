#include <bits/stdc++.h>
using namespace std;
	float a[3][3];
    float b[3];
    float (*pa)[3] = a;
    float *pb = b;
    float x,y,z;
    int *angka;
	char s;
    
void find(float *cari);
void input(int *angka)
{
	cout << "Masukan Angka" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {	
            cout << "["<<i+1<<"]" << "["<<j+1<<"]" << " = ";
            cin >> *(*(pa +i)+j);    
        }
    }	
}

int main()
{
   	input(angka);
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
    find(*a);
    find(*pa);
    return 0;
}

void find(float *cari)
{
	cout<< endl << "Ingin Ulagi ? \n1.Ya \n2.Tidak"<<endl<< "= ";
	cin>>pilihan;
	switch(pilihan)
	{
		case 1:
		system("cls");
		return input(angka);
		break;
		exit:
    	system("cls");
    	cout<<"Okay"<<endl;
		case 2:
		goto exit;
		break;
	}
	cari++;
	system("cls");
	cout<<"Input Anda salah"<<endl;
}

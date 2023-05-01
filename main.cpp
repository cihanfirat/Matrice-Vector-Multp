#include <iostream>

using namespace std;

class Matrice
{
protected:
    int mat[3][3];
public:
    Matrice()
    {
        mat[0][0]=1;
        mat[0][1]=2;
        mat[0][2]=3;
        mat[1][0]=4;
        mat[1][1]=5;
        mat[1][2]=6;
        mat[2][0]=7;
        mat[2][1]=8;
        mat[2][2]=9;
    }

};


class Vector:public Matrice
{
    int vec[3];
public:
    Vector()
    {
        vec[0]=1;
        vec[1]=1;
        vec[2]=1;
    }
    Vector(int a,int b,int c)
    {
        vec[0]=a;
        vec[1]=b;
        vec[2]=c;
    }
    void DisplayVec()
    {
        cout<<"vector members are:"<<endl;
        cout<<"("<<vec[0]<<","<<vec[1]<<","<<vec[2]<<")"<<endl;
        cout<<"-----"<<endl;
    }
    void VectProd()
    {
        int row1=0;
        int row2=0;
        int row3=0;
        row1=(vec[0]*mat[0][0]+vec[1]*mat[0][1]+vec[2]*mat[0][2]);
        row2=(vec[0]*mat[1][0]+vec[1]*mat[1][1]+vec[2]*mat[1][2]);
        row3=(vec[0]*mat[2][0]+vec[1]*mat[2][1]+vec[2]*mat[2][2]);
        cout<<"Multipication result is: "<<row1<<","<<row2<<","<<row3;
        cout<<endl;
        cout<<"-------------------------";
    }

};

int main()
{
    Vector V1(2,2,2);
    V1.DisplayVec();
    V1.VectProd();

    return 0;
}

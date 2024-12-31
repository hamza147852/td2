#include <iostream>

using namespace std;

int main()
{
    int *a=new int ;
    *a=10;

    cout<<"la valeur de l'entier :"<< *a<<endl;
    cout<<"l'adresse de l'entier :"<< a<<endl;

    delete a;

    float* b=new float ;
        *b=10.1;

        cout<<"la valeur de l'entier :"<< *b<<endl;
        cout<<"l'adresse de l'entier :"<< b<<endl;

        delete a;
    return 0;
}

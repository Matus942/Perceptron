#include "klasa.h"
void klasa::sprawdz()
{
    do
    {
        t = false;
        for(int i = 0; i<7 ;i++)
        {

            s = x0*w[0]+w[1]*x1[i]+w[2]*x2[i];
            y = f(s);
            cout<<" y = "<<y<<" d = "<<d[i]<<endl;
            if(y != d[i])
            {
                w[0] = w[0] + d[i]*x0;
                w[1] = w[1] + x1[i]*d[i];
                w[2] = w[2] + x2[i]*d[i];
                t = true;
                break;
            }
        }
        cout<<"---------------------------------------------------"<<endl;
        e++;
    }while(t);
    cout<<"ilosc cykli :"<<e<<endl;
    cout<<"w0 = "<<w[0]<<" w1 = " <<w[1]<<" w2 = "<<w[2]<<endl;
}
double klasa::f(double s)
{
    if(s>0) return 1;
    if(s<=0) return -1;
}

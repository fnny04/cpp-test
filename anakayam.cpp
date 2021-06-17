#include <iostream>

using namespace std;

class LaguAyam
{
    private:
        int n;
    public:
        void tampil()
        {
            cout<<"Anak Ayam Turun 5"<<endl;
            for(int n=5;n>0;n--)
            {
                if(n>1)
                {
                    cout<<"Anak Ayam Turun "<<n<<", Mati Satu Tinggal "<<n-1<<endl;
                }
                else if(n=1)
                {
                    cout<<"Anak Ayam Turun 1, Mati Satu Tinggal Induknya"<<endl;
                }
            }
        }
};

int main()
{
    LaguAyam a;
    a.tampil();
    return 0;
}
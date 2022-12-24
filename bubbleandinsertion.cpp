#include<iostream>
using namespace std;
class Sort
{
private:
    int near,n,key;
    int A[10];
    
public:
    void get_data();
    void bubble();
    void Seq_Search(int);
};
void Sort::get_data()
{
    cout<<"\nHow many elementa are there..";
    cin>>n;

cout<<"\nEnter the elements ";
for(int i=0; i<n; i++)
    cin>>A[i];
}

void Sort::bubble()
{
    int temp;
    for(int i=0; i<=n-2; i++)
    {
        for(int j=0; j<=n-2; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        }
        
       cout<<"\n The sorted List is...\n";
    for(int i=0; i<n; i++)
        cout<<" "<<A[i];

    }
        void Sort::Seq_Search(int key)
        {
            int flag=0,mark;
            
            for(int i=0; i<n; i++)
            {
                if(A[i]==key)
                {
                    flag=1;
                    mark=i;
                    break;
                }
            }
            if(flag==1)
                cout<<"\nThe element is present at location:"<<mark+1;
                    else
                cout<<"\n The element is not present in the array";

        }



    
    
int main()
{
    Sort obj;
    cout<<"\n\t\t Bubble sort\n";
    obj.get_data();
    obj.bubble();


    int k;
    
    cout<<"\n\tEnter the element which is to be searched";
    cin>>k;
    obj.Seq_Search(k);
    return 0;

}





    
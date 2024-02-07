#include<iostream>
#include<string>
using namespace std;
struct book
{
    string title,author,genre;
    int pub_year;
};
int find(const book b[], int size, string search)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<1;j++)
        {
            if(search==b[i].title || search==b[i].author)
            {
                return i+1;
            }
            else
            {
                return -1;
            }
        }
    }
}
int main()
{
    int i,j,num;
    cout<<"Enter the number of books: ";
    cin>>num;
    struct book b[num];
    for(i=0;i<num;i++)
    {
        cout<<"Enter the detail of Book: "<<i+1<<endl;
        for(j=0;j<1;j++)
        {
            cout<<"Enter the title of the book: "<<endl;
            cin>>b[i].title;
            cout<<"Enter the name of author: "<<endl;
            cin>>b[i].author;
            cout<<"Enter the genre of the book: "<<endl;
            cin>>b[i].genre;
            cout<<"Enter the year of publication of the book: "<<endl;
            cin>>b[i].pub_year;
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<"The detail of Book: "<<i+1<<" is: "<<endl;
        for(j=0;j<1;j++)
        {
            cout<<"Title of the book: "<<b[i].title<<endl;
            cout<<"Name of the author: "<<b[i].author<<endl;
            cout<<"Genre of the book: "<<b[i].genre<<endl;
            cout<<"Year of publication of the book: "<<b[i].pub_year<<endl;
        }
    }
}

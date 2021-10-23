#include<iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_struct(box);
void set_struct(box* p1);
int main()
{
    box stru1;
    stru1 = { "fuck you",25.2,23.2,15.6,25.3 };
    show_struct(stru1);
    set_struct(&stru1);
    return 0;
}
void show_struct(box stru1)
{
    cout << stru1.maker << endl;
    cout << stru1.height << endl;
    cout << stru1.length << endl;
    cout << stru1.volume << endl;
    cout << stru1.width << endl;
}
void set_struct(box* p1)
{
    p1->volume = p1->height * p1->length * p1->width;
}

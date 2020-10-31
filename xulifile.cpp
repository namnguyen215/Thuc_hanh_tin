#include<iostream> 
using namespace std;
int main(){
    fstream fp;
    int x=3;
    fp.open("input.txt",ios::in); //doc
    fp.open("output.txt",ios::out);
    fp>>x;  //doc
    fp<<x;  //ghi
    fp.close()  //dong file
    fp.eof(); //kiem tra hetfile chua
    
}

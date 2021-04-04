/*auto int_bits_size = 32; // maximum number of bits for the integer
auto some_integer = 123456789;
std::string str = std::bitset<int_bits_size>(some_integer).to_string();*/
#include <cmath>
#include <iostream>
#include <stdio.h>
#include<fstream>
using namespace std;

class Convert{
    public:
    virtual void file_read(string file){
    ifstream in_file(file, ios::binary);
   in_file.seekg(0, ios::end);
   int file_size = in_file.tellg();
   char buffer[1024];
   if(file_size >= 1024 && file_size< 1048576){
 string kb = "KiloBytes";
cout<<"Size of the file is"<<" "<< file_size<<" "<<kb<<endl;
}
else if(file_size >= 1048576 && file_size < 1073741824){
string mb = "MegaBytes";
cout<<"Size of the file is"<<" "<< file_size<<" "<<mb<<endl;
}

else if(file_size >= 1073741824 && file_size < 1099511627776){
string gb = "GigaBytes";
cout<<"Size of the file is"<<" "<< file_size<<" "<<gb<<endl;
}

else if(file_size >= 1099511627776 && file_size < 1125899906842624){
string tb = "TeraBytes";
cout<<"Size of the file is"<<" "<< file_size<<" "<<tb<<endl;
}

else if(file_size >= 1125899906842624){
string pb = "PetaBytes";
cout<<"Size of the file is"<<" "<< file_size<<" "<<pb<<endl;
}
else{
       cout<<"Size of the file is"<<" "<< file_size<<" "<<"bytes"<<endl;
   }
     double bits = file_size * 8;
       cout<<"Total Bits: "<<bits;
    }
    
};
class OS{
    public:
void detection(){
   if (__linux__){
       system("sleep 1");
    cout<<"\nHey Geek it seems that you are working on a Linux OS."<<endl;
}
}
    
};
int main() {
OS op;
OS *sys = &op;
Convert c;
Convert *convert = &c;
string file_name;
cout<<"File-Size Reader "<<endl;
cout<<"File-Name: ";
cin >> file_name;
convert->file_read(file_name);
sys->detection();
return 0;
}

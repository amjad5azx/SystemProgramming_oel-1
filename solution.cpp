#include<iostream>
#include<direct.h>
#include<fstream>
#include"MyCalclib.cpp"

using namespace std;

void FileCreater(string name,string enrollment){
    ifstream myfile;
    cout<<"Enter filename:\n";
        myfile.open(name);
        if(myfile){
        cout<<"File exists";
        }
        else{
        cout<<"File not exists yet!";
        ofstream MyFile("Loggedin User\\temp.txt");
        MyFile << name+"\n"+enrollment;
        MyFile.close();
        cout<<"File created Successfully!";

        //Copying text from one file to another
         string line;
    // For writing text file
    // Creating ofstream & ifstream class object
    ifstream ini_file{
        "Loggedin User\\temp.txt"
    }; // This is the original file
    ofstream out_file{ "Loggedin User\\"+enrollment+".txt" };
    if (ini_file && out_file) {
  
        while (getline(ini_file, line)) {
            out_file << line << "\n";
        }
        cout << "Copy Finished \n";
    }
    else {
        // Something went wrong
        printf("Cannot read File");
    }
    // Closing file
    ini_file.close();
    out_file.close();
    ofstream ofs;
    system("PAUSE");
    ofs.open("Loggedin User\\temp.txt", ofstream::out | ofstream::trunc);
    ofs.close();
}
}
void Program(){
    int d=mkdir("Loggedin User");
    if ( d== -1) {
        cout << "Folder exist" << endl;
        cout << "Folder Created" << endl;
        cout<<"Enter name"<<endl;
        string name;
         try
        {
            cin>>name;
            throw "Your name is "+name;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }
        
        cout<<"Enter enrollment"<<endl;
        string enrollment;
                try
        {
            cin>>enrollment;
            throw "Your enrollment is "+enrollment;
            
        }
        catch(const char *e)
        {
            cout<<""<<e;
        }

        

        FileCreater(name,enrollment);
    }
    else {
        cout << "Folder Created" << endl;
        cout<<"Enter name"<<endl;
        string name;
        cin>>name;
        cout<<"Enter enrollment"<<endl;
        string enrollment;
        cin>>enrollment;
        FileCreater(name,enrollment);
    }
    cout<<"Enter Amount You want to transfer:";
    double amount;
    cin>>amount;
    cout<<"Your tax on $"<<amount<<" is "<<Tax(amount)<<endl;
}
int main() 
{
    Program();
}
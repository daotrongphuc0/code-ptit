#include <bits/stdc++.h>
using namespace std;
class ac{
    char name[100] ;
    char tk[100];
    char mk[100];
    int stt;
    public:
    ac(){
        stt =0;
    }
    ac(string name , string tk , string mk){
        this->setname(name);
        this->settk(tk);
        this->setmk(mk);
    }
    void setname(string name){
        size_t size = name.length();
	    size = (size > 99) ? 99 : size;
	    name.copy(this->name, size);
	    this->name[size] = '\0';
    }
    void settk(string tk){
        size_t size = tk.length();
	    size = (size > 99) ? 99 : size;
	    tk.copy(this->tk, size);
	    this->tk[size] = '\0';
    } 
    void setmk(string mk){
        size_t size = mk.length();
	    size = (size > 99) ? 99 : size;
	    mk.copy(this->mk, size);
	    this->mk[size] = '\0';
    }
    void show(){
        cout <<"       "<< name <<endl;
        cout << "tai khoan :" << tk<< endl;
        cout << "mat khau :" << mk<<endl;
        cout <<  "==============================="<<endl;
    }
    friend void writeToFile(ac, ofstream&);

};
void writeToFile(ac p, ofstream& ofs) {
	ofs.write((char*)& p, sizeof(ac));
}

void docfile(){
        ifstream ifs("E:/private/Acount.dat",ios::binary);
        ac p;
        if(!ifs) cout << "loi doc file" << endl;
        else{
            while(!ifs.eof()){
                ifs.read((char*)& p,sizeof(ac));
                if(ifs.good()){
                    p.show();
                }
            } 
        }
        ifs.close();
    }
void nhapfile(){
        ofstream ofs("E:/private/Acount.dat",ios::app |ios::binary);
        cout << " nhap so luong tai khoan :"<<endl;
        int t;
        cin >> t;
        for(int i= 0; i<t;++i){
            string name,tk,mk;
            cout << "nhap tai khoan thu "<< i+1<<" :"<<endl;
            cout << "nhap ten :"<< endl;
            fflush(stdin);
            getline(cin,name);
            cout << "nhap tk :"<<endl;
           fflush(stdin);
            getline(cin,tk);
            cout << "nhap mk :"<<endl;
           fflush(stdin);
             getline(cin,mk);
            ac p(name,tk,mk);
            writeToFile(p,ofs);
        }
        ofs.close();
    }
int main(){
    long long  passnd ,pass = 88888888;
    int dem= 0;
    do{
        cout << "      Nhap pass :";
        cin >> passnd;
        dem++;
        if(passnd != pass) cout << "    Pass sai =.=       Nhap lai" <<endl;
        if(dem >= 5) { cout << "good bye "; return 0;}
    } while(passnd != pass);
    cout << "    Pass dung " << endl;
    system("cls");
    int t=1;
    while(t== 1){
    cout << "Nhap file : press 1" << endl;
    cout << "Doc file  : press 2" << endl;
    cin >> t;
    system("cls");
    if(t == 1 ){ nhapfile(); cout << "xong (^!^)"<<endl; }
    else{ 
        docfile();
        cout << "thank you for watching "<<endl;;
    }
    int nd;
    cout <<"\n \n \n";
    cout<< "ban co muon tiep tuc ?" <<endl;
    cout<<"Yes -> Press 1" << endl;
    cout<<"No  -> Press 0" << endl;
    cin >> nd;
    system("cls");
    t = nd;
    }
    return 0;
}

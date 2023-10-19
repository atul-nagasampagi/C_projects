#include <iostream>
#include <wifi.h>
#include <common.h>

using namespace std;

int main()
{
    Wifi wifiobj;
    ifstream readFile;
    Wifi wifiarr[10];
    string wifiname, wifipassword, wificonnection;
    int wifistrength, index = 0, choice;

    readFile.open("wifidetails.txt",ios::in);

    if(!readFile.is_open()){
        cout<<"WifiDetails file not opened"<<endl;
        return 1;
    }

    while(readFile>>wifiname>>wifipassword>>wificonnection>>wifistrength){
        wifiarr[index].setWifiName(wifiname);
        wifiarr[index].setWifiPassWord(wifipassword);
        wifiarr[index].setConnectionStatus(wificonnection);
        wifiarr[index].setSignalStrength(wifistrength);
        index++;
    }

    readFile.close();

    for(int i=0;i<10;i++){
        cout<<i+1<<". "<<wifiarr[i].WifiName()<<" "<<wifiarr[i].ConnectionStatus()<<" "<<wifiarr[i].SignalStrength()<<endl;
    }

    while(true){
        cout<<"\nEnter any wifi to connect\n11. Forget Wifi Network\n12. Exit"<<endl;
        cin>>choice;
        switch(choice){
        case FORGETWIFINETWORK:
            int wifinumber;
            cout<<"Enter the wifi number:"<<endl;
            cin>>wifinumber;
            if((wifinumber>=1) &&(wifinumber<=10)){
                wifiobj.disconnectFromWifi(wifiarr,wifinumber);
                wifiobj.display(wifiarr);
            }else{
                cout<<"Please Enter correct Wifi Number"<<endl;
            }
            break;
        case EXIT:
            exit(0);
        default:
            wifiobj.validate(wifiarr,choice);
            wifiobj.display(wifiarr);
            break;
        }
    }

    return 0;
}

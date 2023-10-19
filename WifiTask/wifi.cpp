#include "wifi.h"

Wifi::Wifi()
{

}

Wifi::~Wifi()
{

}

string Wifi::WifiName() const
{
    return m_WifiName;
}

void Wifi::setWifiName(const string &newWifiName)
{
    m_WifiName = newWifiName;
}

string Wifi::WifiPassWord() const
{
    return m_WifiPassWord;
}

void Wifi::setWifiPassWord(const string &newWifiPassWord)
{
    m_WifiPassWord = newWifiPassWord;
}

string Wifi::ConnectionStatus() const
{
    return m_ConnectionStatus;
}

void Wifi::setConnectionStatus(const string &newConnectionStatus)
{
    m_ConnectionStatus = newConnectionStatus;
}

int Wifi::SignalStrength() const
{
    return m_SignalStrength;
}

void Wifi::setSignalStrength(int newSignalStrength)
{
    m_SignalStrength = newSignalStrength;
}

void Wifi::validate(Wifi* wifiarr, int a_choice)
{
    string l_password;
    bool decideConnection = false;

    if(wifiarr[a_choice-1].ConnectionStatus() == "Disconnected"){
        decideConnection = true;
    }

    if(decideConnection){
        cout<<"Enter Password to Connect"<<endl;
        cin>>l_password;
        bool flag = false;

        if(l_password == wifiarr[a_choice-1].WifiPassWord()){
            flag = true;
            cout<<"Connected to the Wifi: "<<wifiarr[a_choice-1].WifiName()<<endl;
            wifiarr[a_choice-1].setConnectionStatus("Connected");
        }

        if(flag){
            ofstream clearFile;
            clearFile.open("wifidetails.txt",ios::trunc);

            if(!clearFile.is_open()){
                cout<<"WifiDetails File Not Opened for Clearing"<<endl;
                return;
            }

            clearFile.close();

            ofstream writeFile;
            writeFile.open("wifidetails.txt",ios::out);

            if(!writeFile.is_open()){
                cout<<"WifiDetails File not Opened for Writing"<<endl;
                return;
            }

            for(int i=0;i<10;i++){
                writeFile<<wifiarr[i].WifiName()<<" "<<wifiarr[i].WifiPassWord()<<" "<<wifiarr[i].ConnectionStatus()<<" "<<wifiarr[i].SignalStrength()<<endl;
            }

            writeFile.close();
            return;
        }

        if(flag == false){
            cout<<"Incorrect Password"<<endl;
            return;
        }

    }else{
        cout<<"Already Connected to the Wifi: "<<wifiarr[a_choice-1].WifiName()<<endl;
        return;
    }
}

void Wifi::disconnectFromWifi(Wifi* wifiarr, int a_choice)
{
    bool flag = false;
    if(wifiarr[a_choice-1].ConnectionStatus() == "Connected"){
        flag = true;
        wifiarr[a_choice-1].setConnectionStatus("Disconnected");
    }

    if(flag){
        ofstream clearFile;
        clearFile.open("wifidetails.txt",ios::trunc);

        if(!clearFile.is_open()){
            cout<<"WifiDetails File Not Opened for Clearing"<<endl;
            return;
        }

        clearFile.close();

        ofstream writeFile;
        writeFile.open("wifidetails.txt",ios::out);

        if(!writeFile.is_open()){
            cout<<"WifiDetails File not Opened for Writing"<<endl;
            return;
        }

        for(int i=0;i<10;i++){
            writeFile<<wifiarr[i].WifiName()<<" "<<wifiarr[i].WifiPassWord()<<" "<<wifiarr[i].ConnectionStatus()<<" "<<wifiarr[i].SignalStrength()<<endl;
        }

        writeFile.close();
        cout<<"Disconnected from wifi: "<<wifiarr[a_choice-1].WifiName()<<endl;
        return;
    }else{
        cout<<"Wifi not Connected"<<endl;
        return;
    }
}

void Wifi::display(Wifi* wifiarr)
{
    for(int i=0;i<10;i++){
        cout<<i+1<<". "<<wifiarr[i].WifiName()<<" "<<wifiarr[i].ConnectionStatus()<<" "<<wifiarr[i].SignalStrength()<<endl;
    }
}

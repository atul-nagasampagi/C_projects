#ifndef WIFI_H
#define WIFI_H
#include <iostream>
#include <fstream>

using namespace std;

class Wifi
{
public:
    Wifi();
    ~Wifi();
    string WifiName() const;
    void setWifiName(const string &newWifiName);
    string WifiPassWord() const;
    void setWifiPassWord(const string &newWifiPassWord);
    string ConnectionStatus() const;
    void setConnectionStatus(const string &newConnectionStatus);
    int SignalStrength() const;
    void setSignalStrength(int newSignalStrength);

    void validate(Wifi*,int);
    void disconnectFromWifi(Wifi*,int);
    void display(Wifi*);

private:
    string m_WifiName;
    string m_WifiPassWord;
    string m_ConnectionStatus;
    int m_SignalStrength;
};

#endif // WIFI_H

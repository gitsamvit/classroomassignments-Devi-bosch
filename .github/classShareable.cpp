#include<iostream>
using namespace std;

class ICommunicationManager{

	public:
   virtual  void shareContent(string imagelink) =0;
};

class ImageGallery 
{
	string images[5] = { "one.jpg","two.jpg","three.jpg","four.jpg","fiv.jpg"};
public:void shareContent(int index,ICommunicationManager* comManager) {

    comManager->shareContent(images[index]);

}
};

class BluetoothManager : public ICommunicationManager{
public:
	void searchDevices() {}
    void pairdevice(){}
	void sendContent() {}
	void shareContent(string imagelink){
		
		cout<<"bluetooth"<<endl;
	}

	

		}

	
	
class WhatsUpManager : public ICommunicationManager{

    void turnOn() {}

    void turnOff() {}
	
	void shareContent() {}
	void joinGroup() {}
	void addMember(){}
	void createGroup() {}
	void shareContent(string imagelink){
		
		cout<<"whatup"<<endl;
	}

};

class MailManager:public ICommunicationManager {

	
	void pullNewMails() {}
	void senMails(){}
	void composeEmail(){}
	void addAttachement() {}
	void shareContent(string imagelink){
		
		cout<<"mail"<<endl;
	}

};

int main() {

	

	
	MailManager* _mailManager = new  MailManager();
	BluetoothManager* _bluetoothManager = new  BluetoothManager();
    WhatsUpManager* _whatsAppManager = new  WhatsUpManager();
	
	ImageGallery* imageMgmt = new  ImageGallery();
	imageMgmt->shareContent(0,_mailManager);
	imageMgmt->shareContent(0,_bluetoothManager);
    imageMgmt->shareContent(0, _whatsAppManager);
    

    return 0;

	
}
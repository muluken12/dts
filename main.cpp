#include<iostream>
using namespace std;
struct node{
    int id;
    int usrid;
    char order[30];
    char name [25];
    struct node*next;

};
node*start;
void create(int b, int n){

    node*temp,*front;
    start = new node;


//    cout<<"select service ";
//      for (int a=0;a<2;a++){
//         cout<<"select an option to reserve ";
//          cout<<"";
//    cin>>n;
//     cout<<"1. Room ";
//     cout<<"2. food  ";
//    cin>>start->id;     
    
    
    
    start->next=NULL;
    temp=start;

   for(int i=3;i<=b;i++){
        front=new node;
      
        

      //  cout<<"please insert "<<i<<" node";
        front->id;
         
        front->next=NULL;
        temp->next=front;

        temp=temp->next;

    
  }
}

void desplay(){
	    cout<<"the list after insert at the end\n";
	    desplay();
    if(start==NULL)
        cout<<"there is not list";
    else{
        struct node*temp;
        temp=new node;
        temp=start;
        cout<<"the list of the element\n";
        while(temp!=NULL)

        {
            cout<<temp->id;
            cout<<"\t";
            temp=temp->next;

        }
    }

    }




void insert(){
	int num,id,name;
	cout<<" enter your ID";
	    cin>>start->id;
	cout<<" enter your name";
	    cin>>name;
        	cout<<" enter your reserved room ";
	    cin>>num;
	  



    struct node*ne,*temp;
    temp=new node;
    ne=new node;
    cout<<"\nEnter the data at the last\n";
    cin>>ne->id;
    ne->next=NULL;
    temp=start;
    if(temp->next==NULL)
        temp->next=ne;
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ne;
    }}
void insert2(){

    struct node*ne,*temp;
    temp=new node;
    ne=new node;
    cout<<"\nEnter the data in the first\n";
    cin>>ne->id;
    ne->next=start;
    start=ne;
    /*
    if(temp->next==NULL)
        temp->next=ne;
    else
    {
        while(temp->next!=NULL)
        {
            temp->next=temp->next;
        }
        temp->next=ne;
    }
     */

}
void search(int key)
{ struct node*temp;
    temp=new node;
    temp=start;
    if(temp==NULL)
        cout<<"not have value";
    else
    {
        while(temp!=NULL){

            if(temp->id==key){

                cout<<"the element is"<<temp->id;
                break;
            }
            else
                temp=temp->next;
        }
    }
        cout<<"\n the key you search\n";
        cin>>key;
        search(key);
}
void delet()
{struct node*temp;
    temp=new node;

    temp=start;
    start=start->next;
    delete temp;
}
void delet2(){
int key;
    struct node*temp;
    temp=new node;
    temp=start;
    while(temp->next!=NULL) {
            temp = temp->next;
        }
    delete temp;
    if(temp->next == NULL) {
        delete temp;
    }

    cout<<"\n the key you search\n";
      cin>>key;
      search(key);
      delet();
      delet2();

    }
int main()
{
    int ch;
do{
	cout<<"welcome to hotel managment system "<<endl;
	cout<<"select number "<<endl;
	cout<<"1: To insert "<<endl;
	cout<<"2: TO display "<<endl;
	cout<<"3: To search "<<endl;
	cout<<"4: To Delete "<<endl;




	 int ter;
   // int n,key;

cout<<"select number "<<endl;
cin>>ter;
int n;

     switch(ter){

     case 1:
     	//cout<<"1 insert user ";
     	insert();
     	break;
     case 2:
    	 //cout<<"2 display user ";
		 desplay();
    	 break;
     case 3:
        //search(int);
    	 break;
     case 4:
    	
    	 delet();
         
     default:
    	 cout<<"input error ";


     }
    
     
     

//     for (int a=0;a<5;a++){
//         cout<<"select an option to reserve ";
//          cout<<"";
//    cin>>n;
// create(n);
//     }
   
//    cout<<"the list of recoured\n";

    //desplay();
    //cout<<" data you went recored insert the data";
    //cin>>num;
//    insert();
//    cout<<"the list after insert at the end\n";
//    desplay();
//    insert2();
//    desplay();
//    cout<<"\n the key you search\n";
//    cin>>key;
//    search(key);
//    delet();
//    delet2();
//    desplay();
 
cout<<"do you went to continue ?";
     cin>>ch;
}
while(ch=='y' || ch=='Y');
   
}


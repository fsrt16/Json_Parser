#include <iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

using namespace std;
struct nodes1{
	string as2 ;
	nodes1 *next1;
	} *head1;//it is equivalent to a2
	
void appendl1(string tittle)
	{
	nodes1 *temp=head1 ,*r ,*o ;
	if (head1==NULL)
	{
		head1=new nodes1;
		if(head1==NULL)
		{
			cout<<"NO MEMORY "<<endl;
			return;
		}
		head1->as2=tittle;
		head1->next1=NULL;
	}
	else
	{
		temp=head1;
		while (temp->next1!=NULL)
		{
			temp=temp->next1;
		}
		r=new nodes1;
		r->as2=tittle;
		r->next1=NULL;
		temp->next1=r;	
	}	
}
void addval_l1(char n , int p )
{
	int c=0;
	nodes1 *t;
	t=head1;
	while(t!=NULL)
	{
		if(c==p)
		{	
		t->as2=t->as2 + n;
		c++;
		t=t->next1;
		}
		else
		{
		c++;
		t=t->next1;
		}
		
	}
}
void displayl1_l1()
{
	nodes1 *temp;
	temp=head1;
	int c=0;
	cout<<"THE GENERAL FIELDS ARE :-->  "<<endl;
	while (temp!=NULL)
	{
		c++;
		cout<<temp->as2<<endl;
		temp=temp->next1;
	}
	cout<<endl;
}
void del_l1()
{
	nodes1 *t;
	t=head1;
	nodes1 *r;
	//cout<<"DELETING THE COMPLETE LINKED LIST "<<endl;
	while(t!=NULL)
	{
		
		r=t->next1;
		free(t);
		t=r;
	}
	head1=NULL;
}

struct nodes2
{
	string as7 ;
	nodes2 *next7;
} *head7; // a7 required elements[]
	
void appendl2(string tittle)
{
	//	cout<<"append-l2 called"<<endl;
	nodes2 *temp=head7 ,*r ,*o ;
	if (head7==NULL)
	{
		head7=new nodes2;
		if (head7==NULL)
		{
			cout<<"NO MEMORY "<<endl;
			return;
		}
		head7->as7=tittle;
		head7->next7=NULL;
	}
	else
	{
		temp=head7;
		while(temp->next7!=NULL){
		temp=temp->next7;
		}
		r=new nodes2;
		r->as7=tittle;
		r->next7=NULL;
		temp->next7=r;	
	}	
}
void addval_l2(char n , int p )
{
//cout<<"add value - l2"<<endl;
	int c=0;
	nodes2 *t;
	t=head7;
	while(t!=NULL)
	{
	if(c==p)
	{	
	t->as7=t->as7 + n;
	c++;
	t=t->next7;
	}
	else
	{
	c++;
	t=t->next7;
	}
		
	}
}
void displayl1_l2(){
nodes2 *temp;
temp=head7;
int c=0;
cout<<"THE REQUIRED FIELDS ARE :-->  "<<endl;
while(temp!=NULL){
	c++;
	cout<<temp->as7<<endl;
	temp=temp->next7;
}
cout<<endl;
}
void del_l2()
{
	nodes2 *t;
	t=head7;
	nodes2 *r;
	//cout<<"DELETING THE COMPLETE LINKED LIST "<<endl;
	while(t!=NULL)
	{
		
		r=t->next7;
		free(t);
		t=r;
	}
	head7=NULL;
}

struct nodes3{
	string as48 ;
	string id;
	string ty;
	nodes3 *next48;
	}*head48;// prperty type, description , key
	
void appendl3(string tittle)
	{
	nodes3 *temp=head48 ,*r ,*o ;
if(head48==NULL){
	head48=new nodes3;
	if(head48==NULL)
{
	cout<<"NO MEMORY "<<endl;
	return;}
	head48->as48=tittle;
	head48->id=tittle;
	head48->ty=tittle;
	head48->next48=NULL;
	}
else{
	temp=head48;
	while(temp->next48!=NULL){
	temp=temp->next48;
	}
	r=new nodes3;
	r->as48=tittle;
	r->id=tittle;
	r->ty=tittle;
	r->next48=NULL;
	temp->next48=r;	
}	
}

void addval_l3(char n , int p )
{

	int c=0;
	nodes3 *t;
	t=head48;
	while(t!=NULL)
	{
	if(c==p)
	{	
	t->as48=t->as48 + n;
	c++;
	t=t->next48;
	}
	else
	{
	c++;
	t=t->next48;
	}
		
	}
}
void addvalt_l3(char n , int p )
{

	int c=0;
	nodes3 *t;
	t=head48;
	while(t!=NULL)
	{
	if(c==p)
	{	
	t->ty=t->ty + n;
	c++;
	t=t->next48;
	}
	else
	{
	c++;
	t=t->next48;
	}
		
	}
}
void addvali_l3(char n , int p )
{

	int c=0;
	nodes3 *t;
	t=head48;
	while(t!=NULL)
	{
	if(c==p)
	{	
	t->id=t->id + n;
	c++;
	t=t->next48;
	}
	else
	{
	c++;
	t=t->next48;
	}
		
	}
}
void displayl1_l3(){
nodes3 *temp;
temp=head48;
int c=0;
//cout<<temp->as48<<"   :type:    "<<temp->ty<<endl;
cout<<"THE PROPERTIES ARE :-->  "<<endl;
while(temp!=NULL){
	c++;
	cout<<"id:-->  "<<temp->id<<endl<<"type:-->    "<<temp->ty<<endl<<"Description:-->  "<<temp->as48<<endl;
	temp=temp->next48;
}
cout<<endl;
}	
void del_l3()
{
	nodes3 *t;
	t=head48;
	nodes3 *r;
	//cout<<"DELETING THE COMPLETE LINKED LIST "<<endl;
	while(t!=NULL)
	{
		
		r=t->next48;
		free(t);
		t=r;
	}
	head48=NULL;
}

struct node1{
	string a ;
	node1 *next;
	}*hed;
	
void append1(string tittle)
	{
	node1 *temp=hed ,*r ,*o ;
if(hed==NULL){
	hed=new node1;
	if(hed==NULL)
{
	cout<<"NO MEMORY "<<endl;
	return;}
	hed->a=tittle;
	hed->next=NULL;
	}
else{
	temp=hed;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	r=new node1;
	r->a=tittle;
	r->next=NULL;
	temp->next=r;	
}	
}
void  D1(string n){
	node1 *temp,*old;
	temp=hed;
	while(temp!=NULL){
		if(temp->a==n){
		           	if(temp==hed){
			                 	hed=hed->next;
			                      }
			        else{
			                    old->next=temp->next;
	                    }
			delete temp;
				return;
		}
		
		else{
			old=temp;
			temp=temp->next;
			
		}
	}
}
void addval(char n , int p )
{
	//cout<<n<<"  "<<p<<"  ";
	int c=0;
	node1 *t;
	t=hed;
	while(t!=NULL)
	{
		if(c==p)
		{
		
			t->a=t->a + n;
			c++;
		
		t=t->next;
		}
		else
		{
			c++;
		t=t->next;
		}
		
	}
}
void displayl1(){
	node1 *temp;
 temp=hed;int c=0;
 while(temp!=NULL){
 	c++;
 	cout<<" node "<<c<<" --> "<<temp->a;
 	temp=temp->next;
 }
}

int search(int p)
{
	int c=0;
	node1 *t;
	t=hed;
	while(t!=NULL)
	{
		if(c==p)
		{
			if(t->a == "type")
               return 1;		
		    else
		    return 0;
		
		}
		else
		{
			c++;
		t=t->next;
		}	
	}
}
int searchp(int p)
{
	int c=0;
	node1 *t;
	t=hed;
	while(t!=NULL)
	{
		if(c==p)
		{
			if(t->a == "properties")
               return 1;		
		    else
		    return 0;
		
		}
		else
		{
			c++;
		t=t->next;
		}	
	}
}
struct node{
	char tittle ;
	 node *snext;
	}*head;
	
void append(char tittle)
	{
	node *temp=head ,*r ,*o ;
if(head==NULL){
	head=new node;
	if(head==NULL)
{
	cout<<"NO MEMORY "<<endl;
	return;}
	head->tittle=tittle;
	head->snext=NULL;
	}
else{
	temp=head;
	while(temp->snext!=NULL){
		temp=temp->snext;
	}
	r=new node;
	r->tittle=tittle;
	r->snext=NULL;
	temp->snext=r;	
}	
}
void  D(char n){
	node *temp,*old;
	temp=head;
	while(temp!=NULL){
		if(temp->tittle==n){
		           	if(temp==head){
			                 	head=head->snext;
			                      }
			        else{
			                    old->snext=temp->snext;
	                    }
			delete temp;
				return;
		}
		
		else{
			old=temp;
			temp=temp->snext;
			
		}
	}
}
void displayll(){
	node *temp;
 temp=head;
 while(temp!=NULL){
 	cout<<temp->tittle<<"  ";
 	temp=temp->snext;
 }
}
//function to store description part of the  properties
void prod(char g[50])
{

		int arr=0;
	int counter=1;
	int s=0,s1=0,m,c1=1;

	  ifstream file;
    file.open(g);
	if (!file.is_open())
    {
    cout<<"EROR WHILE OPENING ";  
    }

   else{
//    cout<<"READING FROM THE FILE CONTENTS "<<endl;
    string line;
    while (file.good()){

int m=0;

char a[300];
    getline(file,line);
    m=line.size();
   
    strcpy(a,line.c_str());
    for(int i=0;i<=m;i++)
    {
    	if(a[i]==34) // reading "
    	{
    		i++;
    		while(a[i]!=34) // reading end of "
    		{
			i++;	
			}
			i++;
		 
			if(a[i]==58 && a[i+1]==32 && a[i+2]==123) // checking for : {
		{  arr++;
		i=i+3;
	if(arr>1)
	{
	for(int l=0;getline(file,line) && l<counter;l++)
	{

		strcpy(a,line.c_str());
		   int n=line.size();
		   for(int i=0;i<=n;i++)
		   {
		   	if(a[i]==34) // checking for "
		   	{
		   	
		   			i++;
    		while(a[i]!=34) // reaching end of " 
    		{
			i++;	
			}
			i++;
			if(a[i]==58 && a[i+1]==32 )  // finding : 
			{
				if(a[i+2]==34) // checking for "
				{
				i=i+3;
				while(a[i]!=34) // end of  "
    		{
				append(a[i]);
			i++;
			
				}
			node *t;
			t=head;
			//appendl3("");
			while(t!=NULL)
		{
		  
		 addval_l3(t->tittle,s);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
		}
			s++;
			   }
	      else if(a[i+2]>=48 && a[i+2]<=57) // checking for a numeric digit for int type of value 
			  {
			  
			   	i=i+2;
			   	while(a[i]!=44) // checking for , 
			   	{
			   	append(a[i]);
			i++;
				   }
				  node *t;
			t=head;
			while(t!=NULL)
		{
	
		  addval_l3(t->tittle,s);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
		}
			s++;
				   
			   }
			    else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
}
			   
		}
		
			   
		   }
		
		}	
	}	
     }
}
}
}

}


}
}
// function for deducting the type part of propertires
void proe(char g[50])
{
//	cout<<"prod"<<endl;
	int arr=0;
	int counter=0;
	int s=0,s1=0,m,c1=1;
	
	  ifstream file;
   file.open(g);
	 if(!file.is_open())
    {

        cout<<"EROR WHILE OPENING ";    }

   else{
//    cout<<"READING FROM THE FILE CONTENTS "<<endl;
    string line;
    while(file.good()){

int m=0;


    getline(file,line);
    m=line.size();
    char *a=new char[m+1];
    strcpy(a,line.c_str());
    for(int i=0;i<=m;i++)
	{
		if(a[i]==34)
		{
		i++;
    		while(a[i]!=34)
    		{
    	
    		append(a[i]);
			i++;
				
			}
			
		
			node *t=head;
			append1("");
			while(t!=NULL)
		{
		  
		 addval(t->tittle,s);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
		}
	
		s++;
		int opi=search(s-1);
		
		if( opi==1 )
		{
				
		counter++;
		if(counter>1)
		{
		
//	cout<<"prodty"<<endl;
	if(a[i+1]==58 && a[i+2]==32 && a[i+3]==34)
			{
			//	cout<<"ENHANCE "<<endl;
				i=i+4;
				while(a[i]!=34)
    		{
    		append(a[i]);
			i++;
		
			}
				t=head;
				appendl3("");
			while(t!=NULL)
		{
		  
		 addvalt_l3(t->tittle,s1);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
		}
		s1++;	


				
			}
		}
		      else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
}
	}
	      else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
			
		
			
}
	
		
		}	
}
}
hed=NULL;
}
}


// function to store the value of propety kind in a6
void proi(char g[50])
{
		int arr=0;
	int counter=0;
	int s=0,s1=0,m,c1=1;
	
	  ifstream file;
   file.open(g);
	 if(!file.is_open())
    {

        cout<<"EROR WHILE OPENING ";    }

   else{
//    cout<<"READING FROM THE FILE CONTENTS "<<endl;
    string line;
    while(file.good()){

int m=0;

char a[300];
    getline(file,line);
    m=line.size();
    
    strcpy(a,line.c_str());
    for(int i=0;i<=m;i++)
    {
    	if(a[i]==34)
    	{
    		i++;
    		while(a[i]!=34)
    		{
    	
    		append(a[i]);
			i++;
			}
			
		 
			if(a[i+1]==58)
		{
				node *t;
			t=head;
			append1("");
			while(t!=NULL)
		{
		  
		 addval(t->tittle,s);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
			}
		 
		  s++;
		  int opiu=searchp(s-1); 
		  if(opiu == 1)
		  {
		  
		  arr++;
		  //this will help travel further starting from properties : {
		   for (int lineno = 0; getline (file,line) && lineno <=c1; lineno++)
		   {
		   	c1++;
		   strcpy(a,line.c_str());
		   int n=line.size();
		   for(int i=0;i<=n;i++)
		   {
		    if (a[i]==34)
          {
          	
    		i++;
    		while(a[i]!=34)
    		{
    	
    		append(a[i]);
			i++;
	
			}
			
		 i++;
		 
		
			if(a[i]==58 && a[i+1]==32 && a[i+2]==123)
		{
		
			node *t;
			t=head;
			while(t!=NULL)
		{
		  
		 addvali_l3(t->tittle,s1);
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
			}
          s1++;

      }
      else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
}
      
  }
		  }
		  
}
}
   
}
else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
}

}
 	

}

}
hed=NULL;

cout<<endl<<endl;
}
}


//to deduce the value of reduced and the required elements for the sme i []
void prof(char g[50])
{
		int arr=0;
	int counter=0;
	int s=0,s1=0,m,c1=-1;
    ifstream file;
    file.open(g);
    if(!file.is_open())
    {

        cout<<"EROR WHILE OPENING ";    }

   else{
 //   cout<<"READING FROM THE FILE CONTENTS "<<endl;
    string line;
    while(file.good()){

int m=0;

char a[300];
    getline(file,line);
    m=line.size();
    
    strcpy(a,line.c_str());
 for(int i=0;i<=m;i++)
 {
 	if(a[i]==34)
 	{
 			i++;
    		while(a[i]!=34)
    		{
    	
    		append(a[i]);
			i++;
			
			}
			
		 
			if(a[i+1]==58 && a[i+2]==91 )
		{
			
		node *t;
			t=head;
			while(t!=NULL)
		{
		  //a5[s]=a5[s]+t->tittle;
		 
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
		}
		  s++; 
		
	 }

	 
	    else if(a[i+1]==44 && a[i+2]==32 && a[i+3]==34)
	      {
	
				node *tp;
			tp=head;
			appendl2("");
			while(tp!=NULL)
		{
		 
		 addval_l2(tp->tittle,s1);
		  tp=tp->snext;	
		}
		node *p1t;
			p1t=head;
			while(p1t!=NULL)
			{
				char c=p1t->tittle;
				p1t=p1t->snext;
				D(c);
			}
          s1++;
          
		  
}
        else if(a[i+1]==93 )
	      {
	      	
	
	node *tp;
			tp=head;
			appendl2("");
			while(tp!=NULL)
		{
		
		 addval_l2(tp->tittle,s1);
		  tp=tp->snext;	
		}
		node *p1t;
			p1t=head;
			while(p1t!=NULL)
			{
				char c=p1t->tittle;
				p1t=p1t->snext;
				D(c);
			}
          s1++;
		  
}
else
{
		node *p2t;
			p2t=head;
			while(p2t!=NULL)
			{
				char c=p2t->tittle;
				p2t=p2t->snext;
				D(c);
			}
}
 	
 }
}
}

	
	
}
cout<<endl<<endl;
}

// function to store the basic lines of code in the same kind in a1 and a2 as per every schemea
void proc(char e[50])
{

int arr=0;
	int counter=0;
	int s=0,s1=0,m,c1=-1;
    
	ifstream file;
file.open(e);
    if(!file.is_open())
    {

        cout<<"EROR WHILE OPENING ";    }

   else{
  //  cout<<"READING FROM THE FILE CONTENTS "<<endl;
    string line;
    while(file.good()){

int m=0;

char a[300];
    getline(file,line);
    m=line.size();
    strcpy(a,line.c_str());
 for(int i=0;i<=m;i++)
    {
    	if(a[i]==34 && counter==0)
    	{
    		i++;
    		while(a[i]!=34)
    		{
    			
    			append(a[i]);
			i++;	
			}
			
			
		 if(a[i+1]==58 && a[i+2]==32 && a[i+3]!=123 ){
			node *t;
			t=head;
			while(t!=NULL)
		{
		  //a1[s]=a1[s]+t->tittle;
		 
		  t=t->snext;	
		}
		node *pt;
			pt=head;
			while(pt!=NULL)
			{
				char c=pt->tittle;
				pt=pt->snext;
				D(c);
			}
		  s++; 
		  	i++;
		while(a[i]!=34)
		{
			i++;
		}
		i++;
			while(a[i]!=34)
    		{
    	
    		append(a[i]);
    		
			i++;
			
			}
			node *tp;
			tp=head;
			appendl1("");
			while(tp!=NULL)
		{
		  
		 addval_l1(tp->tittle,s1);
		  tp=tp->snext;	
		}
		node *p1t;
			p1t=head;
			while(p1t!=NULL)
			{
				char c=p1t->tittle;
				p1t=p1t->snext;
				D(c);
			}
		 
		  s1++; 
		
	}
	
	}
         if(a[i+1]==58 && a[i+2]==32 && a[i+3]==123)
	{
		counter++;
		
		
	}



	}

}
}


}

void call(char g[50])
{
proe(g);
prod(g);
proc(g);
proi(g);
prof(g);
//displayl1_l1();
//del_l1();
//displayl1_l2();
//del_l2();
//displayl1_l3();
//del_l3();
//cout<<endl<<endl;
}

//code:  
struct kv //KV
{
	string type;
	string desc;
	string key;
	string value;//default=" "
	bool isRequired;//def=false
	kv *next;
};

struct Json			//node of SLL of JSON objects
{
	kv *head;
	int count;
	Json *next;
};

struct Schema		//node of BST
{
	Json *head;
	int count;
	string signature;
	string type;
	string title;
	string desc;
	string req;
	Schema *right;//pRht
	Schema *left;//pLft
}*root=NULL;//pRoot

kv* createNode(string key,string value,string type,string desc)
{
	kv *temp=new kv;
	temp->key=key;
	temp->value=value;
	temp->type=type;
	temp->desc=desc;
	temp->next=NULL;
	return temp;
}

Json* createNode(kv *head,int count)
{
	Json *temp=new Json;
	temp->head=head;
	temp->count=count;
	temp->next=NULL;
	return temp;
}

Schema* createNode(Json *head,int count,string title,string desc,string type,string signature,string req)
{
	Schema *temp=new Schema;
	temp->count=count;
	temp->desc=desc;
	temp->head=head;
	temp->left=NULL;
	temp->right=NULL;
	temp->signature=signature;
	temp->title=title;
	temp->type=type;
	temp->req=req;
	return temp;
}

long toDecimal(string hex)
{
	hex=&hex[2];
	long dec=0;
	for(int i=0;i<hex.length();i++)
	{
		if(hex[i]<='9'&&hex[i]>='0')
		{
			dec+=int(hex[i]-'0')*pow(16,hex.length()-1-i);
		}
		else
		{
			dec+=(int(hex[i]-'a')+10)*pow(16,hex.length()-1-i);
		}
	}
	return dec;
}
	
kv* insert_node(kv* head,string key,string value,string type,string desc)
{
	kv *temp=createNode(key,value,type,desc);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		kv *t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
	return head;
}

Json *insert_node(Json *head,kv *h,int count)
{
	Json *temp=createNode(h,count);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		Json *t=head;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
	return head;
}
void pr(Schema *temp)
{
	cout<<"CALLED"<<endl;
	cout<<"{"<<endl;
	cout<<"\t\"$schema\": \"https://sigmaways.com/hiot/ack/schema#\","<<endl;
	cout<<"\t\"title\": \""<<temp->title<<"\",\n";
	cout<<"\t\"description\": \""<<temp->desc<<"\",\n";
	cout<<"\t\"type\": \""<<temp->type<<"\",\n";
	cout<<"\t\"signature\": \""<<temp->signature<<"\",\n";
	cout<<"\t\"properties\": {\n";
	Json *t=temp->head;
	
	kv *h=t->head;

	while(h!=NULL)
	{
	cout<<"\t\t\""<<h->key<<"\": {\n";
	cout<<"\t\t\t\"description\": \""<<h->desc<<"\",\n";
	cout<<"\t\t\t\"type\": \""<<h->type<<"\"\n";
	if(h->next!=NULL)
	cout<<"\t\t},\n\n";
	else
	cout<<"\t\t}\n\n";		
	h=h->next;
	}
	cout<<"\b";
	cout<<"\t}\n";

}

struct n
{
	Schema *t;
	
	Schema *nxt;
}*had=NULL;

struct ult
{
	n *t;
	string sign;
	ult *nrt;
}*hd=NULL;
void appendu(n *t,string sign)
	{
	ult *temp=hd ,*r ,*o ;
	if (hd==NULL)
	{
		hd=new ult;
		if(hd==NULL)
		{
			cout<<"NO MEMORY "<<endl;
			return;
		}
		hd->t=t;
		hd->sign=sign;
		hd->nrt=NULL;
		cout<<hd->sign<<endl;
	//	pr(hd->t->t);
		//cout<<hd->sign<<endl;
	
	
	}
	else
	{
		temp=hd;
		while (temp->nrt!=NULL)
		{
			temp=temp->nrt;
		}
		r=new ult;
		r->t=t;
		r->sign=sign;
		cout<<r->sign<<endl;
		//cout<<r->sign<<endl;
		r->nrt=NULL;
		//	pr(r->t->t);
	temp->nrt=r;	
	}	
}
void addpro(n *t)
{
	t->t->head=insert_node(t->t->head,NULL,0);
				nodes3 *a6=head48;
				while (a6!=NULL)
				{
					t->t->head->head=insert_node(t->t->head->head,a6->id," ",a6->ty,a6->as48);
					a6=a6->next48;
				}
}
void appendn(Schema *t,Schema *root,string sign)
	{
	n *temp=had ,*r ,*o ;
	t->head=NULL;
	if (had==NULL)
	{
		had=new n;
		if(had==NULL)
		{
			cout<<"NO MEMORY "<<endl;
			return;
		}
		//cout<<t->title<<endl;
		had->t=t;
		//cout<<had->t->title<<endl;
		had->nxt=root;
		addpro(had);
	
		appendu(had,sign);
	}
	else
	{
	/*	temp=had;
		while (temp->nxt!=NULL)
		{
			temp=temp->nxt;
		}*/
		r=new n;
		r->t=t;
		r->nxt=root;
		addpro(r);
	
		appendu(r,sign);
	//	temp->nxt=r;	
	}	
}
Schema *insert_node(Schema *root,Json *head,int count,string title,string desc,string type,string signature,string req)
{
	Schema *temp=createNode(head,count,title,desc,type,signature,req);
	if(root==NULL)
	{
		
		root=temp;
		cout<<"Inserted : "<<temp->title<<endl;
		cout<<"  "<<root->signature<<endl;
}
	else
	{
		long sig=toDecimal(signature);
		long rootsig=toDecimal(root->signature);
		if(rootsig<sig)
		{
			root->right=insert_node(root->right,head,count,title, desc, type, signature,req);
		}
		else if(rootsig>sig)
		{
			root->left=insert_node(root->left,head,count,title, desc, type, signature,req);
		}
		else
		{
	
			appendn(temp,root,signature);
			
		
		}
	}
	return root;
}

Schema *search(Schema *root,string signature)
{
	if(root==NULL)
	{
		cout<<"Invalild Signature";
		return NULL;
	}
	long sign=toDecimal(signature);
	long rsign=toDecimal(root->signature);
	if(rsign==sign)
	{
	
	
		return root;
		
		
	}
	else if(rsign<sign)
	{
		return search(root->right,signature);
	}
	else if(rsign>sign)
	{
		return search(root->left,signature);
	}
}

int getSchemaCount(Schema *root,int count)
{
	if(root==NULL)
		return count;
	count++;
	count=getSchemaCount(root->right,count);
	count=getSchemaCount(root->left,count);
	return count;
}

int getJsonCount(Json *head)
{
	int c=0;
	Json *t=head;
	while(t!=NULL)
	{
		t=t->next;
		c++;
	}
	return c;
}

void pr1(string sign)
{
ult *p;
	p=hd;
//	cout<<p->sign<<endl;
	
	while(p != NULL)
	{
	//	cout<<p->sign<<endl;
		if(p->sign == sign)
		{
			
			pr(p->t->t);
			p=p->nrt;
		}
		else{
			p=p->nrt;
		}
	}

}
void printSchema(Schema *root,string sign,int s)
{
	if(s!=2&&s!=1)
	{
		cout<<"Invalid choice!...\n";
		return;
	}
	Schema *temp=search(root,sign);
	Json *t=temp->head;
	if(s==1)
	{
		cout<<"{"<<endl;
		cout<<"\t\"$schema\": \"https://sigmaways.com/hiot/ack/schema#\","<<endl;
		cout<<"\t\"title\": \""<<temp->title<<"\",\n";
		cout<<"\t\"description\": \""<<temp->desc<<"\",\n";
		cout<<"\t\"type\": \""<<temp->type<<"\",\n";
		cout<<"\t\"signature\": \""<<temp->signature<<"\",\n";
	}
	cout<<"\t\"properties\": {\n";
	kv *h=t->head;
	while(h!=NULL)
	{
		cout<<"\t\t\""<<h->key<<"\": {\n";
		cout<<"\t\t\t\"description\": \""<<h->desc<<"\",\n";
		cout<<"\t\t\t\"type\": \""<<h->type<<"\"\n";
		if(h->next!=NULL)
		cout<<"\t\t},\n\n";
		else
		cout<<"\t\t}\n\n";		
		h=h->next;
	}
	cout<<"\b";
	cout<<"\t}\n";
		if(s==1)
		{
		
			cout<<"\n}\n";
			
	pr1(sign);
	
}
	
}

void printProp(kv *phead)
{
	kv *ph=phead;
	cout<<"\t\"properties\": {\n";
	while(ph!=NULL)
	{
		cout<<"\t\t\""<<ph->key<<"\": {\n";
		cout<<"\t\t\t\"description\": \""<<ph->desc<<"\",\n";
		cout<<"\t\t\t\"type\": \""<<ph->type<<"\"\n";
		if(ph->next!=NULL)
		cout<<"\t\t},\n\n";
		else
		cout<<"\t\t}\n\n";		
		ph=ph->next;
	}
	cout<<"\t}\n";
}

string getfrom2(nodes1 *head,int pos)
{
	nodes1 *h=head;
	int  p=0;
	while (h!=NULL &&  p<pos)
	{
		p++;
		h=h->next1;
	}
	if (h==NULL)
	return " ";
	return h->as2;
}

int searchKey(kv *h,string key)
{
	kv *temp=h;
	while(temp!=NULL)
	{
		if(temp->key==key)
		return 1;
		temp=temp->next;
	}
	return 0;
}

kv* merge(kv *h1,kv *h2)
{
	kv *h=new kv;
	h=NULL;
	kv *t1=h1;
	kv *t2=h2;
	while(t1!=NULL)
	{
		h=insert_node(h,t1->key,t1->value,t1->type,t1->desc);
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		if(!searchKey(h,t2->key))
		{
			h=insert_node(h,t2->key,t2->value,t2->type,t2->desc);
		}
		t2=t2->next;
	}
	printProp(h);
	return h;
}

//code

int main()
{
	string filename,sig;
	int choice=1;
	do
	{
		switch(choice)
		{
			case 2:
				cout<<"Enter the signature of the schema to be checked: ";
				cin>>sig;
				if(search(root,sig))
				{
					int ch;
					cout<<"Enter your choice: ";
					cout<<"\n1. Whole Schema";
					cout<<"\n2. Properties only  ";
					cin>>ch;
					printSchema(root,sig,ch);
				}
				else
				{
					cout<<"Entry not found!\n";
				}
				break;
			case 3:
				if(getSchemaCount(root,0)>=2)
				{
					cout<<"Enter the signature of file 1: ";
					string s1,s2;
					cin>>s1;
					cout<<"Enter the signature of file 2: ";
					cin>>s2;
					Schema *pt1=search(root,s1);
					Schema *pt2=search(root,s2);					
					if(pt1&&pt2)
					{
						//cout<<"ME";
						kv *pmerged=merge(pt1->head->head,pt2->head->head);
					}
				}
				else
				{
					cout<<"Min count for Merging is 2\nCurrent count of schemas is: "<<getSchemaCount(root,0);
					break;
				}
				break;
			case 4:
				exit(0);
			case 1:
				cout<<"Enter the file name: ";
				cin>>filename;
				char *c=new char[filename.length()+1];
				strcpy(c,filename.c_str());
				call(c);
				string required="[";
				nodes2 *a7=head7;
				while (a7!=NULL)
				{
					required+="\""+a7->as7;
					if (a7->next7!=NULL)
					{
						required+="\", ";
					}
					a7=a7->next7;
				}
				required+="\"]";
				root=insert_node(root,NULL,0,getfrom2(head1,1),getfrom2(head1,2),getfrom2(head1,3),getfrom2(head1,4),required);
				Schema *temp=search(root,getfrom2(head1,4));
				temp->head=insert_node(temp->head,NULL,0);
				nodes3 *a6=head48;
				while (a6!=NULL)
				{
					temp->head->head=insert_node(temp->head->head,a6->id," ",a6->ty,a6->as48);
					a6=a6->next48;
				}
//				printSchema(root,getfrom2(head1,4));
				del_l1();
				del_l2();
				del_l3();
				break;
		}
		cout<<"\nEnter your choice: \n";
		cout<<"1. Add a new Entry";
		cout<<"\n2. Check for an entry through signature(hexadecimal format)";
		cout<<"\n3. Merge\n4. Exit";
		cin>>choice;
	} while (choice<5);
}
	


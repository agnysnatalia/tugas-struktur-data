#include <iostream>

using namespace std;

struct data_students {
	char name [20];
	char NIM[8];
};

struct student_groups {
	struct data_students chief;
	struct data_students member[2];
} group[3]; //Inisialisai variabel structure dilakukan sekaligus dengan deklarasi structure

int main ()
{
	for(int i=0;i<3;++i) //i = no group
	{
		cout<<"\n\nGROUP"<<i+1;
		cout<<"\n\tCHIEF"<<"\n\tNAME :";
		cin>>group[i].chief.name;
		cout<<"\tNIM :";
		cin>>group[i].chief.NIM;
	
			for(int j=0;j<2;++j) //j = no member
		{
			cout<<"\n\tMEMBER"<<j+1;
			cout<<"\n\tName :";
			cin>>group[i].member[j].name;
			cout<<"\tNIM :";
			cout<<"\nMember :";
		}
	}
		
		for(int i=0;i<3;++i)
		
		{
			cout<<"\nGROUP"<<i+1;
			cout<<"\nChief :"<<group[i].chief.name;
			cout<<"\nMember :";
		
		for(int j=0;j<2;++j)
		{
			cout<<"\n\t"<<group[i].member[j].name;
			cout<<"("<<group[i].member[j].NIM<<")";
			
		}
		}
	
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

bool gusubir()
{
    int y;
    cout << "subiramwo gutora umwanya 1. ego  2& guheba   ";
    cin>>y;
    if(y==1)
            return true;
    else
        return 0;
}
bool gusubiramwo()
{
    int y;
    cout << "subiramwo muri uwo mwanya 1. ego  2.oya   ";
    cin>>y;
    if(y==1)
            return true;
    else
        return false;
}

void kazoza()
{
string irivuga;


	do{

    cout << "Andika irivuga mu kirundi" << endl;

    cin>> irivuga;

    if (irivuga.find('k')==0||irivuga.find('g')==0&&irivuga.find('u')||irivuga.find('w')==1)
    {

    irivuga.erase(0,2);


    if (irivuga.find('a')==0||irivuga.find('i')==0||irivuga.find('u')==0||irivuga.find('o')==0||irivuga.find('e')==0)
    {


        cout<< "nz"<< "okw"<< irivuga<< '\n';
         cout<< "uz"<< "okw"<< irivuga<< '\n';
         cout<< "az"<< "okw"<< irivuga<< '\n';
          cout<< "baz"<< "okw"<< irivuga<< '\n';
           cout<< "tuz"<<"okw"<< irivuga<< '\n';
             cout<< "muz"<< "okw"<< irivuga<< '\n';


    }
    else if (irivuga.find('a')!=0||irivuga.find('i')!=0||irivuga.find('u')!=0||irivuga.find('o')!=0||irivuga.find('e')!=0)
       { cout<< "nzo"<< irivuga<< '\n';
         cout<< "uzo"<< irivuga<< '\n';
         cout<< "azo"<< irivuga<< '\n';
          cout<< "bazo"<< irivuga<< '\n';
           cout<< "tuzo"<< irivuga<< '\n';
             cout<< "muzo"<< irivuga<< '\n';
       }


    }


    else
    {
        cout<< "iryo si irivuga"<< '\n';
    }
	}while (gusubiramwo());
}

int main()
{
    do
    {
    cout<< "mushaka guhadikiriza mu mwanya wahe??\n Andika 1 nimba ari kubu canke 2 nimba ari kazoza:\n ";
    int s;
    cin>> s;

	string irivuga;
       if(s==1)
       {
	do{

    cout << "Andika irivuga mu kirundi\n" << endl;

    cin>> irivuga;

    if (irivuga.find('k')==0||irivuga.find('g')==0&&irivuga.find('u')||irivuga.find('w')==1)
    {

    irivuga.erase(0,2);


    if (irivuga.find('a')==0||irivuga.find('i')==0||irivuga.find('u')==0||irivuga.find('o')==0||irivuga.find('e')==0)
    {

        cout<< "nd"<< irivuga<< '\n';
         cout<< "ur"<< irivuga<< '\n';
         cout<< "ar"<< irivuga<< '\n';
          cout<< "bar"<< irivuga<< '\n';
           cout<< "tur"<< irivuga<< '\n';
             cout<< "mur"<< irivuga<< '\n';


    }
    else if (irivuga.find('a')!=0||irivuga.find('i')!=0||irivuga.find('u')!=0||irivuga.find('o')!=0||irivuga.find('e')!=0)
       {cout<< "nda"<< irivuga<< '\n' ;
         cout<< "ura"<< irivuga<< '\n' ;
         cout<< "ara"<< irivuga<< '\n' ;
          cout<< "bara"<< irivuga<< '\n' ;
           cout<< "tura"<< irivuga<< '\n';
             cout<< "mura"<< irivuga<< '\n';
       }

    }


    else
    {
        cout<< "iryo si irivuga\n"<< '\n';
    }
	}while (gusubir());
}
  else
  {
  	do{
            kazoza();
            }while(gusubir());
  }
}while(gusubiramwo());
    return 0;
}


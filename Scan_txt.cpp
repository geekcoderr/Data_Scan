#include<bits/stdc++.h>
#include<fstream>
#include<cctype>
#include<iostream>
#include<unistd.h>
using namespace std;
int autm_fn(){
  int whitespace = 0,digits = 0,calpha = 0,salpha = 0,pnc = 0;
  int b2=0,b3=0,oth=0,oth_=0,s=0,qna=0,prcnt=0,astrk=0,excl=0,at=0,hash=0,dollar=0,sqr=0,andi=0,parno=0,parncl=0,minus=0,plus=0,undr=0,eq=0,sqbo=0,sqbc=0,brao=0,brac=0,sl=0,cln=0,smcln=0,pn0=0,pn=0,dot=0,sep=0;
  string dex_var=("");
  char lop[1000];
  cout<<" @Coder_nishant\n\n Welcome to File Analyser (An Automated File analyzer) !!\n\n";
  cout<<" Enter file location or file name(if Same Dir.) to Scan file -->> ";
  cin.get(lop,1000);
  ifstream root;
  root.open(lop,ios::in | ios::out);
  if (root.fail()){
    cout<<"\n! There was an error while Accessing the file... << "<<lop<<"\n\n Please Wait Terminal is restarting ..";
	for(int i=0;i<5;i++){
		sleep(1);
        cout<<".";
	}
  sleep(4);
	cout<<"\n !! Unable to Reestabish Processes , May be system memory error !! .. \n\n";
	exit(0);
  }
  char ty;
  while(root)
  {
    root>>ty;
    char ch=ty;
    if(ch>=97 && ch<=122) salpha++;
    else if(ch>=65 && ch<=90) calpha++;
    else if(ch>=48 && ch<=57) digits++;
    else if(ch==32) whitespace++;
    else {
      switch(ch){
        case '!':excl++;break;case '?':qna++;break;case '*':astrk++;break;case '@':at++;break;case '%':prcnt++;break;case '~':oth++;break;case '`':oth_++;break;
        case '#':hash++;break;case '$':dollar++;break;case '^':sqr++;break;case '&':andi++;break;case '(':parno++;break;case ')':parncl++;break;
        case '-':minus++;break;case '+':plus++;break;case '_':undr++;break;case '=':eq++;break;case '[':sqbo++;break;case ']':sqbc++;break;
        case '{':brao++;break;case '}':brac++;break;case '/':sl++;break;case ':':cln++;break;case ';':smcln++;break;case '"':pn0++;break;
        case '\'':pn++;break;case '.':dot++;break;case ',':sep++;break;case '|':s++;break;case '<':b2++;break;case '>':b3++;break;default:break;
      }
     pnc++;
    }
  }
  root.close();
  cout<<"\n Your Text Contains, \n Whitespaces : ( "<<whitespace<<" )\n Digits : ( "<<digits<<" )\n Uppercase Alphabet : ( "<<calpha<<" )\n Lowercase Alphabet : ( "<<salpha<<" )\n Puncuations : ( "<<pnc<<" )"
  <<"\n\n !!!! Now Some Spetial Characters !!!! \n\n \t ************* \n [?] : "<<qna<<"\n [%] : "<<prcnt<<"\n [*] : "<<astrk<<"\n [!] : "<<excl<<"\n [@] : "<<at<<"\n [#] : "<<hash<<"\n [$] : "<<dollar<<"\n [^] : "<<sqr<<"\n [&] : "<<andi<<"\n [(] : "<<parno<<"\n [)] : "<<parncl<<"\n [-] : "<<minus
  <<"\n [+] : "<<plus<<"\n [_] : "<<undr<<"\n [=] : "<<eq<<"\n [[] : "<<sqbo<<"\n []] : "<<sqbc<<"\n [{] : "<<brao<<"\n [}] : "<<brac<<"\n [/] : "<<sl<<"\n [:] : "<<cln<<"\n [;] : "<<smcln<<"\n [\"] : "<<pn<<"\n ['] : "<<pn0<<"\n [.] : "<<dot<<"\n [,] : "<<sep
  <<"\n [|] : "<<s<<"\n [<] : "<<b2<<"\n [>] : "<<b3<<"\n [~] : "<<oth<<"\n [`] : "<<oth_<<"\n\n \t ************* \n"
  <<"\n Total Characters :: [ "<<whitespace+digits+calpha+salpha+pnc<<" ] \n\n\n\n";
 getchar();
 }
int main()
{
  system("reset");
  autm_fn();
  exit(0);
}

//input character and check it is character or not

 #include<iostream.h>
 #include<conio.h>
 void main()
 {clrscr();
 char a;
 cout<<"enter single char";
 cin>>a;
 if (a=='a'||a=='A'||a=='e'||a=='i'||a=='E'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
 {
 cout<<"char is vovel";
}
else
{
cout<<" char is no vovel";
}
 getch();
 }
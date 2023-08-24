#include<iostream>
using namespace std;

struct student{
int rolln;
int marks;
};
const int totalMarks = 30;

student stn[128];

int main(){
for(int i = 1; i<=127; i++){
stn[i-1].rolln = i;
/*askagain:
cout<<"Enter student marks of roll number "<<stn[i].rolln<<": "; 
cin>>stn[i].marks;
if(stn[i].marks > totalMarks)
goto askagain;*/
}
stn[0].marks = 19;
stn[1].marks = 13;
stn[2].marks = 20;
stn[3].marks = 0;
stn[4].marks = 10;
stn[5].marks = 0;
stn[6].marks = 0;
stn[7].marks = 20;
stn[8].marks = 19;
stn[9].marks = 0;
stn[10].marks = 26;
stn[11].marks = 20;
stn[12].marks = 0;
stn[13].marks = 21;
stn[14].marks = 0;
stn[15].marks = 0;
stn[16].marks = 17;
stn[17].marks = 20;
stn[18].marks = 0;
stn[19].marks = 21;
stn[20].marks = 21;
stn[21].marks = 0;
stn[22].marks = 0;
stn[23].marks = 11;
stn[24].marks = 22;
stn[25].marks = 16;
stn[26].marks = 0;
stn[27].marks = 0;
stn[28].marks = 0;
stn[29].marks = 0;
stn[30].marks = 0;
stn[31].marks = 0;
stn[32].marks = 23;
stn[33].marks = 0;
stn[34].marks = 0;
stn[35].marks = 0;
stn[36].marks = 16;
stn[37].marks = 15;
stn[38].marks = 0;
stn[39].marks = 0;
stn[40].marks = 0;
stn[41].marks = 0;
stn[42].marks = 19;
stn[43].marks = 13;
stn[44].marks = 0;
stn[45].marks = 14;
stn[46].marks = 19;
stn[47].marks = 16;
stn[48].marks = 19;
stn[49].marks = 19;
stn[50].marks = 20;
stn[51].marks = 0;
stn[52].marks = 0;
stn[53].marks = 0;
stn[54].marks = 0;
stn[55].marks = 0;
stn[56].marks = 23;
stn[57].marks = 20;
stn[58].marks = 17;
stn[59].marks = 22;
stn[60].marks = 0;
stn[61].marks = 0;
stn[62].marks = 0;
stn[63].marks = 0;
stn[64].marks = 18;
stn[65].marks = 19;
stn[66].marks = 16;
stn[67].marks = 10;
stn[68].marks = 18;
stn[69].marks = 24;
stn[70].marks = 15;
stn[71].marks = 25;
stn[72].marks = 21;
stn[73].marks = 14;
stn[74].marks = 24;
stn[75].marks = 17;
stn[76].marks = 19;
stn[77].marks = 18;
stn[78].marks = 16;
stn[79].marks = 25;
stn[80].marks = 20;
stn[81].marks = 21;
stn[82].marks = 18;
stn[83].marks = 16;
stn[84].marks = 18;
stn[85].marks = 24;
stn[86].marks = 18;
stn[87].marks = 22;
stn[88].marks = 20;
stn[89].marks = 22;
stn[90].marks = 23;
stn[91].marks = 17;
stn[92].marks = 27;
stn[93].marks = 0;
stn[94].marks = 14;
stn[95].marks = 21;
stn[96].marks = 21;
stn[97].marks = 16;
stn[98].marks = 18;
stn[99].marks = 16;
stn[100].marks = 23;
stn[101].marks = 21;
stn[102].marks = 25;
stn[103].marks = 16;
stn[104].marks = 21;
stn[105].marks = 0;
stn[106].marks = 21;
stn[107].marks = 27;
stn[108].marks = 26;
stn[109].marks = 15;
stn[110].marks = 16;
stn[111].marks = 22;
stn[112].marks = 22;
stn[113].marks = 20;
stn[114].marks = 24;
stn[115].marks = 23;
stn[116].marks = 14;
stn[117].marks = 16;
stn[118].marks = 11;
stn[119].marks = 11;
stn[120].marks = 24;
stn[121].marks = 21;
stn[122].marks = 24;
stn[123].marks = 19;
stn[124].marks = 19;
stn[125].marks = 16;
stn[126].marks = 24;
for(int j = 1; j<=127;j++)
for(int i= 1; i<=127;i++)
{
if(stn[i].marks < stn[i+1].marks){
int swap = 0;
swap = stn[i].rolln;
stn[i].rolln = stn[i+1].rolln;
stn[i+1].rolln = swap;
swap = stn[i].marks;
stn[i].marks = stn[i+1].marks;
stn[i+1].marks = swap;
}
}
cout<<"RANK\t"<<"ROLL Number\t"<<"Marks\n";
for(int i = 1; i<=127;i++){
cout<<i<<(i==1? "st":(i==2 ? "nd":(i==3?"ird":"th")))<<"\t"<<stn[i].rolln<<"\t\t"<<stn[i].marks<<endl;
}
}

//UPDATE V2.0
//Try this new one COPY and Paste





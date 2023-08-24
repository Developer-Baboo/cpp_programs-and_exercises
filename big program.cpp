
#include <iostream>
#include <cstdlib> // es function k pass decleration hy rand() ki aor srand() ki bhi
#include <ctime>

using namespace std;

int main()
{

srand(time(NULL));
// srand func lagane se pure random numver generate hoty hy

int rollNumber,taskNumber;

rollNumber = rand()% 127;// te 127 range hy jo modulus k zariye ham laga sakhty hy ap 5 lagao ge to 5 k limit hii numbrr generate kare ga

taskNumber = rand() % 10;

cout<<"Roll Number: "<< rollNumber;

switch(taskNumber)
{
case 1: cout<<"zara nach k dikha de"; break;
case 2: cout<<"koi achaw sa ghana suna de"; break;
case 3: cout<<" zindage m kabhi chori ki hy"; break;
case 4: cout<<"kiya kabhi mohabat ki hy kisi k sath"; break;
case 5: cout<<" sir larik se dar lagta hy?"; break;
case 6: cout<<"suppose bolna kis se sikha"; break;
case 7: cout<<"kiya koi class m apko pasand hy"; break;
case 8: cout<<"Mid Term m kitni mehnat ki sachy batao"; break;
case 9: cout<<"main apko kesa lagta hn"; break;
}
}

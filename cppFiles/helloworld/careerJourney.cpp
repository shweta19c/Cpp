#include<iostream>
int main()
{
  int option;
  int branch;
  int stream;
  int field;
  int pathway;
  std::cout<<"My Programming career journey started with completing 10th board exam.\n";
  std::cout<<"After finishing 10th class what to do next?\n";
  std::cout<<"I have 3 options to decide from:\n\n";
std::cout<<"1) Science \n";
std::cout<<"2) Commerce \n";
std::cout<<"3) Arts \n";
std::cout<<"Enter your answer between (1-3):\n";
std::cin>>option;
switch(option)
{ 
  case 1:
  std::cout<<"Enrolled in Science stream.\n";
  break;
  case 2:
  std::cout<<"Enrolled in Commerce stream.\n";
  break;
  case 3:
  std::cout<<"Enrolled in Arts stream.\n";
  break;
  default:
  std::cout<<"Other\n";
}
for(int grade = 11; grade < 13; grade++)
{
  std::cout<<"You are in "<< grade <<"th grade in the" <<stream <<"stream.\n";
}
std::cout<<"\n";
std::cout<<"Finished 12th class. What to do next?\n";
std::cout<<"I have 4 options to decide from:\n\n";
std::cout<<"But Most suitable for me is Engineering in computer science or Information Technology.\n";
std::cout<<"1) Bsc \n";
std::cout<<"2) Engineering \n";
std::cout<<"3) Medical \n";
std::cout<<"4) Architecture \n";
std::cout<<"Enter your answer between (1-4)\n";
std::cin>>branch;
while(branch!=2)
{
  std::cout<<"Opted for Wrong branch, Choose again.\n";
}
if(branch==2)
{
  std::cout<<"Opted for Engineering field.\n";
}

std::cout<<"There are several branches in Engineering. which one to go for? \n";
std::cout<<"I like Computers and Technology.So I should probably go for Information Technology.\n";
std::cout<<"Here are some options to choose from:\n\n";
std::cout<<"1) Computer Science \n";
std::cout<<"2) Information Technology \n";
std::cout<<"3) Civil Engineering \n";
std::cout<<"4) Mechanical Engineering \n";
std::cout<<"5) Electrical Engineering \n";
std::cout<<"6) Electronics and Telecommunication Engineering\n";
std::cout<<"7) Aerospace Engineering \n";
std::cout<<"Choose any stream from these 7 options in engineering field\n";
std::cin>>stream;
while(stream!=2)
{
  std::cout<<"Opted for wrong stream.Please choose carefully and Enter again:\n";
}
 if(stream==2)
{
  std::cout<<"Opted for Information Technology.\n";
}

for(int year=1; year<=4; year++)
{
  std::cout<<"You are in "<<year <<"st year of Information Technology.\n";
}
//std::cout<<"Completed Engineering in Information Technology\n";
std::cout<<"What to do next?\n";
std::cout<<"I have 4 Pathways to choose from:\n";
std::cout<<"1) Post Graduation \n";
std::cout<<"2) MBA \n";
std::cout<<"3) Job as junior Software Engineer or Developer. \n";
std::cout<<"4) Prepare for Upsc exam and join as civil servant (IAS/IPS/IFS/IRS) \n";
std::cout<<"Choose between (1-4) Career Pathways.\n";
std::cin>>field;
while(field!=3)
{
  std::cout<<"Selected wrong path. Please choose again.\n";
}
  if(field==3)
{
  std::cout<<"selected path to join as a junior software engineer or Junior Developer.\n";
}

std::cout<<"What the future goal in this journey or future path to go for as per your choice?\n";
std::cout<<"There are several future job roles to look for in Information technology industry.\n";
std::cout<<"Here are some future job roles suitable for you: \n\n";
std::cout<<"1) Senior Software Engineer \n";
std::cout<<"2) Web Developer \n";
std::cout<<"3) Application Developer \n";
std::cout<<"4) Frontend Developer \n";
std::cout<<"5) Backend Developer \n";
std::cout<<"6) Fullstack Developer \n";
std::cout<<"7) Data Scientist \n";
std::cout<<"Select suitable job roles between (1-7): \n";
std::cin>>pathway;
if(pathway==1)
{
  std::cout<<"Selected role as a Senior Software engineer. \n";
}
else if(pathway==2)
{
  std::cout<<"Selected role as a Web developer.\n";
}
else if(pathway==3)
{
  std::cout<<"Selected role as Application developer.\n";
}
else if(pathway==4)
{
  std::cout<<"Selected role as a Frontend developer.\n";
}
else if(pathway==5)
{
  std::cout<<"Selected role as a Backend developer.\n";
}
else if(pathway==6)
{
  std::cout<<"Selected role as a Fullstack developer. \n";
}
else if(pathway==7)
{
  std::cout<<"Selected role as a Data Scientist. \n";
}
else
{
  std::cout<<"Any other job role in Information technology will be accepted.\n";
}
}

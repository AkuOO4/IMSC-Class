show databases;
create database COMPANY;
use COMPANY;
create table Employee(SSN varchar(50) primary key not null,Fname 
varchar(30),Lname varchar(30) null,Address varchar(50),Sex varchar(20) default 
'Male',Salary int(30) check(Salary>10000),SuperSSN varchar(20) unique,DNO varchar(20));
desc Employee;
create table Department(DNO varchar(20) primary key,Dname
varchar(20),MgrSSN varchar(20),MgrStartDate date not null);
create table DLocation(DNO varchar(20) primary key,DLOC varchar(20) primary key);
create table Project(PNO varchar(20) primary key,PName
varchar(30),PLocation varchar(20),DNO varchar(20),constraint dno_project foreign
key(DNO) references Department(DNO));
desc Project;
create table WORKS_ON(SSN varchar(20) primary key,PNO varchar(20),Hours
integer);


desc WORKS_ON;
desc Employee;
desc Project;
desc WORKS_ON;
desc DEpartment;

 insert into Employee 
values("e1001","Raj","Sharma","Mumbai","Male",15000,"s1001","d01",22);

 insert into Employee 
values("e1002","Ria","Chopra","Chennai","Female",20000,"s1002","d02",22);

 insert into Employee 
values("e1003","Hira","Mohammed","Kochi","Female",17000,"s1003","d03",20);

insert into Employee 
values("e1004","Simran","S","Chennai","Female",15000,"s1004","d04",21);

insert into Employee 
values("e1005","Ashwin","K","Mumbai","Male",25000,"s1005","d05",21);

select *from Employee;
insert into Department values("d02","Finance","m1002","2022-04-07");
insert into Department values("d03","Sales","m1003","2022-08-18");
 insert into Department values("d04","Human 
Resources","m1004","2022-02-17");
 insert into Department values("d05","Management","m1005","2021-12-17");
 select *from Department;
create table Project(PNO varchar(20) primary key,PName 
varchar(30),PLocation varchar(20),DNO varchar(20),constraint dno_project foreign
key(DNO) references Department(DNO));

insert into DLocation values("d01","Chennai");
insert into DLocation values("d02","Mumbai");
insert into DLocation values("d03","Delhi");
insert into DLocation values("d04","Mumbai");
insert into DLocation values("d05","Chennai");

select *from DLocation;
  
 insert into Project values("p1001","Project Synergy","Chennai","d01");
 insert into Project values("p1002","Project Point","Mumbai","d02");
  insert into Project values("p1003","Strategic Program","Delhi","d03");
insert into Project values("p1004","Apollo","Mumbai","d04");
insert into Project values("p1005","Astron","Chennai","d05");
   
insert into works_on values("e1001","p1001",7);
insert into works_on values("e1002","p1002",10);
insert into works_on values("e1003","p1003",9);
insert into works_on values("e1004","p1004",10);   
insert into works_on values("e1005","p1005",4);
  
select *from works_on;
Update Employee set Salary=25000 where SSN="e1002";
select *from Employee;
select *from Employee;
create user 'user1'@'localhost' identified by 'password';
grant select on Company.employee to 'user1'@'localhost';
 show grants for 'user1'@'localhost';
  grant all on Company.employee to 'user1'@'localhost';
  show grants for 'user1'@'localhost';
Revoke all on Employee from 'user1'@'localhost';
show grants for 'user1'@'localhost';

Select fname from Employee where fname like '%a_';
Select Sex,count(*) from Employee group by Sex;
Select avg(Salary) from Employee where Sex="Female";
Select sum(Salary) from Employee where sex = "Male";
 Select max(Salary),min(Salary) from Employee where sex="Male";
 Update Employee set Salary=40000 where SSN ="e1003";
 
select *from Employee;
select *from Employee where Salary between 25000 and 50000;
select lname from Employee where Salary=30000 or Salary=40000 or Salary =
50000;
 
 





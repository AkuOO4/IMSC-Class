create database db;
use db;
create table country
(country_code varchar(10) ,
country_name varchar(100),
primary key(country_code));

insert into country values
('IN','India'),
('SL','SriLanka'),
('PK','Pakistan'),
('BN','Bangladesh'),
('NP','Nepal');

desc country;
select *FROM country;

create table capital(
	capital_id varchar(10),
	country_code varchar(10),
    capital_name varchar(100),
    primary key(Capital_id),
    foreign key(country_code) references country(country_code)
    );
    
desc capital;

insert into capital values
	('C1','IN','New Delhi'),
    ('C2','PK','Islamabad'),
    ('C3','NP','Katmandu');
    
select *from country left join capital on country.country_code=capital.country_code
union
select *from country right join capital on country.country_code=capital.country_code;

/* 
Joining 3 tables
select *from table1 inner join table2 on tabke1.id=table2.id inner join table3 on table2.id=table3.id;
*/
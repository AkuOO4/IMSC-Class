-- Active: 1668763177616@@127.0.0.1@3306@COMPANY
show databases;

create database COMPANY;
use COMPANY;
create table EMPLOYEE(
	SSN  char(5) primary key,
    Name varchar(20),
    Address varchar(50),
    Sex varchar(1),
    Salary int,
    SuperSSN char(5),
    Dno int
    );



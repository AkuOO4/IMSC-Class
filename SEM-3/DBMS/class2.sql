use db;

/*     STRING FUNCTIONS*/

select lower('Aku');
select upper('aku');

select char(5);

select concat('hello',' aku');
select substr('hello aku',7,3);
select instr('hello aku','ak');
select length('hello aku');
select mid('hello aku',4,3);

select left('hello aku',5);
select right('hello aku',3);
select right(country_name,3) from country;

select round(45.9652,2);
select round(45.9652,-1);

select *from country;

select truncate(45.9256,2);
select mod(10,3);
select pow(10,3);

/*TIME FUNCTIONS*/

select sysdate();
select current_date();
select now();

select date('2004-01-04');
select day('2004-01-04');
select dayname('2004-01-04');
select dayofmonth('2004-01-04');
select dayofweek('2004-01-04');
select dayofyear('2004-01-04');







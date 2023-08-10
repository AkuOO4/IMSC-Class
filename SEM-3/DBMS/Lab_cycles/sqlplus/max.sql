declare
    n number;
    m number;
begin
    n:=&number;
    m:=&number;

if n<m then
    dbms_output.put_line(''|| n ||' IS GREATER THAN '|| m ||'');
else 
    dbms_output.put_line(''|| m ||' IS GREATER THAN '|| n ||'');
end if ;
end;
/

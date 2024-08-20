--Lab 11


SELECT * FROM STU_INFO;

SELECT * FROM RESULT;

SELECT * FROM EMPLOYEE_MASTER;


--A

--1 Combine information from student and result table using cross join or Cartesian product
SELECT * FROM STU_INFO CROSS JOIN RESULT;

--2 Perform inner join on Student and Result tables
SELECT * FROM STU_INFO INNER JOIN RESULT ON STU_INFO.Rno=RESULT.Rno;

--3 Perform the left outer join on Student and Result tables
SELECT * FROM STU_INFO LEFT OUTER JOIN RESULT ON STU_INFO.Rno=RESULT.Rno;

--4 Perform the right outer join on Student and Result tables 
SELECT * FROM STU_INFO RIGHT OUTER JOIN RESULT ON STU_INFO.Rno=RESULT.Rno;

--5 Perform the full outer join on Student and Result tables
SELECT * FROM STU_INFO FULL OUTER JOIN RESULT ON STU_INFO.Rno=RESULT.Rno;

--6 Display Rno, Name, Branch and SPI of all students
SELECT stu_info.RNo,stu_info.Name,result.SPI 
from STU_INFO 
FULL OUTER JOIN 
result 
on 
stu_info.Rno=result.Rno;

--7 Display Rno, Name, Branch and SPI of CE branch’s student only
SELECT stu_info.RNo,stu_info.Name,result.SPI 
from STU_INFO 
JOIN 
result 
on 
stu_info.Rno=result.Rno
where 
stu_info.branch='CE';

--8 Display Rno, Name, Branch and SPI of other than EC branch’s student only
SELECT stu_info.RNo,stu_info.Name,stu_info.Branch,result.SPI 
from STU_INFO 
JOIN 
result 
on 
stu_info.Rno=result.Rno
where STU_INFO.branch <> 'EC';

--9 Display average result of each branch
select stu_info.Branch,AVG(result.SPI) as 'Average' 
from STU_INFO
join
result
on 
stu_info.Rno=result.Rno
group by stu_info.branch;

--10 Display average result of CE and ME branch
select stu_info.Branch,AVG(result.SPI) as 'Average' 
from STU_INFO
join
result
on 
stu_info.Rno=result.Rno
where stu_info.branch='CE' or stu_info.branch='ME'
group by stu_info.branch;


--B

--1 Display average result of each branch and sort them in ascending order by SPI
select stu_info.Branch,AVG(result.SPI) as 'Average' 
from STU_INFO
join
result
on 
stu_info.Rno=result.Rno
group by stu_info.branch
order by avg(result.SPI);

--2 Display highest SPI from each branch and sort them in descending order
select stu_info.Branch,MAX(result.SPI) as 'Highest' 
from STU_INFO
join
result
on 
stu_info.Rno=result.Rno
group by stu_info.branch
order by max(result.SPI) DESC;


--C

--1 Retrieve the names of employee along with their manager’s name from the Employee table
select e.Name as'Employee',em.Name as'Manager'
from EMPLOYEE_MASTER e
join
EMPLOYEE_MASTER em
on e.ManagerNo=em.EmployeeNo;
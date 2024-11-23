--LAB 12


SELECT * FROM PERSON;
SELECT * FROM DEPT;


--A

--1 Find all persons with their department name & code
select person.PersonName,dept.DepartmentName,dept.DepartmentCode 
from person 
left outer join 
dept 
on 
person.DepartmentId=dept.DepartmentID;

--2 Find the person's name whose department is in C-Block
select person.PersonName 
from person 
join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where dept.location='C-Block';

--3 Retrieve person name, salary & department name who belongs to Jamnagar city
select person.PersonName,person.Salary,dept.DepartmentName
from person 
join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where person.city='Jamnagar';

--4 Retrieve person name, salary & department name who does not belong to Rajkot city
select person.PersonName,person.Salary,dept.DepartmentName
from person 
join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where not person.city='Rajkot';

--5 Retrieve person’s name of the person who joined the Civil department after 1-Aug-2001
select person.PersonName 
from person 
join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where dept.DepartmentName='Civil' 
and
person.JoiningDate>'2001-08-01';

--6 Find details of all persons who belong to the computer department
select person.PersonID,person.PersonName,Person.Salary,person.JoiningDate,person.City
from person 
join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where dept.DepartmentName='Computer';

--7 Display all the person's name with the department whose joining date difference with the current date 
--is more than 365 days
select person.PersonName,dept.DepartmentName
from person 
left join 
dept 
on 
person.DepartmentId=dept.DepartmentID
where datediff(day,person.JoiningDate,getdate())>=365;

--8 Find department wise person counts
select dept.DepartmentName,count(*) as 'Total_Employees'
from person
join 
dept
on
person.DepartmentId=dept.DepartmentId
group by dept.DepartmentName;

--9 Give department wise maximum & minimum salary with department name
select dept.DepartmentName,max(person.salary) as 'Max_Salary',min(person.salary) as 'Min_Salary'
from person
join 
dept
on
person.DepartmentId=dept.DepartmentId
group by dept.DepartmentName;

--10 Find city wise total, average, maximum and minimum salary
select City,sum(salary) as 'Total_Salary',avg(salary) as 'Avg_Salary',max(salary) as 'Max_Salary',min(salary) as 'Min_Salary'
from person
group by City;

--11 Find the average salary of a person who belongs to Ahmedabad city
select City,avg(salary) as 'Avg_Salary'
from person
group by City
having City='Ahmedabad';

--12 Produce Output Like: <PersonName> lives in <City> and works in <DepartmentName> Department
select person.PersonName+' lives in '+person.City+' and works in '+dept.DepartmentName+' Department' as 'Info'
from person
join 
dept
on 
person.DepartmentId=dept.DepartmentId;



--B

--1 Produce Output Like: <PersonName> earns <Salary> from <DepartmentName> department monthly
select person.PersonName+' earns '+cast(person.Salary as varchar(100))+' from '+dept.DepartmentName+' department monthly' as 'Info'
from person
join 
dept
on 
person.DepartmentId=dept.DepartmentId;

--2 Find city & department wise total, average & maximum salaries
select person.City,dept.DepartmentName,sum(person.salary) as 'Total_Salary',avg(person.salary) as 'Avg_Salary',max(person.salary) as 'Max_Salary',min(person.salary) as 'Min_Salary'
from person
join
dept
on person.DepartmentId=dept.DepartmentId
group by person.City,dept.departmentName;

--3 Find all persons who do not belong to any department
select PersonName from person where departmentId is null;

--4 Find all departments whose total salary is exceeding 100000
select dept.DepartmentName,sum(person.salary) as 'Total_Salary'
from person
join 
dept
on
person.DepartmentId=dept.DepartmentId
group by dept.DepartmentName
having sum(person.salary)>100000;



--C

--1 List all departments who have no person
select dept.DepartmentName
from person
join 
dept
on
person.DepartmentId=dept.DepartmentId
group by dept.DepartmentName
having count(*)=0;

--2 List out department names in which more than two persons are working
select dept.DepartmentName,count(*) as 'Total_Employees'
from person
join 
dept
on
person.DepartmentId=dept.DepartmentId
group by dept.DepartmentName
having count(*)>2;

--3 Give a 10% increment in the computer department employee’s salary(Use Update)
update person 
set person.salary=person.salary+(person.salary/10)
where person.departmentId in 
	(select person.departmentId 
	from person
	join 
	dept
	on 
	person.departmentId=dept.departmentId
	where dept.departmentName='Computer');
select * from person;
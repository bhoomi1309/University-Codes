--LAB 2

--Part – A 
--1. Department, Designation & Person Table’s INSERT, UPDATE & DELETE Procedures. 

-- Create Department Table
CREATE TABLE Department (
 DepartmentID INT PRIMARY KEY,
 DepartmentName VARCHAR(100) NOT NULL UNIQUE
);

create or alter procedure PR_Department_Insert
@DeptId int,
@DeptName varchar(100)
as 
begin
	insert into Department values (@DeptId,@DeptName)
end

exec PR_Department_Insert 1,'Admin'
exec PR_Department_Insert 2,'IT'
exec PR_Department_Insert 3,'HR'
exec PR_Department_Insert 4,'Account'

create or alter procedure PR_Department_Update
@DeptId int,
@DeptName varchar(100)
as 
begin
	update Department
	set DepartmentName=@DeptName
	where DepartmentId=@DeptId
end

exec PR_Department_Update 4,'Accountt'
exec PR_Department_Update 4,'Account'

create or alter procedure PR_Department_Delete
@DeptId int
as 
begin
	delete from Department
	where DepartmentID=@DeptId
end

exec PR_Department_Delete 4

select * from Department

-- Create Designation Table
CREATE TABLE Designation (
 DesignationID INT PRIMARY KEY,
 DesignationName VARCHAR(100) NOT NULL UNIQUE
);

create or alter procedure PR_Designation_Insert
@DesignationId int,
@DesignationName varchar(100)
as 
begin
	insert into Designation values (@DesignationId,@DesignationName)
end

exec PR_Designation_Insert 11,'Jobber'
exec PR_Designation_Insert 12,'Welder'
exec PR_Designation_Insert 13,'Clerk'
exec PR_Designation_Insert 14,'Manager'
exec PR_Designation_Insert 15,'CEO'

create or alter procedure PR_Designation_Update
@DesignationId int,
@DesignationName varchar(100)
as 
begin
	update Designation
	set DesignationName=@DesignationName
	where DesignationId=@DesignationId
end

exec PR_Designation_Update 14,'Accountt'
exec PR_Designation_Update 14,'Manager'

create or alter procedure PR_Designation_Delete
@DesignationId int
as 
begin
	delete from Designation
	where DesignationId=@DesignationId
end

exec PR_Designation_Delete 14

select * from Designation;


-- Create Person Table
CREATE TABLE Person (
 PersonID INT PRIMARY KEY IDENTITY(101,1),
 FirstName VARCHAR(100) NOT NULL,
 LastName VARCHAR(100) NOT NULL,
 Salary DECIMAL(8, 2) NOT NULL,
 JoiningDate DATETIME NOT NULL,
 DepartmentID INT NULL,
 DesignationID INT NULL,
 FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID),
 FOREIGN KEY (DesignationID) REFERENCES Designation(DesignationID)
);

create or alter procedure PR_Person_Insert
@FirstName varchar(100),
@LastName varchar(100),
@Salary int,
@JoiningDate Datetime,
@DeptId int,
@DesignationId int
as 
begin
	insert into Person values (@FirstName,@LastName,@Salary,@JoiningDate,@DeptId,@DesignationId)
end

exec PR_Person_Insert 'Rahul','Anshu',56000,'1990-01-01',1,12
exec PR_Person_Insert 'Hardik','Hinsu',18000,'1990-09-25',2,11
exec PR_Person_Insert 'Bhavin','Kamani',25000,'1991-05-14',null,11
exec PR_Person_Insert 'Bhoomi','Patel',39000,'2014-02-20',1,13
exec PR_Person_Insert 'Rohit','Rajgor',17000,'1990-07-23',2,15
exec PR_Person_Insert 'Priya','Mehta',25000,'1990-10-18',2,null
exec PR_Person_Insert 'Neha','Trivedi',18000,'2014-02-20',3,15

create or alter procedure PR_Person_Update
@PersonId int,
@FName varchar(100),
@LName varchar(100),
@Salary int,
@JoiningDate Datetime,
@DeptId int,
@DesignationId int
as 
begin
	update Person
	set FirstName=@FName,
		LastName=@LName,
		Salary=@Salary,
		JoiningDate=@JoiningDate,
		DepartmentId=@DeptId,
		DesignationId=@DesignationId
	where PersonId=@PersonId
end

exec PR_Person_Update 105,'Raghav','Gaur',50000,'1990-07-23',2,14
exec PR_Person_Update 105,'Rohit','Rajgor',17000,'1990-07-23',2,15

create or alter procedure PR_Person_Delete
@PersonId int
as 
begin
	delete from Person
	where PersonId=@PersonId
end

exec PR_Person_Delete 104

select * from Person

--2. Department, Designation & Person Table’s SELECTBYPRIMARYKEY 
create or alter procedure PR_Department_SELECTBYPRIMARYKEY
@DeptId int
as
begin
	select * from Department where DepartmentId=@DeptId
end

exec PR_Department_SELECTBYPRIMARYKEY 1

create or alter procedure PR_Designation_SELECTBYPRIMARYKEY
@DesignationId int
as
begin
	select * from Designation where DesignationId=@DesignationId
end

exec PR_Designation_SELECTBYPRIMARYKEY 12

create or alter procedure PR_Person_SELECTBYPRIMARYKEY
@PersonId int
as
begin
	select * from Person where PersonId=@PersonId
end

exec PR_Person_SELECTBYPRIMARYKEY 102

--3. Department, Designation & Person Table’s (If foreign key is available then do write join and take 
--columns on select list) 

create or alter procedure PR_Department_SelectAll
as
begin
	select * from Department
end

exec PR_Department_SelectAll

create or alter procedure PR_Designation_SelectAll
as
begin
	select * from Designation
end

exec PR_Designation_SelectAll

create or alter procedure PR_Person_SelectAll
as
begin
	select Person.*, Department.DepartmentName,Designation.DesignationName
	from Person
	join Department 
	on Person.DepartmentId=Department.DepartmentId
	join Designation
	on Person.DesignationId=Designation.DesignationId
end

exec PR_Person_SelectAll

--4. Create a Procedure that shows details of the first 3 persons.
create or alter procedure PR_Person_Top_3
as
begin
	select top 3 Person.*, Department.DepartmentName,Designation.DesignationName
	from Person
	join Department 
	on Person.DepartmentId=Department.DepartmentId
	join Designation
	on Person.DesignationId=Designation.DesignationId
end

exec PR_Person_Top_3


--PART B

--5. Create a Procedure that takes the department name as input and returns a table with all workers 
--working in that department. 

create or alter procedure PR_Dept_Workers
@DeptName varchar(100)
as 
begin
	select D.DepartmentName,P.*
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	where D.DepartmentName=@DeptName
end

exec PR_Dept_Workers 'Admin'

--6. Create Procedure that takes department name & designation name as input and returns a table with 
--worker’s first name, salary, joining date & department name. 

create or alter procedure PR_Dept_Desination_Workers
@DeptName varchar(100),
@DesignationName varchar(100)
as 
begin
	select P.FirstName,P.Salary,P.Joiningdate,D.DepartmentName
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	join Designation
	on P.DesignationId=Designation.DesignationId
	where D.DepartmentName=@DeptName
		and Designation.DesignationName=@DesignationName
end

exec PR_Dept_Desination_Workers 'Admin','Welder'

--7. Create a Procedure that takes the first name as an input parameter and display all the details of the 
--worker with their department & designation name. 

create or alter procedure PR_FirstName_Worker
@FName varchar(100)
as 
begin
	select P.*,D.DepartmentName,Designation.DesignationName
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	join Designation
	on P.DesignationId=Designation.DesignationId
	where P.FirstName=@Fname
end

exec PR_FirstName_Worker 'Hardik'

--8. Create Procedure which displays department wise maximum, minimum & total salaries. 

create or alter procedure PR_Dept_Salary_Min_Max_Total
as 
begin
	select D.DepartmentName,max(Salary) as Maximum,min(Salary) as Minimum,sum(Salary) as Total
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	group by D.DepartmentName
end

exec PR_Dept_Salary_Min_Max_Total

--9. Create Procedure which displays designation wise average & total salaries. 

create or alter procedure PR_Designation_Salary_Avg_Total
as 
begin
	select D.DesignationName,avg(Salary) as Average,sum(Salary) as Total
	from Person P
	join Designation D
	on P.DesignationId=D.DesignationId
	group by D.DesignationName
end

exec PR_Designation_Salary_Avg_Total


--PART C

--10. Create Procedure that Accepts Department Name and Returns Person Count. 

create or alter procedure PR_Dept_Count
@DeptName varchar(100)
as 
begin
	select D.DepartmentName,count(*) as PersonCount
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	group by D.DepartmentName
	having D.DepartmentName=@DeptName
end

exec PR_Dept_Count 'Admin'

--11. Create a procedure that takes a salary value as input and returns all workers with a salary greater than 
--input salary value along with their department and designation details. 

create or alter procedure PR_Salary_GreaterThan
@Salary int
as 
begin
	select P.*,D.DepartmentName,Designation.DesignationName
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	join Designation
	on P.DesignationId=Designation.DesignationId
	where P.Salary>@Salary
end

exec PR_Salary_GreaterThan 25000

--12. Create a procedure to find the department(s) with the highest total salary among all departments. 

create or alter procedure PR_Max_Total_salary
as 
begin
	SELECT D.DepartmentName,SUM(P.Salary) AS TotalSalary
    FROM Department D
    LEFT JOIN Person P
    ON D.DepartmentID = P.DepartmentID
    GROUP BY D.DepartmentName
    HAVING SUM(P.Salary) = (
		select max(TotalSalary) as Maximum 
		from (
			select sum(Salary) as TotalSalary 
			from Person 
			group by DepartmentId
			) P
	)
end

exec PR_Max_Total_salary

--13. Create a procedure that takes a designation name as input and returns a list of all workers under that 
--designation who joined within the last 10 years, along with their department. 

create or alter procedure PR_Designation_Workers_10Years
@DName varchar(100)
as 
begin
	select Designation.DesignationName,P.*,D.DepartmentName
	from Person P
	join Department D
	on P.DepartmentId=D.DepartmentId
	join Designation
	on P.DesignationId=Designation.DesignationId
	where DesignationName=@DName
		and datediff(year,P.JoiningDate,getdate())<=10
end

exec PR_Designation_Workers_10Years 'CEO'

--14. Create a procedure to list the number of workers in each department who do not have a designation 
--assigned. 

create or alter procedure PR_Dept_NoDesignation
as
begin
	SELECT D.DepartmentName,COUNT(P.PersonID) AS WorkersWithoutDesignation
    FROM Department D
    LEFT JOIN Person P
    ON D.DepartmentID = P.DepartmentID
        AND P.DesignationID IS NULL
    GROUP BY 
        D.DepartmentName;
end

exec PR_Dept_NoDesignation

--15. Create a procedure to retrieve the details of workers in departments where the average salary is above 
--12000. 

create or alter procedure PR_AvgSalary_GreaterThan
as 
begin
	select Person.*,Department.DepartmentName
	from Person
	join Department
	on Person.DepartmentID=Department.DepartmentID
	where Department.DepartmentName in (
		select D.DepartmentName
		from Person P
		join Department D
		on P.DepartmentId=D.DepartmentId
		group by D.DepartmentName
		having avg(Salary)>12000
	);
end

exec PR_AvgSalary_GreaterThan
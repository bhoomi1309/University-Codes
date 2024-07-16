--Lab_7

--AGGREGATE FUNCTION AND GROUP BY (WITHOUT HAVING)

CREATE TABLE EMP(
	EID INT,
	EName VARCHAR(25),
	Department VARCHAR(25),
	Salary INT,
	JoiningDate DATETIME,
	City VARCHAR(25)
);

INSERT INTO EMP VALUES (101,'Rahul','Admin',56000,'1990-01-01','Rajkot');
INSERT INTO EMP VALUES (102,'Hardik','IT',18000,'1990-09-25','Ahmedabad');
INSERT INTO EMP VALUES (103,'Bhavin','HR',25000,'1991-05-14','Baroda');
INSERT INTO EMP VALUES (104,'Bhoomi','Admin',39000,'1991-02-08','Rajkot');
INSERT INTO EMP VALUES (105,'Rohit','IT',17000,'1990-07-23','Jamnagar');
INSERT INTO EMP VALUES (106,'Priya','IT',9000,'1990-10-18','Ahmedabad');
INSERT INTO EMP VALUES (107,'Bhoomi','HR',34000,'1991-12-25','Rajkot');

SELECT * FROM EMP;


--A

--1 Display the Highest, Lowest, Label the columns Maximum, Minimum respectively
SELECT MAX(Salary) as 'Maximum', MIN(Salary) as 'Minimum' from EMP;

--2 Display Total, and Average salary of all employees Label the columns Total_Sal and Average_Sal respectively
SELECT SUM(Salary) as 'Total_Sal', AVG(Salary) as 'Average_Sal' from EMP;

--3 Find total number of employees of EMPLOYEE table
SELECT COUNT(EID) as 'Total_Employees' from EMP;

--4 Find highest salary from Rajkot city
SELECT CITY,MAX(Salary) as 'Maximum' from EMP where City='Rajkot' GROUP BY City;

--5 Give maximum salary from IT department
SELECT Department,MAX(Salary) as 'Maximum' from EMP where Department='IT' group by department;

--6 Count employee whose joining date is after 8-feb-91
SELECT COUNT(EID) as 'Total_Employees' from EMP WHERE JoiningDate>'8-feb-91';

--7 Display average salary of Admin department
SELECT Department,AVG(Salary) as 'Average' from EMP where Department='Admin' GROUP BY Department;

--8 Display total salary of HR department
SELECT Department,SUM(Salary) as 'Total_Salary' from EMP where Department='HR' GROUP BY Department;

--9 Count total number of cities of employee without duplication
SELECT count(distinct city) as 'Distinct_City' from EMP;

--10 Count unique departments
SELECT count(distinct Department) as 'Distinct_Department' from EMP;

--11 Give minimum salary of employee who belongs to Ahmedabad
SELECT CITY,MIN(Salary) as 'Minimum' from EMP where City='Ahmedabad' group by city;

--12 Find city wise highest salary
SELECT CITY,MAX(Salary) as 'Maximum' from EMP GROUP BY City;

--13 Find department wise lowest salary
SELECT Department,MIN(Salary) as 'Minimum' from EMP GROUP BY Department;

--14 Display city with the total number of employees belonging to each city
SELECT CITY,COUNT(EID) as 'Total_Employees' from EMP GROUP BY City;

--15 Give total salary of each department of EMP table
SELECT Department,SUM(Salary) as 'Total_Salary' from EMP GROUP BY Department;

--16 Give average salary of each department of EMP table without displaying the respective department name
SELECT AVG(Salary) as 'Average_Salary' from EMP GROUP BY Department;


--B

--1 Count the number of employees living in Rajkot
SELECT COUNT(EID) AS 'Total_Employees' from EMP WHERE CITY='Rajkot' GROUP BY City;

--2 Display the difference between the highest and lowest salaries Label the column DIFFERENCE
SELECT MAX(SALARY)-MIN(SALARY) AS 'DIFFERENCE' FROM EMP;

--3 Display the total number of employees hired before 1st January, 1991
SELECT COUNT(EID) AS 'HIRED_BEFORE_1st Jan 1991' FROM EMP WHERE JoiningDate<'1-jan-91'; 


--C

--1 Count the number of employees living in Rajkot or Baroda
SELECT COUNT(EID) AS 'Total_Employees' from EMP WHERE CITY='RAJKOT' OR CITY='BARODA';

--2 Display the total number of employees hired before 1st January, 1991 in IT department
SELECT DEPARTMENT,COUNT(EID) AS 'HIRED_BEFORE_1st Jan 1991' FROM EMP WHERE JoiningDate<'1-jan-91' AND DEPARTMENT='IT' GROUP BY DEPARTMENT;

--3 Find the Joining Date wise Total Salaries
SELECT JoiningDate,SUM(SALARY) AS 'Total_Salary' from EMP GROUP BY JoiningDate;

--4 Find the Maximum salary department & city wise in which city name starts with ‘R’
SELECT DEPARTMENT,CITY,MAX(SALARY) AS 'Maximum' FROM EMP WHERE CITY LIKE 'R%' GROUP BY CITY,DEPARTMENT;


--FIND THE EMPLOYEE WITH HIGHEST SALARY FROM EACH DEPARTMENT
SELECT DEPARTMENT,MAX(SALARY) AS 'HIGHEST_SALARY' FROM EMP GROUP BY DEPARTMENT;

--CALCULATE AVERAGE SALARY FOR EACH CITY
SELECT CITY,AVG(SALARY) AS 'AVERAGE_SALARY' FROM EMP GROUP BY CITY;

--FIND SECOND HIGHEST SALARY IN ENTIRE COMPANY
SELECT MAX(SALARY) AS 'Second_Highest' FROM EMP WHERE SALARY<(SELECT MAX(SALARY) FROM EMP); 

--FIND EMPLOYEES WHO JOINED IN THE FIRST HALF OF YEAR
SELECT * FROM EMP WHERE MONTH(JoiningDate)<=6;

--DISPLAY THE NAME AND SALARY OF EMPLOYEE WHO JOINED LAST
SELECT ENAME,SALARY,JoiningDate from EMP where JoiningDate=(SELECT MAX(JoiningDate) FROM EMP);
--Lab_4

--ALTER

--A

--1 Add two more columns City VARCHAR (20) and Pincode INT
ALTER TABLE DEPOSIT ADD CITY VARCHAR(20), PINCODE INT
SELECT * FROM DEPOSIT

--2 Change the size of CNAME column from VARCHAR (50) to VARCHAR (35)
ALTER TABLE DEPOSIT ALTER COLUMN CITY VARCHAR(35)

--3 Change the data type DECIMAL to INT in amount Column
ALTER TABLE DEPOSIT ALTER COLUMN AMOUNT INT
SELECT * FROM DEPOSIT

--4 Rename Column ActNo to ANO
EXEC SP_RENAME 'DEPOSIT.ACTNO' , 'ANO'
SELECT * FROM DEPOSIT

--5 Delete Column City from the DEPOSIT table
ALTER TABLE DEPOSIT DROP COLUMN CITY
SELECT * FROM DEPOSIT

--6 Change name of table DEPOSIT to DEPOSIT_DETAIL
EXEC SP_RENAME 'DEPOSIT' , 'DEPOSIT_DETAIL'


--B

--1 Rename Column ADATE to AOPENDATE OF DEPOSIT_DETAIL table
EXEC SP_RENAME 'DEPOSIT_DETAIL.ADATE' , 'AOPENDATE' 
SELECT * FROM DEPOSIT_DETAIL

--2 Delete Column AOPENDATE from the DEPOSIT_DETAIL table
ALTER TABLE DEPOSIT_DETAIL DROP COLUMN AOPENDATE
SELECT * FROM DEPOSIT_DETAIL

--3 Rename Column CNAME to CustomerName
EXEC SP_RENAME 'DEPOSIT_DETAIL.CNAME' , 'CustomerName'
SELECT * FROM DEPOSIT_DETAIL


--C

CREATE TABLE STUDENT_DETAIL(
	Enrollment_No VARCHAR(20),
	Name VARCHAR(25),
	CPI DECIMAL(5,2),
	BirthDate DATETIME
);

--1 Add two more columns City VARCHAR (20) (Not null) and Backlog INT (Null)
ALTER TABLE STUDENT_DETAIL ADD City VARCHAR(20) NOT NULL, Backlog INT NULL
SELECT * FROM STUDENT_DETAIL

--2 Change the size of NAME column of student_detail from VARCHAR (25) to VARCHAR (35)
ALTER TABLE STUDENT_DETAIL ALTER COLUMN Name VARCHAR(35)

--3 Change the data type DECIMAL to INT in CPI Column
ALTER TABLE STUDENT_DETAIL ALTER COLUMN CPI INT

--4 Rename Column Enrollment_No to ENO
EXEC SP_RENAME 'STUDENT_DETAIL.Enrollment_No' , 'ENO'
SELECT * FROM STUDENT_DETAIL

--5 Delete Column City from the student_detail table
---------ALTER TABLE STUDENT_DETAIL DROP COLUMN CITY----------

--6 Change name of table student_detail to STUDENT_MASTER
EXEC SP_RENAME 'STUDENT_DETAIL' , 'STUDENT_MASTER'
SELECT * FROM STUDENT_MASTER




--DELETE, TRUNCATE, DROP

--A

--1 Delete all the records of DEPOSIT_DETAIL table having amount greater than and equals to 4000
DELETE FROM DEPOSIT_DETAIL WHERE AMOUNT>=4000
SELECT * FROM DEPOSIT_DETAIL

--2 Delete all the accounts CHANDI BRANCH
DELETE FROM DEPOSIT_DETAIL WHERE BNAME='CHANDI'
SELECT * FROM DEPOSIT_DETAIL

--3 Delete all the accounts having account number (ANO) is greater than 105
DELETE FROM DEPOSIT_DETAIL WHERE ANO>105

--4 Delete all the records of Deposit_Detail table (Use Truncate) 
TRUNCATE TABLE DEPOSIT_DETAIL
SELECT * FROM DEPOSIT_DETAIL

--5 Remove Deposit_Detail table (Use Drop) 
DROP TABLE DEPOSIT_DETAIL


--B

CREATE TABLE EMPLOYEE_MASTER(
	EmpNo INT,
	EmpName VARCHAR(25),
	JoiningName DATETIME,
	Salary DECIMAL(8,2),
	City VARCHAR(20)
);

INSERT INTO EMPLOYEE_MASTER VALUES (101,'Keyur','2002-01-05',12000,'Rajkot')
INSERT INTO EMPLOYEE_MASTER VALUES (102,'Hardik','2004-02-15',14000,'Ahmedabad')
INSERT INTO EMPLOYEE_MASTER VALUES (103,'Kajal','2006-03-14',15000,'Baroda')
INSERT INTO EMPLOYEE_MASTER VALUES (104,'Bhoomi','2005-06-23',12500,'Ahmedabad')
INSERT INTO EMPLOYEE_MASTER VALUES (105,'Harmit','2004-02-15',14000,'Rajkot')
INSERT INTO EMPLOYEE_MASTER VALUES (106,'Mitesh','2001-09-25',5000,'Jamnagar')
INSERT INTO EMPLOYEE_MASTER VALUES (107,'Meera',Null,7000,'Morbi')
INSERT INTO EMPLOYEE_MASTER VALUES (108,'Kishan','2003-02-06',10000,Null)

SELECT * FROM EMPLOYEE_MASTER

--1 Delete all the records of Employee_MASTER table having salary greater than and equals to 14000 
DELETE FROM EMPLOYEE_MASTER WHERE Salary>=14000
SELECT * FROM EMPLOYEE_MASTER

--2 Delete all the Employees who belongs to ‘RAJKOT’ city 
DELETE FROM EMPLOYEE_MASTER WHERE CITY='RAJKOT'
SELECT * FROM EMPLOYEE_MASTER

--3 Delete all the Employees who joined after 1-1-2007
DELETE FROM EMPLOYEE_MASTER WHERE JoiningName>'2007-01-01'
SELECT * FROM EMPLOYEE_MASTER

--4 Delete the records of Employees whose joining date is null and Name is not null
DELETE FROM EMPLOYEE_MASTER WHERE JoiningName is null and EmpName is not null
SELECT * FROM EMPLOYEE_MASTER

--5 Delete the records of Employees whose salary is 50% of 20000 
DELETE FROM EMPLOYEE_MASTER WHERE SALARY=10000
SELECT * FROM EMPLOYEE_MASTER

--6 Delete the records of Employees whose City Name is not empty
DELETE FROM EMPLOYEE_MASTER WHERE CITY IS NOT NULL
SELECT * FROM EMPLOYEE_MASTER

--7 Delete all the records of Employee_MASTER table (Use Truncate) 
TRUNCATE TABLE EMPLOYEE_MASTER

--8 Remove Employee_MASTER table (Use Drop)
DROP TABLE EMPLOYEE_MASTER
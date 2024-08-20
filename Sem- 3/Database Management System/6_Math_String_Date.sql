--Lab_6


--MATH FUNCTIONS

--A

--1 Display the result of 5 multiply by 30
SELECT (5*30);

--2 Find out the absolute value of -25, 25, -50 and 50
SELECT ABS(-25),ABS(25),ABS(-50),ABS(50);

--3 Find smallest integer value that is greater than or equal to 25.2, 25.7 and -25.2
SELECT CEILING(25.2),CEILING(25.7),CEILING(-25.2);

--4 Find largest integer value that is smaller than or equal to 25.2, 25.7 and -25.2
SELECT FLOOR(25.2),FLOOR(25.7),FLOOR(-25.2);

--5 Find out remainder of 5 divided 2 and 5 divided by 3
SELECT 5%2,5%3;

--6 Find out value of 3 raised to 2nd power and 4 raised 3rd power
SELECT POWER(3,2),POWER(4,3);

--7 Find out the square root of 25, 30 and 50
SELECT SQRT(25),SQRT(30),SQRT(50);

--8 Find out the square of 5, 15, and 25
SELECT SQUARE(5),SQUARE(15),SQUARE(25);

--9 Find out the value of PI
SELECT PI();

--10 Find out round value of 157.732 for 2, 0 and -2 decimal points
SELECT ROUND(157.732,2),ROUND(157.732,0),ROUND(157.732,-2);

--11 Find out exponential value of 2 and 3
SELECT EXP(2),EXP(3);

--12 Find out logarithm having base e of 10 and 2
SELECT LOG(10),LOG(2);

--13 Find out logarithm having base b having value 10 of 5 and 100
SELECT LOG10(5),LOG10(100);

--14 Find sine, cosine and tangent of 3.1415
SELECT SIN(3.1415),COS(3.1415),TAN(3.1415);

--15 Find sign of -25, 0 and 25
SELECT SIGN(-25),SIGN(0),SIGN(25);

--16 Generate random number using function
SELECT RAND();


--B

CREATE TABLE EMP_MASTER(
	EmpNo INT,
	EmpName varchar(30),
	JoiningDate datetime,
	Salary decimal(10,2),
	Commission int,
	City varchar(20),
	Dept_Code varchar(10)
);

INSERT INTO EMP_MASTER VALUES(101,'Keyur','5-1-02',12000,4500,'Rajkot','3@g');
INSERT INTO EMP_MASTER VALUES(102,'Hardik','2004-02-15',14000,2500,'Ahmedabad','3@');
INSERT INTO EMP_MASTER VALUES(103,'Kajal','2006-03-14',15000,3000,'Baroda','3-GD');
INSERT INTO EMP_MASTER VALUES(104,'Bhoomi','2005-06-23',12500,1000,'Ahmedabad','1A3D');
INSERT INTO EMP_MASTER VALUES(105,'Harmit','2004-02-15',14000,2000,'Rajkot','312A');

SELECT * FROM EMP_MASTER;

--1 Display the result of Salary plus Commission
SELECT SALARY+COMMISSION FROM EMP_MASTER;

--2 Find smallest integer value that is greater than or equal to 55.2, 35.7 and -55.2
SELECT CEILING(55.2),CEILING(35.7),CEILING(-55.2);

--3 Find largest integer value that is smaller than or equal to 55.2, 35.7 and -55.2
SELECT FLOOR(55.2),FLOOR(35.7),FLOOR(-55.2);

--4 Find out remainder of 55 divided 2 and 55 divided by 3
SELECT 55%2,55%3;

--5 Find out value of 23 raised to 2nd power and 14 raised 3rd power
SELECT POWER(23,2),POWER(14,3);


--C

--1 Find out the square root of 36, 49 and 81
SELECT SQRT(36),SQRT(49),SQRT(81);

--2 Find out the square of 3, 9, and 12
SELECT SQUARE(3),SQUARE(9),SQUARE(12);

--3 Find out round value of 280.8952 for 2, 0 and -2 decimal points
SELECT ROUND(280.8952,2),ROUND(280.8952,0),ROUND(280.8952,-2);

--4 Find sine, cosine and tangent of 4.2014
SELECT SIN(4.2014),COS(4.2014),TAN(4.2014);

--5 Find sign of -55, 0 and 95
SELECT SIGN(-55),SIGN(0),SIGN(95);



--STRING FUNCTIONS

--A

--1 Find the length of following. (I) NULL    (II) ‘   hello     ’   (III)  Blank
SELECT LEN(NULL),LEN('   hello     '),LEN('');

--2 Display your name in lower & upper case
SELECT LOWER('Bhoomi'),UPPER('Bhoomi');

--3 Display first three characters of your name
SELECT SUBSTRING('Bhoomi',1,3);

--4 Display 3rd to 10th character of your name
SELECT SUBSTRING('BhoomiTulsiyani',3,8);

--5 Write a query to convert ‘abc123efg’ to ‘abcXYZefg’ & ‘abcabcabc’ to ‘ab5ab5ab5’ using REPLACE
SELECT REPLACE('abc123efg','123','XYZ'),REPLACE('abcabcabc','c','5');

--6 Write a query to display ASCII code for ‘a’,’A’,’z’,’Z’, 0, 9
SELECT ASCII('a'),ASCII('A'),ASCII('z'),ASCII('Z'),ASCII(0),ASCII(9);

--7 Write a query to display character based on number 97, 65,122,90,48,57
SELECT CHAR(97),CHAR(65),CHAR(122),CHAR(90),CHAR(48),CHAR(57);

--8 Write a query to remove spaces from left of a given string ‘ hello world  ‘
SELECT LTRIM(' hello world  ');

--9 Write a query to remove spaces from right of a given string ‘ hello world  ‘ 
SELECT RTRIM(' hello world  ');

--10 Write a query to display first 4 & Last 5 characters of ‘SQL Server’
SELECT LEFT('SQL Server',4),RIGHT('SQL Server',5);

--11 Write a query to convert a string ‘1234.56’ to number (Use cast and convert function)
SELECT CONVERT(DECIMAL(6,2),'1234.56');
SELECT CAST('1234.56' AS DECIMAL(6,2));

--12 Write a query to convert a float 10.58 to integer (Use cast and convert function)
SELECT CONVERT(INT,1234.56);
SELECT CAST(1234.56 AS INT);

--13 Put 10 space before your name using function
SELECT SPACE(10)+'Bhoomi';

--14 Combine two strings using + sign as well as CONCAT ()
SELECT 'Bhoomi'+' '+'Tulsiyani';
SELECT CONCAT('Bhoomi',' ','Tulsiyani');

--15 Find reverse of “Darshan”
SELECT REVERSE('Darshan');

--16 Repeat your name 3 times
SELECT REPLICATE('Bhoomi',3);


--B

--1 Find the length of FirstName and LastName columns
SELECT LEN(FIRSTNAME),LEN(LASTNAME) FROM STUDENT;

--2 Display FirstName and LastName columns in lower & upper case
SELECT LOWER(FIRSTNAME),LOWER(LASTNAME) FROM STUDENT;
SELECT UPPER(FIRSTNAME),UPPER(LASTNAME) FROM STUDENT;

--3 Display first three characters of FirstName column
SELECT LEFT(FIRSTNAME,3) FROM STUDENT;

--4 Display 3rd to 10th character of Website column
SELECT SUBSTRING(WEBSITE,3,8) FROM STUDENT;

--5 Write a query to display first 4 & Last 5 characters of Website column
SELECT LEFT(WEBSITE,4),RIGHT(WEBSITE,5) FROM STUDENT;



--C

--1 Put 10 space before FirstName using function
SELECT SPACE(10)+FIRSTNAME FROM STUDENT;

--2 Combine FirstName and LastName columns using + sign as well as CONCAT ()
SELECT FIRSTNAME+' '+LASTNAME FROM STUDENT;
SELECT CONCAT(FIRSTNAME,' ',LASTNAME) FROM STUDENT;

--3 Combine all columns using + sign as well as CONCAT ()
SELECT CONCAT_WS(' ',STUID,FIRSTNAME,LASTNAME,WEBSITE,CITY,ADDRESS) FROM STUDENT;

--4 Find reverse of FirstName column
SELECT REVERSE(FIRSTNAME) FROM STUDENT;

--5 Repeat FirstName column 3 times
SELECT REPLICATE(FIRSTNAME,3) FROM STUDENT;

--6 Give the Names which contains 5 characters
SELECT FIRSTNAME FROM STUDENT WHERE LEN(FIRSTNAME)=5;

--7 Combine the result as <FirstName> Lives in <City>
SELECT FIRSTNAME +' Lives in '+CITY FROM STUDENT;

--8 Combine the result as Student_ID of < FirstName > is <StuID>
SELECT concat('Student_ID of ',firstname,' is ',StuID) FROM STUDENT;




--DATE FUNCTIONS

--A

--1 Write a query to display the current date & time. Label the column Today_Date
SELECT GETDATE() AS 'Today_Date';

--2 Write a query to find new date after 365 day with reference to today
SELECT DATEADD(d,365,GETDATE());

--3 Display the current date in a format that appears as may 5 1994 12:00AM
SELECT FORMAT(GETDATE(),'MMMM dd yyyy hh:mmtt');

--4 Display the current date in a format that appears as 03 Jan 1995
SELECT FORMAT(GETDATE(),'dd MMM yyyy');

--5 Display the current date in a format that appears as Jan 04, 96
SELECT FORMAT(GETDATE(),'MMM dd, yy');

--6 Write a query to find out total number of months between 31-Dec-08 and 31-Mar-09
SELECT DATEDIFF(MONTH,'31-Dec-08','31-Mar-09');

--7 Write a query to find out total number of years between 25-Jan-12 and 14-Sep-10
SELECT DATEDIFF(YEAR,'14-Sep-10','25-Jan-12');

--8 Write a query to find out total number of hours between 25-Jan-12 7:00 and 26-Jan-12 10:30
SELECT DATEDIFF(HOUR,'25-Jan-12 7:00','26-Jan-12 10:30');

--9 Write a query to extract Day, Month, Year from given date 12-May-16
SELECT DAY('12-May-16'),MONTH('12-May-16'),YEAR('12-May-16');

--10 Write a query that adds 5 years to current date
SELECT DATEADD(YY,5,GETDATE());

--11 Write a query to subtract 2 months from current date
SELECT DATEADD(M,-2,GETDATE());

--12 Extract month from current date using datename () and datepart () function
SELECT DATENAME(MONTH,GETDATE()),DATEPART(MONTH,GETDATE());

--13 Write a query to find out last date of current month
SELECT EOMONTH(GETDATE());

--14 Calculate your age in years and months
SELECT DATEDIFF(YY,'2005-09-13',GETDATE()),DATEDIFF(M,'2005-09-13',GETDATE());


--B

CREATE TABLE EMP_DETAIL(
	EmpNo int,
	EmpName varchar(20),
	JoiningDate date,
	salary decimal(10,2),
	city varchar(15)
);

INSERT INTO EMP_DETAIL VALUES(101,'Keyur','2002-01-15',12000,'Rajkot');
INSERT INTO EMP_DETAIL VALUES(102,'Hardik','2004-02-15',14000,'Ahmedabad');
INSERT INTO EMP_DETAIL VALUES(103,'Kajal','2006-03-14',15000,'Baroda');
INSERT INTO EMP_DETAIL VALUES(104,'Bhoomi','2005-06-23',12500,'Ahmedabad');
INSERT INTO EMP_DETAIL VALUES(105,'Harmit','2004-02-15',14000,'Rajkot');
INSERT INTO EMP_DETAIL VALUES(106,'Jay','2007-03-07',12000,'Surat');

SELECT * FROM EMP_MASTER;

--1 Write a query to find new date after 365 day with reference to JoiningDate
SELECT DATEADD(d,365,JoiningDate) from EMP_DETAIL;

--2 Display the JoiningDate in a format that appears as may 5 1994 12:00AM
SELECT FORMAT(JoiningDate,'MMMM dd yyyy hh:mmtt') from emp_detail;

--3 Display the JoiningDate in a format that appears as 03 Jan 1995
SELECT FORMAT(JoiningDate,'dd MMM yyyy') from emp_detail;

--4 Display the JoiningDate in a format that appears as Jan 04, 96
SELECT FORMAT(JoiningDate,'MMM dd, yy') from emp_detail;

--5 Write a query to find out total number of months between JoiningDate and 31-Mar-09
SELECT DATEDIFF(MONTH,JoiningDate,'31-Mar-09') from emp_detail;

--6 Write a query to find out total number of years between JoiningDate and 14-Sep-10
SELECT DATEDIFF(YEAR,JoiningDate,'14-Sep-10') from emp_detail;


--C

--1 Write a query to extract Day, Month, Year from JoiningDate
SELECT DAY(JoiningDate),MONTH(JoiningDate),YEAR(JoiningDate) FROM emp_detail;

--2 Write a query that adds 5 years to JoiningDate
select dateadd(yy,5,JoiningDate) from emp_detail;

--3 Write a query to subtract 2 months from JoiningDate
select dateadd(m,-2,JoiningDate) from emp_detail;

--4 Extract month from JoiningDate using datename () and datepart () function
SELECT DATENAME(MONTH,JoiningDate),DATEPART(MONTH,JoiningDate) from emp_detail;

--5 Calculate your age in years and months
SELECT DATEDIFF(YY,'2005-09-13',GETDATE()),DATEDIFF(M,'2005-09-13',GETDATE());
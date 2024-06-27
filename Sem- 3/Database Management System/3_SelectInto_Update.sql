--Lab_3

--SELECT INTO

--A

CREATE TABLE CRICKET(
	Name VARCHAR(50),
	City VARCHAR(50),
	Age INT
);

INSERT INTO CRICKET(Name,City,Age) VALUES ('Sachin Tendulkar','Mumbai',30)
INSERT INTO CRICKET(Name,City,Age) VALUES ('Rahul Dravid','Bombay',35)
INSERT INTO CRICKET(Name,City,Age) VALUES ('M.S.Dhoni','Jharkhand',31)
INSERT INTO CRICKET(Name,City,Age) VALUES ('Suresh Raina','Gujarat',30)

SELECT * FROM CRICKET

--1 Create table Worldcup from cricket with all the columns and data
SELECT * INTO Worldcup FROM Cricket
SELECT * FROM Worldcup

--2 Create table T20 from cricket with first two columns with no data
SELECT Name,City INTO T20 FROM Cricket WHERE 1=2
SELECT * FROM T20

--3 Create table IPL From Cricket with No Data
SELECT * INTO IPL FROM Cricket WHERE 1=2
SELECT * FROM IPL


--B

CREATE TABLE EMPLOYEE(
	Name VARCHAR(50),
	City VARCHAR(50),
	Age INT
);

INSERT INTO EMPLOYEE(Name,City,Age) VALUES ('Jay Patel','Rajkot',30)
INSERT INTO EMPLOYEE(Name,City,Age) VALUES ('Rahul Dave','Baroda',35)
INSERT INTO EMPLOYEE(Name,City,Age) VALUES ('Jeet Patel','Surat',31)
INSERT INTO EMPLOYEE(Name,City,Age) VALUES ('Vijay Raval','Rajkot',30)

SELECT * FROM EMPLOYEE

--1 Create table Employee_detail from Employee with all the columns and data 
SELECT * INTO Employee_detail FROM EMPLOYEE
SELECT * FROM Employee_detail

--2 Create table Employee_data from Employee with first two columns with no data 
SELECT Name,City INTO Employee_data FROM EMPLOYEE WHERE 1=2
SELECT * FROM Employee_data

--3 Create table Employee_info from Employee with no Data
SELECT * INTO Employee_info FROM EMPLOYEE WHERE 1=2
SELECT * FROM Employee_info


--C

--1 Insert the Data into Employee_info from Employee whose CITY is Rajkot
INSERT INTO Employee_info SELECT * FROM Employee where City='Rajkot'
SELECT * FROM Employee_info

--2 Insert the Data into Employee_info from Employee whose age is more than 32
INSERT INTO Employee_info SELECT * FROM Employee where Age>32
SELECT * FROM Employee_info




--UPDATE

--A

--1 Update deposit amount of all customers from 3000 to 5000 (Use Deposit Table)
UPDATE DEPOSIT SET AMOUNT=5000 WHERE AMOUNT=3000
SELECT * FROM DEPOSIT

--2 Change branch name of ANIL from VRCE to C.G. ROAD (Use Borrow Table)  
UPDATE BORROW SET BNAME='C.G.ROAD' WHERE CNAME='ANIL'
SELECT * FROM BORROW

--3 Update Account No of SANDIP to 111 & Amount to 5000 (Use Deposit Table)
UPDATE DEPOSIT SET ACTNO=111,AMOUNT=5000 WHERE CNAME='SANDIP'
SELECT * FROM DEPOSIT

--4 Update amount of KRANTI to 7000 (Use Deposit Table)
UPDATE DEPOSIT SET AMOUNT=7000 WHERE CNAME='KRANTI'
SELECT * FROM DEPOSIT

--5 Update branch name from ANDHERI to ANDHERI WEST (Use Branch Table) 
UPDATE BRANCH SET BNAME='ANDHERI WEST' WHERE BNAME='ANDHERI'
SELECT * FROM BRANCH

--6 Update branch name of MEHUL to NEHRU PALACE (Use Deposit Table) 
UPDATE DEPOSIT SET BNAME='NEHRU PLACE' WHERE CNAME='MEHUL'
SELECT * FROM DEPOSIT

--7 Update deposit amount of all depositors to 5000 whose account no between 103 & 107 (Use Deposit Table) 
UPDATE DEPOSIT SET AMOUNT=5000 WHERE ACTNO BETWEEN 103 AND 107
SELECT * FROM DEPOSIT

--8 Update ADATE of ANIL to 1-4-95 (Use Deposit Table) 
UPDATE DEPOSIT SET ADATE='1995-04-01' WHERE CNAME='ANIL'
SELECT * FROM DEPOSIT

--9 Update the amount of MINU to 10000 (Use Deposit Table) 
UPDATE DEPOSIT SET AMOUNT=10000 WHERE CNAME='MINU'
SELECT * FROM DEPOSIT

--10 Update deposit amount of PRAMOD to 5000 and ADATE to 1-4-96 (Use Deposit Table) 
UPDATE DEPOSIT SET AMOUNT=5000,ADATE='1996-04-01' WHERE CNAME='PRAMOD'
SELECT * FROM DEPOSIT


--B

--1 Give 10% Increment in Loan Amount (Use Borrow Table)
UPDATE BORROW SET AMOUNT=AMOUNT+AMOUNT*0.1
SELECT * FROM BORROW

--2 Customer deposits additional 20% amount to their account, update the same (Use Deposit Table)
UPDATE DEPOSIT SET AMOUNT=AMOUNT+AMOUNT*0.2
SELECT * FROM DEPOSIT


--C

--1 Update amount of loan no 321 to NULL (Use Borrow Table) 
UPDATE BORROW SET LOANNO=NULL WHERE LOANNO=321
SELECT * FROM BORROW

--2 Update branch name of KRANTI to NULL (Use Borrow Table)
UPDATE BORROW SET BNAME=NULL WHERE CNAME='KRANTI'
SELECT * FROM BORROW

--3 Display the name of borrowers whose amount is NULL (Use Borrow Table)
SELECT CNAME FROM BORROW WHERE AMOUNT IS NULL

--4 Display the Borrowers whose having branch (Use Borrow Table) 
SELECT * FROM BORROW WHERE BNAME<>'NULL'

--5 Update the Loan Amount to 5000, Branch to VRCE & Customer Name to Darshan whose loan no is 481 (Use Borrow Table)
UPDATE BORROW SET AMOUNT=5000,BNAME='VRCE',CNAME='DARSHAN' WHERE LOANNO=481
SELECT * FROM BORROW

--6 Update the Deposit table and set the date to 01-01-2021 for all the depositor whose amount is less than 2000
UPDATE DEPOSIT SET ADATE='2021-01-01' WHERE AMOUNT<2000
SELECT * FROM DEPOSIT

--7 Update the Deposit table and set the date to NULL & Branch name to ‘ANDHERI whose Account No is 110
UPDATE DEPOSIT SET ADATE=NULL,BNAME='ANDHERI' WHERE ACTNO=110
SELECT * FROM DEPOSIT
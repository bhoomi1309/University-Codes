--LAB 13


--A

CREATE TABLE Village (
    VID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    CityID INT,
    FOREIGN KEY (CityID) REFERENCES City(CityID)
);

INSERT INTO Village (VID, Name, CityID) VALUES
(101, 'Raiya', 1),
(102, 'Madhapar', 1),
(103, 'Dodka', 3),
(104, 'Falla', 4),
(105, 'Bhesan', 5),
(106, 'Dhoraji', 5);

select * from CITY
select * from VILLAGE


--1 Display all the villages of Rajkot city
select village.Name 
from village
join city
on 
village.cityID=city.cityID
where city.name='Rajkot';



--2 Display city along with their villages & pin code
select city.name as City,village.name as Village,city.Pincode
from village
join city
on 
village.cityID=city.cityID;

--3 Display the city having more than one village
select city.name as City
from village
join city
on 
village.cityID=city.cityID
group by city.Name
having count(*)>1;

--4 Display the city having no village
select city.name as City
from city
left outer join village
on 
village.cityID=city.cityID
group by city.Name
having count(village.name)=0;

--5 Count the total number of villages in each city 
select city.name as City,count(village.name) as 'NoOfVillages'
from City
left outer join Village
on 
village.cityID=city.cityID
group by city.Name;

--6 Count the number of cities having more than one village
select count(*) as City
from village
join city
on 
village.cityID=city.cityID
group by city.Name
having count(*)>1;

select count(city.Name) as City
from city 
where cityId in (
	select cityID 
	from village 
	group by cityID 
	having count(*)>1
);



select * from stu_master;

insert into stu_master values(108,'Ajay',default,12,-1);



--B

create table DEPT_DETAILS (
	DID int PRIMARY KEY,
	DName varchar(100) not null
);

create table CITY_DETAILS (
	CID int PRIMARY KEY,
	CName varchar(100) not null
);

create table EMP_DETAILS (
	EID int Primary key,
	EName varchar(100) not null,
	DID int,
	CID int,
	Salary decimal(10,2) check (Salary>0),
	Experience int check (Experience>=0),
	Foreign key (DID) references Dept_Details(DID),
	Foreign key (CID) references City_Details(CID)
);

INSERT INTO Dept_DETAILS(Did, Dname) VALUES
(1, 'HR'),
(2, 'Engineering'),
(3, 'Marketing');

INSERT INTO City_DETAILS(Cid, Cname) VALUES
(1, 'New York'),
(2, 'Los Angeles'),
(3, 'Chicago');

INSERT INTO Emp_DETAILS(Eid, Ename, Did, Cid, Salary, Experience) VALUES
(1, 'John Doe', 1, 1, 50000.00, 5),
(2, 'Jane Smith', 2, 2, 75000.00, 8),
(3, 'Mike Johnson', 3, 3, 60000.00, 3);


select * from DEPT_DETAILS;
select * from CITY_DETAILS;
select * from EMP_DETAILS;



--C

CREATE TABLE Country_INFO (
    Cid INT PRIMARY KEY,
    Cname VARCHAR(100) NOT NULL
);

CREATE TABLE State_INFO (
    Sid INT PRIMARY KEY,
    Sname VARCHAR(100) NOT NULL,
    Cid INT,
    FOREIGN KEY (Cid) REFERENCES Country_INFO(Cid)
);

CREATE TABLE District_INFO (
    Did INT PRIMARY KEY,
    Dname VARCHAR(100) NOT NULL,
    Sid INT,
    FOREIGN KEY (Sid) REFERENCES State_INFO(Sid)
);

CREATE TABLE Dept_INFO (
    Did INT PRIMARY KEY,
    Dname VARCHAR(100) NOT NULL
);

CREATE TABLE City_INFO (
    Cid INT PRIMARY KEY,
    Cname VARCHAR(100) NOT NULL,
    Did INT,
    FOREIGN KEY (Did) REFERENCES District_INFO(Did)
);

CREATE TABLE Emp_INFO (
    Eid INT PRIMARY KEY,
    Ename VARCHAR(100) NOT NULL,
    Did INT,
    Cid INT,
    Salary DECIMAL(10, 2) CHECK (Salary > 0), -- Salary must be positive
    Experience INT CHECK (Experience >= 0),  -- Experience cannot be negative
    FOREIGN KEY (Did) REFERENCES Dept_INFO(Did),
    FOREIGN KEY (Cid) REFERENCES City_INFO(Cid)
);

INSERT INTO Country_INFO (Cid, Cname) VALUES
(1, 'USA'),
(2, 'Canada'),
(3, 'UK'),
(4, 'Australia'),
(5, 'India');

INSERT INTO State_INFO (Sid, Sname, Cid) VALUES
(1, 'California', 1),
(2, 'Ontario', 2),
(3, 'London', 3),
(4, 'New South Wales', 4),
(5, 'Gujarat', 5);

INSERT INTO District_INFO (Did, Dname, Sid) VALUES
(1, 'Los Angeles', 1),
(2, 'Toronto', 2),
(3, 'Westminster', 3),
(4, 'Sydney', 4),
(5, 'Ahmedabad', 5);

INSERT INTO Dept_INFO (Did, Dname) VALUES
(1, 'HR'),
(2, 'Engineering'),
(3, 'Marketing'),
(4, 'Sales'),
(5, 'Finance');

INSERT INTO City_INFO (Cid, Cname, Did) VALUES
(1, 'Los Angeles City', 1),
(2, 'Toronto City', 2),
(3, 'London City', 3),
(4, 'Sydney City', 4),
(5, 'Ahmedabad City', 5);

INSERT INTO Emp_INFO (Eid, Ename, Did, Cid, Salary, Experience) VALUES
(1, 'John Doe', 1, 1, 50000.00, 5),
(2, 'Jane Smith', 2, 2, 75000.00, 8),
(3, 'Mike Johnson', 3, 3, 60000.00, 3),
(4, 'Alice Brown', 4, 4, 45000.00, 2),
(5, 'Bob Green', 5, 5, 40000.00, 4);


select E.EName,D.DName,E.Salary,E.Experience,C.CName,Dis.Dname,S.SName,Coun.CName
from Emp_info E
join Dept_info D
	on E.DID=D.Did
join City_info C
	on E.CID=C.CID
join District_info Dis
	on E.DID=Dis.DID
join State_info S
	on Dis.SID=S.SID
join Country_info Coun
	on E.CID=Coun.CID;
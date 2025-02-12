--LAB 5


-- Creating PersonInfo Table 
CREATE TABLE PersonInfo ( 
PersonID INT PRIMARY KEY, 
PersonName VARCHAR(100) NOT NULL, 
Salary DECIMAL(8,2) NOT NULL, 
JoiningDate DATETIME NULL, 
City VARCHAR(100) NOT NULL, 
Age INT NULL, 
BirthDate DATETIME NOT NULL 
); 



-- Creating PersonLog Table 
CREATE TABLE PersonLog ( 
PLogID INT PRIMARY KEY IDENTITY(1,1), 
PersonID INT NOT NULL, 
PersonName VARCHAR(250) NOT NULL, 
Operation VARCHAR(50) NOT NULL, 
UpdateDate DATETIME NOT NULL, 
);




--PART A


--1. Create a trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo table to display 
--a message “Record is Affected.”  

create or alter trigger tr_PersonInfo_Insert_Update_Delete
on PersonInfo
after insert,update,delete
as
begin
	print 'Record is affected'
end

insert into PersonInfo values(1,'Anil',20000,'2020-09-13','Mumbai',34,'1900-09-13')

select * from PersonInfo


--2. Create a trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo table. For that, 
--log all operations performed on the person table into PersonLog. 

create or alter trigger tr_PersonInfo_Insert
on PersonInfo
after insert
as
begin
	declare @Person_Id int,@Person_name varchar(50)

	select @Person_id = PersonID from inserted
	select @Person_name = PersonName from inserted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'INSERT',getdate())
end

insert into PersonInfo values(2,'Sunil',30000,'2010-09-13','Agra',30,'1900-12-13')

select * from PersonLog


create or alter trigger tr_PersonInfo_Update
on PersonInfo
after update
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from inserted
	select @Person_name = PersonName from inserted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'UPDATED',getdate())
end

update PersonInfo 
set PersonName='Mahesh'
where PersonID=2

select * from PersonLog


create or alter trigger tr_PersonInfo_Delete
on PersonInfo
after delete
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from deleted
	select @Person_name = PersonName from deleted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'DELETED',getdate())
end


delete from PersonInfo where PersonID=2

select * from PersonLog


--3. Create an INSTEAD OF trigger that fires on INSERT, UPDATE and DELETE operation on the PersonInfo 
--table. For that, log all operations performed on the person table into PersonLog. 

create or alter trigger tr_PersonInfo_InsteadOf
on PersonInfo
instead of insert
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from inserted
	select @Person_name = PersonName from inserted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'INSERT',getdate())
end

insert into PersonInfo values(2,'Sunil',30000,'2010-09-13','Agra',30,'1900-12-13')

select * from PersonLog
select * from PersonInfo


create or alter trigger tr_PersonInfo_InsteadOf_Updated
on PersonInfo
instead of update
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from inserted
	select @Person_name = PersonName from inserted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'UPDATED',getdate())
end

update PersonInfo 
set PersonName='Anil'
where PersonID=1

select * from PersonLog
select * from PersonInfo


create or alter trigger tr_PersonInfo_InsteadOf_Deleted
on PersonInfo
instead of delete
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from deleted
	select @Person_name = PersonName from deleted

	insert into PersonLog(PersonID,PersonName,Operation,UpdateDate) values(@Person_Id,@Person_name,'DELETED',getdate())
end

delete from PersonInfo where PersonID=1

select * from PersonLog
select * from PersonInfo


drop trigger tr_PersonInfo_InsteadOf


--4. Create a trigger that fires on INSERT operation on the PersonInfo table to convert person name into 
--uppercase whenever the record is inserted. 

create or alter trigger tr_PersonInfo_Insert_Upper
on PersonInfo
after insert
as
begin
	declare @Person_Id int,@Person_Name varchar(50)

	select @Person_Id = PersonID from inserted
	select @Person_name = PersonName from inserted

	update PersonInfo
	set PersonName=upper(@Person_Name)
	where PersonID=@Person_Id
end

insert into PersonInfo values(2,'Sunil',30000,'2010-09-13','Agra',30,'1900-12-13')


select * from PersonInfo
select * from PersonLog


--5. Create trigger that prevent duplicate entries of person name on PersonInfo table. 

create or alter trigger tr_PersonInfo_Duplicate
on PersonInfo
instead Of insert
as
begin
	insert into PersonInfo (PersonID,PersonName,Salary,JoiningDate,City,Age,BirthDate)
	select PersonID,PersonName,Salary,JoiningDate,City,Age,BirthDate from inserted
		where PersonName not in (select PersonName from PersonInfo)
end

insert into PersonInfo values(3,'ANIL',30000,'2010-09-13','Agra',30,'1900-12-13')

select * from PersonInfo



--6. Create trigger that prevent Age below 18 years.


create or alter trigger tr_PersonInfo_AgeAbove18
on PersonInfo
instead Of insert
as
begin
	insert into PersonInfo (PersonID,PersonName,Salary,JoiningDate,City,Age,BirthDate)
	select PersonID,PersonName,Salary,JoiningDate,City,Age,BirthDate from inserted
		where Age>=18
end


insert into PersonInfo values(4,'Tushar',40000,'2010-09-13','Agra',15,'1900-12-13')


select * from PersonInfo



--PART B


--7. Create a trigger that fires on INSERT operation on person table, which calculates the age and update 
--that age in Person table. 

create or alter trigger tr_PersonInfo_CalculateAge
on PersonInfo
after insert
as
begin

	declare @PersonId int,@Birthdate datetime

	select @PersonId=PersonId from inserted
	select @Birthdate=Birthdate from inserted

	update PersonInfo 
	set Age=datediff(year,@BirthDate,getdate())
	where PersonID=@PersonId
end

insert into PersonInfo values(4,'Tushar',40000,'2020-01-13','Agra',15,'2020-01-13')

select * from PersonInfo


--8. Create a Trigger to Limit Salary Decrease by a 10%.

create or alter trigger tr_PersonInfo_LimitSalary
on PersonInfo
instead of update
as
begin
	
	declare @Salary int,@PersonId int,@PreviousSalary int

	select @PreviousSalary=Salary from deleted
	select @Salary=Salary from inserted
	select @PersonId=PersonID from inserted

	update PersonInfo
	set Salary=@Salary
	where PersonID=@PersonId
		and @Salary>=@PreviousSalary*0.9

end


select * from PersonInfo

update PersonInfo
set Salary=16000
where PersonID=1


select * from PersonInfo




--PART C


--9. Create Trigger to Automatically Update JoiningDate to Current Date on INSERT if JoiningDate is NULL 
--during an INSERT. 

create or alter trigger tr_PersonInfo_JoiningDate
on PersonInfo
after insert
as
begin
	declare @JoiningDate datetime, @PersonID int
	
	select @JoiningDate=JoiningDate from inserted
	select @PersonID=PersonID from inserted

	if @JoiningDate is null
		update PersonInfo set JoiningDate=getdate() where PersonID = @PersonID

end


select * from PersonInfo
insert into PersonInfo(PersonID,PersonName,Salary,City,Age,BirthDate) values(5,'Abhi',50000,'Agra',25,'2000-01-17')


--10. Create DELETE trigger on PersonLog table, when we delete any record of PersonLog table it prints 
--‘Record deleted successfully from PersonLog’. 

create or alter trigger tr_PersonLog_Delete_Print
on PersonLog
after delete
as
begin
	print 'Record deleted successfully from PersonLog'
end

delete from PersonLog where PLogID=22
select * from PersonLog
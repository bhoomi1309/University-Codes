--LAB-5 TRIGGER EXTRA


CREATE TABLE EMPLOYEEDETAILS
(
	EmployeeID Int Primary Key,
	EmployeeName Varchar(100) Not Null,
	ContactNo Varchar(100) Not Null,
	Department Varchar(100) Not Null,
	Salary Decimal(10,2) Not Null,
	JoiningDate DateTime Null
)

CREATE TABLE EmployeeLogs (
    LogID INT PRIMARY KEY IDENTITY(1,1),
    EmployeeID INT NOT NULL,
    EmployeeName VARCHAR(100) NOT NULL,
    ActionPerformed VARCHAR(100) NOT NULL,
    ActionDate DATETIME NOT NULL
);



--1)	Create a trigger that fires AFTER INSERT, UPDATE, and DELETE operations on the EmployeeDetails table to display the message 
--"Employee record inserted", "Employee record updated", "Employee record deleted"

create or alter trigger tr_EMPLOYEEDETAILS_After_Insert
on EMPLOYEEDETAILS
after insert
as
begin
	print 'Employee record inserted'
end


insert into EMPLOYEEDETAILS values(1,'Anil',9898989898,'CE',10000,'2019-05-05')
select * from EMPLOYEEDETAILS


create or alter trigger tr_EMPLOYEEDETAILS_After_Update
on EMPLOYEEDETAILS
after update
as
begin
	print 'Employee record updated'
end


update EMPLOYEEDETAILS set EmployeeName='Mahesh' where EmployeeId=1
select * from EMPLOYEEDETAILS


create or alter trigger tr_EMPLOYEEDETAILS_After_Delete
on EMPLOYEEDETAILS
after delete
as
begin
	print 'Employee record deleted'
end


delete from EMPLOYEEDETAILS where EmployeeId=1
select * from EMPLOYEEDETAILS



--2)	Create a trigger that fires AFTER INSERT, UPDATE, and DELETE operations on the EmployeeDetails table to log all operations into the EmployeeLog table.


create or alter trigger tr_EMPLOYEEDETAILS_After_Insert_Log
on EMPLOYEEDETAILS
after insert
as
begin
	declare @EId int,@EName varchar(100)
	select @EId=EmployeeId,@EName=EmployeeName from inserted
	insert into EmployeeLogs(EmployeeID,EmployeeName,ActionPerformed,ActionDate) values (@EId,@EName,'INSERT',getdate())
end

insert into EMPLOYEEDETAILS values(1,'Anil',9898989898,'CE',10000,'2019-05-05')
select * from EMPLOYEEDETAILS
select * from EMPLOYEELOGS


create or alter trigger tr_EMPLOYEEDETAILS_After_Update_Log
on EMPLOYEEDETAILS
after update
as
begin
	declare @EId int,@EName varchar(100)
	select @EId=EmployeeId,@EName=EmployeeName from inserted
	insert into EmployeeLogs(EmployeeID,EmployeeName,ActionPerformed,ActionDate) values (@EId,@EName,'UPDATE',getdate())
end


update EMPLOYEEDETAILS set EmployeeName='Mahesh' where EmployeeId=1
select * from EMPLOYEEDETAILS
select * from EMPLOYEELOGS


create or alter trigger tr_EMPLOYEEDETAILS_After_Delete_Log
on EMPLOYEEDETAILS
after delete
as
begin
	declare @EId int,@EName varchar(100)
	select @EId=EmployeeId,@EName=EmployeeName from deleted
	insert into EmployeeLogs(EmployeeID,EmployeeName,ActionPerformed,ActionDate) values (@EId,@EName,'DELETE',getdate())
end


delete from EMPLOYEEDETAILS where EmployeeId=1
select * from EMPLOYEEDETAILS
select * from EMPLOYEELOGS



--3)	Create a trigger that fires AFTER INSERT to automatically calculate the joining bonus (10% of the salary) for new employees
--and update a bonus column in the EmployeeDetails table.

ALTER TABLE EmployeeDetails
ADD Bonus DECIMAL(10, 2);

create or alter trigger tr_EMPLOYEEDETAILS_After_Insert_Bonus
on EMPLOYEEDETAILS
after insert
as
begin
	declare @salary decimal(10,2),@Eid int
	select @salary=salary,@Eid=EmployeeID from inserted
	update EMPLOYEEDETAILS 
	set Bonus=@salary*0.1
	where EmployeeID=@Eid
end

insert into EMPLOYEEDETAILS values(2,'Sunil',9898989898,'CE',20000,'2019-05-05',0)
select * from EMPLOYEEDETAILS



--4)	Create a trigger to ensure that the JoiningDate is automatically set to the current date if it is NULL during an INSERT operation.

create or alter trigger tr_EMPLOYEEDETAILS_After_Insert_Date
on EMPLOYEEDETAILS
after insert
as
begin
	declare @date datetime,@Eid int
	select @date=JoiningDate,@Eid=EmployeeID from inserted
	if @date is null
		update EMPLOYEEDETAILS 
		set JoiningDate=getdate()
		where EmployeeID=@Eid
end

insert into EMPLOYEEDETAILS values(4,'Suresh',9898989898,'CE',30000,null,0)
select * from EMPLOYEEDETAILS


--5)	Create a trigger that ensure that ContactNo is valid during insert and update (Like ContactNo length is 10)

create or alter trigger tr_EMPLOYEEDETAILS_After_Insert_Update_ValidContact
on EMPLOYEEDETAILS
after insert,update
as
begin
	declare @contact varchar(100),@Eid int
	select @contact=ContactNo from inserted
	if LEN(@contact)!=10
		print 'Invalid Contact No'
		rollback transaction
end

insert into EMPLOYEEDETAILS values(5,'Prakash','9898989','CE',30000,null,0)
select * from EMPLOYEEDETAILS





CREATE TABLE Movies (
    MovieID INT PRIMARY KEY,
    MovieTitle VARCHAR(255) NOT NULL,
    ReleaseYear INT NOT NULL,
    Genre VARCHAR(100) NOT NULL,
    Rating DECIMAL(3, 1) NOT NULL,
    Duration INT NOT NULL
);

CREATE TABLE MoviesLog
(
	LogID INT PRIMARY KEY IDENTITY(1,1),
	MovieID INT NOT NULL,
	MovieTitle VARCHAR(255) NOT NULL,
	ActionPerformed VARCHAR(100) NOT NULL,
	ActionDate	DATETIME  NOT NULL
);



--1.	Create an INSTEAD OF trigger that fires on INSERT, UPDATE and DELETE operation on the Movies table. 
--For that, log all operations performed on the Movies table into MoviesLog.

create or alter trigger tr_Movies_InsteadOf_Insert_Log
on Movies
instead of insert
as
begin
	declare @id int,@title varchar(255)
	select @id=MovieID,@title=MovieTitle from inserted
	insert into MoviesLog(MovieID,MovieTitle,ActionPerformed,ActionDate) values (@id,@title,'INSERT',getdate())
end

insert into Movies values(1,'XYZ',2020,'Romance',10,2)
select * from Movies
select * from MoviesLog


drop trigger tr_Movies_InsteadOf_Insert_Log


create or alter trigger tr_Movies_InsteadOf_Update_Log
on Movies
instead of update
as
begin
	declare @id int,@title varchar(255)
	select @id=MovieID,@title=MovieTitle from inserted
	insert into MoviesLog(MovieID,MovieTitle,ActionPerformed,ActionDate) values (@id,@title,'UPDATE',getdate())
end


update Movies set MovieTitle='ABC' where MovieId=1
select * from Movies
select * from MoviesLog


drop trigger tr_Movies_InsteadOf_Update_Log


create or alter trigger tr_Movies_InsteadOf_Delete_Log
on Movies
instead of delete
as
begin
	declare @id int,@title varchar(255)
	select @id=MovieID,@title=MovieTitle from deleted
	insert into MoviesLog(MovieID,MovieTitle,ActionPerformed,ActionDate) values (@id,@title,'DELETE',getdate())
end

delete from Movies where MovieID=1
select * from Movies
select * from MoviesLog



--2.	Create a trigger that only allows to insert movies for which Rating is greater than 5.5.

create or alter trigger tr_Movies_InsteadOf_Insert_Rating
on Movies
instead of insert
as
begin
	declare @id int,@title varchar(255),@year int,@genre varchar(100),@rating decimal(10,2),@duration int
	select @id=MovieID,@title=MovieTitle,@year=releaseyear,@genre=genre,@rating=rating,@duration=duration from inserted
	if @rating>5.5
		insert into movies values(@id,@title,@year,@genre,@rating,@duration)
end

insert into Movies values(2,'AAA',2025,'Mystery',5,2)
insert into Movies values(3,'YYY',2020,'Romance',10,2)
select * from Movies

drop trigger tr_Movies_InsteadOf_Insert_Rating


--3.	Create trigger that prevent duplicate 'MovieTitle' of Movies table and log details of it in MoviesLog table.

create or alter trigger tr_Movies_InsteadOf_Insert_DuplicateTitle
on Movies
instead of insert
as
begin
	declare @id int,@title varchar(255),@year int,@genre varchar(100),@rating decimal(10,2),@duration int
	select @id=MovieID,@title=MovieTitle,@year=releaseyear,@genre=genre,@rating=rating,@duration=duration from inserted
	if @title not in (select Movietitle from Movies)
		insert into movies values(@id,@title,@year,@genre,@rating,@duration)
end

insert into Movies values(4,'XYZ',2020,'Romance',10,2)
select * from Movies

drop trigger tr_Movies_InsteadOf_Insert_DuplicateTitle



--4.	Create trigger that prevents to insert pre-release movies.

create or alter trigger tr_Movies_InsteadOf_Insert_PreRelease
on Movies
instead of insert
as
begin
	declare @id int,@title varchar(255),@year int,@genre varchar(100),@rating decimal(10,2),@duration int
	select @id=MovieID,@title=MovieTitle,@year=releaseyear,@genre=genre,@rating=rating,@duration=duration from inserted
	if @year<=year(getdate())
		insert into movies values(@id,@title,@year,@genre,@rating,@duration)
end

insert into Movies values(4,'AAA',2026,'Romance',10,2)
insert into Movies values(5,'AAA',2025,'Romance',10,2)
select * from Movies



--5.	Develop a trigger to ensure that the Duration of a movie cannot be updated to a value greater than 120 minutes (2 hours) 
--to prevent unrealistic entries.

create or alter trigger tr_Movies_InsteadOf_Insert_PreRelease
on Movies
instead of update
as
begin
	declare @id int,@duration int
	select @id=MovieID,@duration=duration from inserted
	if @duration<=2
		update Movies set duration=@duration where MovieID=@id
end

update Movies set duration=3 where MovieId=1
select * from Movies
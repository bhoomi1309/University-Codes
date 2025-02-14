--LAB 7


-- Create the Customers table 
CREATE TABLE Customers ( 
Customer_id INT PRIMARY KEY,                 
Customer_Name VARCHAR(250) NOT NULL,         
Email VARCHAR(50) UNIQUE                     
);

-- Create the Orders table 
CREATE TABLE Orders ( 
Order_id INT PRIMARY KEY,                    
Customer_id INT,                             
Order_date DATE NOT NULL,                    
FOREIGN KEY (Customer_id) REFERENCES Customers(Customer_id)  
); 



--PART A


--1. Handle Divide by Zero Error and Print message like: Error occurs that is - Divide by zero error. 

begin try
	declare @n1 int, @n2 int, @n3 int
	set @n1=2
	set @n2=0
	set @n3=@n1/@n2
	print @n3
end try
begin catch
	print 'Division by Zero Not Possible'
end catch


--2. Try to convert string to integer and handle the error using try…catch block. 

begin try
	declare @str varchar(100), @n int
	set @str='ABC'
	set @n=cast(@str as int)
	print @n
end try
begin catch
	print 'Conversion of string to integer not possible'
end catch


--3. Create a procedure that prints the sum of two numbers: take both numbers as integer & handle 
--exception with all error functions if any one enters string value in numbers otherwise print result. 

create or alter procedure pr_add_exception
@s1 varchar(100),
@s2 varchar(100)
as
begin
	begin try
		declare @n1 int, @n2 int, @n3 int
		set @n1=cast(@s1 as int)
		set @n2=cast(@s2 as int)
		set @n3=@n1+@n2
		print @n3
	end try
	begin catch
		print 'Error Message: '+error_message()
		print 'Error Number: '+cast(error_number() as varchar(100))
		print 'Error Severity: '+cast(error_severity() as varchar(100))
		print 'Error State: '+cast(error_state() as varchar(100))
	end catch 
end

exec pr_add_exception abc,5


--4. Handle a Primary Key Violation while inserting data into customers table and print the error details 
--such as the error message, error number, severity, and state. 

insert into Customers values(1,'Anil','anil@gmail.com')

begin try
	insert into Customers values(1,'Sunil','sunil@gmail.com')
end try
begin catch
	print 'Error Message: '+error_message()
	print 'Error Number: '+cast(error_number() as varchar(100))
	print 'Error Severity: '+cast(error_severity() as varchar(100))
	print 'Error State: '+cast(error_state() as varchar(100))
end catch


--5. Throw custom exception using stored procedure which accepts Customer_id as input & that throws 
--Error like no Customer_id is available in database.

create or alter procedure pr_Customers_Id_Error
@CustomerID int
as
begin
	begin try
		if not exists (select 1 from Customers where Customer_id=@CustomerID)
			throw 60000,'No Customer_id available', 10
		else
			print 'Customer_id available'
	end try
	begin catch
		print error_number()
		print error_message()
	end catch
end

exec pr_Customers_Id_Error 2



--PART B


--6. Handle a Foreign Key Violation while inserting data into Orders table and print appropriate error 
--message.

begin try
	insert into Orders values(1,2,'2025-02-14')
end try
begin catch
	print 'Foreign Key doesnt exist'
end catch


--7. Throw custom exception that throws error if the data is invalid. 

begin try
	insert into Orders values(1,1,'2025-14-14')
end try
begin catch
	print 'Invalid Data'
end catch


--8. Create a Procedure to Update Customer’s Email with Error Handling 

insert into Customers values(2,'Anill','anill@gmail.com')


create or alter procedure pr_Customers_Update_Email
@id int, @email varchar(100)
as
begin
	begin try
		if not exists (select 1 from Customers where Email=@email)
			update Customers set Email=@email where Customer_id=@id
		else
			throw 70000,'Email already exists',244
	end try
	begin catch
		print error_message()
		print error_state()
		print error_number()
	end catch
end

exec pr_Customers_Update_Email 2,'anil@gmail.com'



--PART C


--9. Create a procedure which prints the error message that “The Customer_id is already taken. Try another 
--one”.

create or alter procedure pr_Customers_Id_Taken
@CustomerID int, @Name varchar(100),@Email varchar(100)
as
begin
	begin try
		if not exists (select 1 from Customers where Customer_id=@CustomerID)
			insert into Customers values(@CustomerID,@Name,@Email)
		else
			throw 70000,'The Customer_id is already taken. Try another one',240
	end try
	begin catch
		print error_message()
	end catch
end


exec pr_Customers_Id_Taken 1,'Mahesh','mahesh@gmail.com'


--10. Handle Duplicate Email Insertion in Customers Table. 

create or alter procedure pr_Customers_Insert_Duplicate_Email
@id int, @Name varchar(100), @email varchar(100)
as
begin
	begin try
		if not exists (select 1 from Customers where Email=@email)
			insert into Customers values(@id,@Name,@Email)
		else
			throw 70000,'Email already exists',244
	end try
	begin catch
		print error_message()
	end catch
end


exec pr_Customers_Insert_Duplicate_Email 3,'Anil','anil@gmail.com'
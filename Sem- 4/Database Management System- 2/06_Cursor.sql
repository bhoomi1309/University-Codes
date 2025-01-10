--LAB 6


--  Create the Products table 
CREATE TABLE Products ( 
Product_id INT PRIMARY KEY, 
Product_Name VARCHAR(250) NOT NULL, 
Price DECIMAL(10, 2) NOT NULL 
);

--  Insert data into the Products table 
INSERT INTO Products (Product_id, Product_Name, Price) VALUES 
(1, 'Smartphone', 35000), 
(2, 'Laptop', 65000), 
(3, 'Headphones', 5500), 
(4, 'Television', 85000), 
(5, 'Gaming Console', 32000); 

SELECT * FROM Products;


--PART A


--1. Create a cursor Product_Cursor to fetch all the rows from a products table. 

declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_Cursor cursor for
select * from Products

open Product_Cursor

fetch next from Product_Cursor into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		print cast(@P_Id as varchar) +' '+ @P_Name +' '+ cast(@P_Price as varchar)
		fetch next from Product_Cursor into @P_Id,@P_Name,@P_Price
	end

close Product_Cursor

deallocate Product_Cursor


--2. Create a cursor Product_Cursor_Fetch to fetch the records in form of ProductID_ProductName. 
--(Example: 1_Smartphone) 

declare @PId int,@PName varchar(250)

declare Product_Cursor_Fetch cursor for
select Product_id,Product_Name from Products

open Product_Cursor_Fetch

fetch next from Product_Cursor_Fetch into @PId,@PName

while @@fetch_status=0
	begin
		print cast(@PId as varchar) +'_'+ @PName
		fetch next from Product_Cursor_Fetch into @PId,@PName
	end

close Product_Cursor_Fetch

deallocate Product_Cursor_Fetch


--3. Create a Cursor to Find and Display Products Above Price 30,000. 

declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_Cursor_Above_30000 cursor for
select * from Products

open Product_Cursor_Above_30000

fetch next from Product_Cursor_Above_30000 into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		if @P_Price>30000
			print cast(@P_Id as varchar) +' '+ @P_Name +' '+ cast(@P_Price as varchar)
		fetch next from Product_Cursor_Above_30000 into @P_Id,@P_Name,@P_Price
	end

close Product_Cursor_Above_30000

deallocate Product_Cursor_Above_30000


--4. Create a cursor Product_CursorDelete that deletes all the data from the Products table. 

declare @PId int

declare Product_Cursor_Delete cursor for
select Product_id from Products

open Product_Cursor_Delete

fetch next from Product_Cursor_Delete into @PId

while @@fetch_status=0
	begin
		delete from Products where Product_id=@PId
		fetch next from Product_Cursor_Delete into @PId
	end

close Product_Cursor_Delete

deallocate Product_Cursor_Delete


select * from Products



--PART B


--5. Create a cursor Product_CursorUpdate that retrieves all the data from the products table and increases 
--the price by 10%. 

declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_CursorUpdate cursor for
select * from Products

open Product_CursorUpdate

fetch next from Product_CursorUpdate into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		update Products 
		set Price=@P_Price*1.1
		where Product_id=@P_Id
		fetch next from Product_CursorUpdate into @P_Id,@P_Name,@P_Price
	end

close Product_CursorUpdate

deallocate Product_CursorUpdate

select * from Products



--6. Create a Cursor to Rounds the price of each product to the nearest whole number.

declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_Cursor_RoundPrice cursor for
select * from Products

open Product_Cursor_RoundPrice

fetch next from Product_Cursor_RoundPrice into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		update Products 
		set Price=round(@P_Price,2)
		where Product_id=@P_Id
		fetch next from Product_Cursor_RoundPrice into @P_Id,@P_Name,@P_Price
	end

close Product_Cursor_RoundPrice

deallocate Product_Cursor_RoundPrice

select * from Products




--PART C

--7. Create a cursor to insert details of Products into the NewProducts table if the product is “Laptop” 
--(Note: Create NewProducts table first with same fields as Products table) 

CREATE TABLE NewProducts ( 
Product_id INT PRIMARY KEY, 
Product_Name VARCHAR(250) NOT NULL, 
Price DECIMAL(10, 2) NOT NULL 
);

declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_Cursor_NewProducts cursor for
select * from Products

open Product_Cursor_NewProducts

fetch next from Product_Cursor_NewProducts into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		if @P_Name='Laptop'
			insert into NewProducts values (@P_Id,@P_Name,@P_Price)
		fetch next from Product_Cursor_NewProducts into @P_Id,@P_Name,@P_Price
	end

close Product_Cursor_NewProducts

deallocate Product_Cursor_NewProducts

select * from NewProducts



--8. Create a Cursor to Archive High-Price Products in a New Table (ArchivedProducts), Moves products 
--with a price above 50000 to an archive table, removing them from the original Products table.


CREATE TABLE ArchivedProducts ( 
Product_id INT PRIMARY KEY, 
Product_Name VARCHAR(250) NOT NULL, 
Price DECIMAL(10, 2) NOT NULL 
);


declare @P_Id int,@P_Name varchar(250),@P_Price decimal(10,2)

declare Product_Cursor_ArchivedProducts cursor for
select * from Products where Price>50000

open Product_Cursor_ArchivedProducts

fetch next from Product_Cursor_ArchivedProducts into @P_Id,@P_Name,@P_Price

while @@fetch_status=0
	begin
		insert into ArchivedProducts values (@P_Id,@P_Name,@P_Price)
		delete from Products where Product_Id=@P_Id
		fetch next from Product_Cursor_ArchivedProducts into @P_Id,@P_Name,@P_Price
	end

close Product_Cursor_ArchivedProducts

deallocate Product_Cursor_ArchivedProducts

select * from ArchivedProducts
select * from Products
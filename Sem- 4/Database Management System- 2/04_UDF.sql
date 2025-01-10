--LAB 4


--PART A

--1. Write a function to print "hello world".

create or alter function fn_HelloWorld()
returns varchar(50)
as
begin
	return 'Hello World'
end

select dbo.fn_HelloWorld();

--2. Write a function which returns addition of two numbers.

create or alter function fn_AddTwoNum(@n1 int,@n2 int)
returns int
as
begin 
	declare @ans int
	set @ans=@n1+@n2
	return @ans
end

select dbo.fn_AddTwoNum(3,6) as 'Sum';

--3. Write a function to check whether the given number is ODD or EVEN. 

create or alter function fn_IsOddOrEven(@num int)
returns varchar(10)
as 
begin
	if @num%2=0 
		return 'Even'
	return 'Odd'
end

select dbo.fn_IsOddOrEven(5);
select dbo.fn_IsOddOrEven(2);

--4. Write a function which returns a table with details of a person whose first name starts with B.

create or alter function fn_NameWithB()
returns table
as
	return
		select * from Person
		where FirstName like 'B%'

select * from dbo.fn_NameWithB();

--5. Write a function which returns a table with unique first names from the person table.

create or alter function fn_UniqueNames()
returns table
as
	return
		select distinct FirstName from Person;

select * from dbo.fn_UniqueNames();

--6. Write a function to print number from 1 to N. (Using while loop)

create or alter function fn_Num1Ton(@n int)
returns varchar(200)
as 
begin
	declare @var varchar(200), @i int
	set @i=1
	set @var=''
	while @i<=@n
		begin
			set @var=@var+cast(@i as varchar)+' ';
			set @i=@i+1
		end
	return @var
end

select dbo.fn_Num1Ton(10);

--7. Write a function to find the factorial of a given integer.

create or alter function fn_Factorial(@num int)
returns int
as
begin
	declare @i int, @ans int
	set @i=1
	set @ans=1
	while @i<=@num
		begin
			set @ans=@ans*@i
			set @i=@i+1
		end
	return @ans
end

select dbo.fn_Factorial(5)



--PART B

--8. Write a function to compare two integers and return the comparison result. (Using Case statement) 

create or alter function fn_CompareTwoNum(@n1 int,@n2 int)
returns varchar(50)
as
begin
	return 
		case
			when @n1>@n2 then 'First Number is Greater'
			when @n2>@n1 then 'Second Number is Greater'
			else 'Equal'
		end
end

select dbo.fn_CompareTwoNum(2,6)
select dbo.fn_CompareTwoNum(6,6)

--9. Write a function to print the sum of even numbers between 1 to 20.

create or alter function fn_SumEven()
returns int
as
begin
	declare @i int,@sum int
	set @i=1
	set @sum=0
	while @i<=20
		begin
			if(@i%2=0)
				set @sum=@sum+@i
			set @i=@i+1
		end
	return @sum
end

select dbo.fn_SumEven()

--10. Write a function that checks if a given string is a palindrome

create or alter function fn_StringPalindrome(@s varchar(100))
returns varchar(50)
as
begin
	if @s=REVERSE(@s)
		return 'True'
	return 'False'
end

select dbo.fn_StringPalindrome('HelloolleH')
select dbo.fn_StringPalindrome('Hello')



--PART C

--11. Write a function to check whether a given number is prime or not.

create or alter function fn_IsPrime(@n int)
returns varchar(50)
as
begin
	declare @i int
	set @i=2
	while @i<@n
		begin
			if(@n%@i=0)
				return 'NOT PRIME'
			set @i=@i+1
		end
	return 'PRIME'
end

select dbo.fn_IsPrime(7)

--12. Write a function which accepts two parameters start date & end date, and returns a difference in days.

create or alter function fn_DateDifference(@d1 datetime,@d2 datetime)
returns int
as
begin
	return datediff(day,@d1,@d2)
end

select dbo.fn_DateDifference('2020-05-30','2020-06-30')

--13. Write a function which accepts two parameters year & month in integer and returns total days each 
--year. 

create or alter function fn_DaysPerMonth(@month int,@year int)
returns int
as
begin
	declare @fullDate date,@ans int
	set @fullDate=cast(@year as varchar)+'-'+cast(@month as varchar)+'-1'
	set @ans=day(eomonth(@fulldate))
	return @ans
end

select dbo.fn_DaysPerMonth(10,2020)

--14. Write a function which accepts departmentID as a parameter & returns a detail of the persons.

create or alter function fn_DeptId(@DId int)
returns table
as
	return
		select * from Person
		where DepartmentId=@DId

select * from dbo.fn_DeptId(1)

--15. Write a function that returns a table with details of all persons who joined after 1-1-1991.

create or alter function fn_AfterDate()
returns table
as
	return 
		select * from Person
		where JoiningDate>'1991-01-01'

select * from dbo.fn_AfterDate()
--LAB 1

SELECT * FROM Artists
SELECT * FROM Albums
SELECT * FROM Songs

--SQL CONCEPTS


--PART A

--1. Retrieve a unique genre of songs.
SELECT DISTINCT GENRE FROM SONGS;

--2. Find top 2 albums released before 2010.
SELECT TOP 2 ALBUM_TITLE FROM ALBUMS WHERE RELEASE_YEAR<2010;

--3. Insert Data into the Songs Table. (1245, ‘Zaroor’, 2.55, ‘Feel good’, 1005)
INSERT INTO SONGS VALUES(1245,'ZAROOR',2.55,'Feel Good',1005);

--4. Change the Genre of the song ‘Zaroor’ to ‘Happy’
UPDATE SONGS SET GENRE='Happy' WHERE SONG_TITLE='ZAROOR';
SELECT * FROM Songs;

--5. Delete an Artist ‘Ed Sheeran’
DELETE FROM ARTISTS WHERE ARTIST_NAME='ED SHEERAN';
SELECT * FROM Artists;

--6. Add a New Column for Rating in Songs Table. [Ratings decimal(3,2)]
ALTER TABLE SONGS ADD Ratings DECIMAL(3,2);
SELECT * FROM Songs;

--7. Retrieve songs whose title starts with 'S'.
SELECT SONG_TITLE FROM SONGS WHERE SONG_TITLE LIKE 'S%';

--8. Retrieve all songs whose title contains 'Everybody'.
SELECT SONG_TITLE FROM SONGS WHERE SONG_TITLE LIKE '%Everybody%';

--9. Display Artist Name in Uppercase.
SELECT UPPER(ARTIST_NAME) AS NAME FROM ARTISTS;

--10. Find the Square Root of the Duration of a Song ‘Good Luck’
SELECT SQRT(DURATION) AS SQUARE_ROOT FROM SONGS WHERE SONG_TITLE='GOOD LUCK';

--11. Find Current Date.
SELECT GETDATE() AS 'CURRENT_DATE';

--12. Find the number of albums for each artist.
SELECT ARTIST_NAME, COUNT(ALBUM_ID) AS NO_OF_ALBUMS
FROM ARTISTS 
JOIN ALBUMS
ON ARTISTS.ARTIST_ID=ALBUMS.ARTIST_ID
GROUP BY ARTIST_NAME;

--13. Retrieve the Album_id which has more than 5 songs in it.
SELECT ALBUM_TITLE, COUNT(SONG_ID) AS NO_OF_SONGS
FROM ALBUMS 
JOIN SONGS
ON ALBUMS.ALBUM_ID=SONGS.ALBUM_ID
GROUP BY ALBUM_TITLE
HAVING COUNT(SONG_ID)>5;

--14. Retrieve all songs from the album 'Album1'. (using Subquery)
SELECT * FROM SONGS
WHERE ALBUM_ID=(
	SELECT ALBUM_ID FROM ALBUMS
	WHERE ALBUM_TITLE='Album1'
	);

--15. Retrieve all albums name from the artist ‘Aparshakti Khurana’ (using Subquery)
SELECT * FROM ALBUMS
WHERE ARTIST_ID=(
	SELECT ARTIST_ID FROM ARTISTS
	WHERE ARTIST_NAME='APARSHAKTI KHURANA'
	);

--16. Retrieve all the song titles with its album title.
SELECT SONG_TITLE,ALBUM_TITLE
FROM SONGS
JOIN ALBUMS
ON SONGS.ALBUM_ID=ALBUMS.ALBUM_ID;

--17. Find all the songs which are released in 2020.
SELECT SONG_TITLE
FROM SONGS
JOIN ALBUMS
ON SONGS.ALBUM_ID=ALBUMS.ALBUM_ID
WHERE RELEASE_YEAR=2020;

--18. Create a view called ‘Fav_Songs’ from the songs table having songs with song_id 101-105.
CREATE VIEW Fav_Songs
AS 
SELECT * FROM SONGS
WHERE SONG_ID BETWEEN 101 AND 105;
SELECT * FROM Fav_Songs;

--19. Update a song name to ‘Jannat’ of song having song_id 101 in Fav_Songs view.
UPDATE FAV_SONGS
SET SONG_TITLE='Jannat' 
WHERE SONG_ID=101;
SELECT * FROM Fav_Songs;

--20. Find all artists who have released an album in 2020.
SELECT ARTIST_NAME 
FROM ARTISTS
JOIN ALBUMS
ON ARTISTS.ARTIST_ID=ALBUMS.ARTIST_ID
WHERE RELEASE_YEAR=2020;

--21. Retrieve all songs by Shreya Ghoshal and order them by duration. 
SELECT S.* 
FROM SONGS S
JOIN ALBUMS A
ON S.ALBUM_ID=A.ALBUM_ID
JOIN ARTISTS A2
ON A.ARTIST_ID=A2.ARTIST_ID
WHERE A2.ARTIST_NAME='Shreya Ghoshal'
ORDER BY S.DURATION;



--PART B

--22. Retrieve all song titles by artists who have more than one album.
select Song_title,Artist_name
from Songs
join Albums
on Songs.album_id=Albums.album_id
join Artists
on Artists.artist_id=Albums.artist_id
where artist_name in (
	select Artists.artist_name
	from Artists
	join Albums
	on Artists.artist_id=Albums.artist_id
	group by artist_name
	having count(album_title)>1
	);

--23. Retrieve all albums along with the total number of songs.
select Album_title,count(song_id) as Total_Songs
from Albums
join Songs
on Albums.album_id=Songs.album_id
group by Album_title;

--24. Retrieve all songs and release year and sort them by release year.
select Song_title,Release_year
from Albums
join Songs
on Albums.album_id=Songs.album_id
order by Release_year;

--25. Retrieve the total number of songs for each genre, showing genres that have more than 2 songs.
select Genre,count(song_id) as Total_Songs
from Songs
group by Genre;

--26. List all artists who have albums that contain more than 3 songs.
SELECT ARTIST_NAME
FROM ARTISTS
JOIN ALBUMS
ON ARTISTS.ARTIST_ID=ALBUMS.ARTIST_ID
WHERE ALBUM_TITLE IN 
	(SELECT ALBUM_TITLE 
	FROM ALBUMS
	JOIN SONGS
	ON ALBUMS.ALBUM_ID=SONGS.ALBUM_ID
	GROUP BY ALBUMS.ALBUM_TITLE
	HAVING COUNT(SONGS.SONG_ID)>3);



-- PART C

--27. Retrieve albums that have been released in the same year as 'Album4'
Select Album_title
from Albums 
where Album_title<>'Album4'
and Release_year = (
	select Release_year 
	from Albums
	where Album_title='Album4'
	);

--28. Find the longest song in each genre
select distinct Genre,Song_title
from Songs s
where Duration=(select max(Duration) from Songs where Genre=s.Genre);

--29. Retrieve the titles of songs released in albums that contain the word 'Album' in the title.
select Song_title 
from Songs
where Album_id in (
	select Album_id
	from Albums
	where Album_title like '%Album%'
	);

--30. Retrieve the total duration of songs by each artist where total duration exceeds 15 minutes.
select Artist_name,sum(Duration) as Total_Duration
from Artists
join Albums
on Artists.artist_id=Albums.artist_id
join Songs
on Albums.album_id=Songs.album_id
group by Artist_name
having sum(Duration)>15.00;
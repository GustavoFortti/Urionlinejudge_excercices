SELECT a1.name, a2.name
cast(avg(customers_number as Average) as int)
FROM lawyers as a1, lawyers as a2
WHERE max( a1.customers_number ), 
min( a2.customers_number), 


SELECT name, customers_number 
FROM lawyers 
WHERE customers_number = 
(SELECT MAX(customers_number) 
FROM lawyers) 
UNION ALL 
SELECT name, customers_number FROM lawyers 

WHERE customers_number = 
(SELECT MIN(customers_number) 
FROM lawyers) UNION ALL SELECT 'AVARAGE'AS name , 
CAST(AVG(customers_number)AS INTEGER) FROM lawyers



SELECT ProductName, Price 
FROM Products; 
WHERE price = 
SELECT MAX(price)
FROM Products;


SELECT a1,name, a2.name,
FROM lawyers as a1, lawyers as a2
WHERE a1.customers_number = SELECT max(customers_number) FROM lawyers as a1


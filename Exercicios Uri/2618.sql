SELECT p.name, f.name, c.name 
FROM products AS p
INNER JOIN providers AS f
ON f.id = p.id_providers
INNER JOIN categories AS c
ON c.id = p.id_categories
WHERE f.name = 'Sansul SA' 
AND c.name = 'Imported';
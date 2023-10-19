--  lists cities id, name and states name in the database hbtn_0d_usa.

SELECT cities.id, cities.name, states.name
FROM cities
JOIN states ON cities.state_id = states.id
ORDER BY id;

CREATE DATABASE fb_energy
CREATE TABLE fb_eu_energy(
    date DATETIME ,
    consumption INT 
)

CREATE TABLE fb_asia_energy(
    date DATETIME ,
    consumption INT
)

CREATE TABLE fb_na_energy(
    date DATETIME ,
    consumption INT
)


SELECT date, SUM(consumption) AS energy
FROM(SELECT * from fb_eu_energy
UNION ALL
SELECT * from fb_asia_energy
UNION ALL
SELECT * from fb_na_energy) fb_energy
GROUP by date
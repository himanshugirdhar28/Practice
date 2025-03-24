# Write your MySQL query statement below
SELECT 
    n.contest_id, 
    ROUND((COUNT(n.user_id) / n.total_users) * 100, 2) AS percentage
FROM (
    SELECT 
        r.contest_id, 
        r.user_id, 
        (SELECT COUNT(*) FROM Users) AS total_users
    FROM Register r
) n
GROUP BY n.contest_id, n.total_users
ORDER BY percentage DESC, n.contest_id ASC;

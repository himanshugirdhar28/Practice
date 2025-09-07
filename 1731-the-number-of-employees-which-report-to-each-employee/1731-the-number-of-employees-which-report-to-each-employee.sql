-- Write your PostgreSQL query statement below
select g.employee_id, e.name, g.reports_count, g.average_age
from (select reports_to as employee_id, count(employee_id) as reports_count, round(avg(age)) as average_age from Employees group by reports_to) as g join Employees e on e.employee_id = g.employee_id
order by g.employee_id
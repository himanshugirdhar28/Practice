# Write your MySQL query statement below
select p.project_id, Round(AVG(e.experience_years), 2) average_years from Project p join Employee e on e.employee_id=p.employee_id group by project_id
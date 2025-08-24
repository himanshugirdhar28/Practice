-- Write your PostgreSQL query statement below
select s.user_id as user_id, round(sum(case when c.action = 'confirmed' then 1 else 0 end)::numeric/count(*),2) as confirmation_rate 
from Signups as s
left join Confirmations as c on s.user_id = c.user_id
group by s.user_id
-- select s.user_id, c.action
-- from Signups s
-- left join Confirmations c on c.user_id = s.user_id

-- Write your PostgreSQL query statement below
select p.product_id,
case when sum(u.units) is null then 0 else round(sum(p.price*u.units)::numeric/sum(u.units),2) end as average_price
from Prices p
left join UnitsSold u on p.product_id = u.product_id and p.start_date <= u.purchase_date and p.end_date >= u.purchase_date
group by p.product_id


-- select p.product_id, p.price, u.units
-- from Prices p
-- left join UnitsSold u on p.product_id = u.product_id and p.start_date <= u.purchase_date and p.end_date >= u.purchase_date

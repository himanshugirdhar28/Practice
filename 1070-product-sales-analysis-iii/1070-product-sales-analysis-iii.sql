-- Write your PostgreSQL query statement below
select product_id, year as first_year , quantity, price from (
select product_id, (dense_rank() over(partition by product_id order by year asc)) d_r, year, quantity , price from Sales) where d_r = 1
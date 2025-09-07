-- Write your PostgreSQL query statement below
select round((sum(case when n_t.order_date = n_t.customer_pref_delivery_date then 1 else 0 end):: numeric/count(*))*100, 2) as immediate_percentage from ( 
    select *, (dense_rank() over (partition by customer_id order by order_date asc)) as d_r from Delivery
    ) as n_t  where n_t.d_r = 1
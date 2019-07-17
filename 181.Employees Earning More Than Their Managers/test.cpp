# Write your MySQL query statement below
select Name Employee from Employee e1 where Salary > (
    select Salary from Employee e2
    where Id = e1.ManagerId
)

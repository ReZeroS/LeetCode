select b.id from Weather a, Weather b
where to_days(b.RecordDate) - to_days(a.RecordDate) = 1
and b.Temperature > a.Temperature

def library_fine(days_late):
    if days_late<=0:
        return 0
    elif days_late<=7:
        return days_late*2
    else:
        return (7*2)+(days_late-7)*5
print("Fine for 5 days late:", library_fine(5))
print("Fine for 10 days late:", library_fine(10))

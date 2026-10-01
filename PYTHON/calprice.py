def calculate_bill_amount(gems_list, price_list, reqd_gems, reqd_quantity):
  totalbill=0
  for i in reqd_gems:
    if i in gems_list:
      index=gems_list.index(i)
      prices=price_list[index]
      inde=reqd_gems.index(i)
      totalbill=totalbill+ prices*reqd_quantity[inde]
    else:
      return -1
  if totalbill>30000:
    totalbill=totalbill*0.95
  return totalbill

#List of gems available in the store
gems_list=["Emerald","Ivory","Jasper","Ruby","Garnet"]

#Price of gems available in the store. gems_list and price_list have one-to-one correspondence
price_list=[1760,2119,1599,3920,3999]

#List of gems required by the customer
reqd_gems=["Ivory","Emerald","Garnet"]

#Quantity of gems required by the customer. reqd_gems and reqd_quantity have one-to-one correspondence
reqd_quantity=[3,10,12]

bill_amount=calculate_bill_amount(gems_list, price_list, reqd_gems, reqd_quantity)
print(bill_amount)
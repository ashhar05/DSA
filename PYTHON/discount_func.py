def final_price_after_discount(price, discount_in_percentage=3):
    return price- (price*(discount_in_percentage/100))
print("final price= "+ str(final_price_after_discount(1000)))
print("final price= "+ str(final_price_after_discount(1000,10)))

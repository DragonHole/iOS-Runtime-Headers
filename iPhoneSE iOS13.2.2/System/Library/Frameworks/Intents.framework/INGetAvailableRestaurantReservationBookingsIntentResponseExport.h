/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INTermsAndConditions, NSArray;


@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText; 
@property (nonatomic,copy) NSString * localizedBookingAdvisementText; 
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions; 
@property (nonatomic,readonly) NSArray * availableBookings; 
@required
-(id)init;
-(long long)code;
-(NSString *)localizedRestaurantDescriptionText;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(NSString *)localizedBookingAdvisementText;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(INTermsAndConditions *)termsAndConditions;
-(void)setTermsAndConditions:(id)arg1;
-(NSArray *)availableBookings;

@end


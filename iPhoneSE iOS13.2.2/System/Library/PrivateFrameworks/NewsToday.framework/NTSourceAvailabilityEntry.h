/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTSourceAvailabilityEntry <NSObject>
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock; 
@required
-(BOOL)isAvailable;
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(/*^block*/id)arg1;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTSourceAvailabilityEntry.h>

@class NSString;

@interface NTNoContentSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {

	/*^block*/id availabilityChangedNotificationBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class todayResultsFetchDescriptorClass; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy) id availabilityChangedNotificationBlock; 
-(Class)todayResultsFetchDescriptorClass;
-(id)availabilityChangedNotificationBlock;
-(void)setAvailabilityChangedNotificationBlock:(id)arg1 ;
-(BOOL)isAvailable;
-(id)init;
@end


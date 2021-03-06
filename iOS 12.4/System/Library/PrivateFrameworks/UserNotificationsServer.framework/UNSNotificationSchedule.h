/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface UNSNotificationSchedule : NSObject {

	NSDate* _previousTriggerDate;

}

@property (nonatomic,retain) NSDate * previousTriggerDate;              //@synthesize previousTriggerDate=_previousTriggerDate - In the implementation block
-(void)setPreviousTriggerDate:(NSDate *)arg1 ;
-(NSDate *)previousTriggerDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_dateFormatter;
@end


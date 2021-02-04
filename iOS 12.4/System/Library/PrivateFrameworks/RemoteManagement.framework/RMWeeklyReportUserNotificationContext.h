/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUserNotificationContext.h>

@class NSData, NSNumber, NSString;

@interface RMWeeklyReportUserNotificationContext : RMUserNotificationContext {

	NSData* _weeklyReportData;
	double _deltaScreenTimeUsage;
	NSNumber* _totalUsage;
	NSString* _notificationBodyKey;

}

@property (nonatomic,retain) NSString * notificationBodyKey;              //@synthesize notificationBodyKey=_notificationBodyKey - In the implementation block
@property (assign,nonatomic) double deltaScreenTimeUsage;                 //@synthesize deltaScreenTimeUsage=_deltaScreenTimeUsage - In the implementation block
@property (nonatomic,copy) NSNumber * totalUsage;                         //@synthesize totalUsage=_totalUsage - In the implementation block
@property (nonatomic,retain) NSData * weeklyReportData;                   //@synthesize weeklyReportData=_weeklyReportData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTotalUsage:(NSNumber *)arg1 ;
-(NSNumber *)totalUsage;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setDeltaScreenTimeUsage:(double)arg1 ;
-(NSString *)notificationBodyKey;
-(NSData *)weeklyReportData;
-(void)setDeltaScreenTimeUsage:(double)arg1 totalUsage:(id)arg2 ;
-(void)setWeeklyReportData:(NSData *)arg1 ;
-(double)deltaScreenTimeUsage;
-(void)setNotificationBodyKey:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

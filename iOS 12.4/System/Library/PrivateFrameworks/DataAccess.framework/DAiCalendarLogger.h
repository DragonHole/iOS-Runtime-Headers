/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICSLoggingDelegate.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
+(id)sharedLogger;
-(void)logICSMessage:(id)arg1 atLevel:(long long)arg2 ;
-(void)registerWithiCalendar;
@end


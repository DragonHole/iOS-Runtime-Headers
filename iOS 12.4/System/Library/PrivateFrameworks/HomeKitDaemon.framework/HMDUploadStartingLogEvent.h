/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent {

	NSString* _saveReason;

}

@property (nonatomic,readonly) NSString * saveReason;              //@synthesize saveReason=_saveReason - In the implementation block
+(id)uploadReason:(id)arg1 ;
+(id)uuid;
-(id)initUploadReason:(id)arg1 ;
-(NSString *)saveReason;
@end


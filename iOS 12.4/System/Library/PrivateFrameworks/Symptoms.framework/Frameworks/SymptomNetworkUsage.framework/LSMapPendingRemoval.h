/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSUUID;

@interface LSMapPendingRemoval : NSObject {

	NSDate* _timestamp;
	NSString* _bundleName;
	NSUUID* _uuid;

}

@property (retain) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * bundleName;              //@synthesize bundleName=_bundleName - In the implementation block
@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(id)init;
-(id)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
@end


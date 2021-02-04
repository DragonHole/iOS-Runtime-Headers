/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AppStateTracker : NSObject {

	int _pid;
	NSString* _displayName;
	NSString* _bundleName;
	NSString* _uuid;

}

@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * bundleName;               //@synthesize bundleName=_bundleName - In the implementation block
@property (retain) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (assign) int pid;                             //@synthesize pid=_pid - In the implementation block
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(void)setPid:(int)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(int)pid;
-(id)description;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)uuid;
-(NSString *)displayName;
@end

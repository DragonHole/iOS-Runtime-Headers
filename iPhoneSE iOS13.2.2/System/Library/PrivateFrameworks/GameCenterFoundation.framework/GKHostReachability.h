/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKReachability.h>

@class NSString, NSError;

@interface GKHostReachability : GKReachability {

	NSString* _hostName;
	NSError* _error;

}

@property (nonatomic,retain) NSString * hostName;              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSError * error;                  //@synthesize error=_error - In the implementation block
+(id)_gkReachabilityWithHostName:(id)arg1 ;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
@end


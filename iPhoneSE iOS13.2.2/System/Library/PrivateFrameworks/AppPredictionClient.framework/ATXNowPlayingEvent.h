/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ATXNowPlayingEvent : NSObject {

	NSString* _bundleId;
	long long _nowPlayingState;

}

@property (nonatomic,readonly) NSString * bundleId;                    //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long nowPlayingState;              //@synthesize nowPlayingState=_nowPlayingState - In the implementation block
-(NSString *)bundleId;
-(BOOL)isTVExperienceAppNowPlaying;
-(id)initWithContextInfo:(id)arg1 ;
-(long long)nowPlayingState;
@end

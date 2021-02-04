/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PMMMusicContainer;

@interface PMMMusicStateProcessor : NSObject {

	BOOL _inCar;
	NSObject*<OS_dispatch_queue> _queue;
	PMMMusicContainer* _lastPlayed;
	PMMMusicContainer* _lastPlayedInCar;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL inCar;                                       //@synthesize inCar=_inCar - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayed;                   //@synthesize lastPlayed=_lastPlayed - In the implementation block
@property (nonatomic,retain) PMMMusicContainer * lastPlayedInCar;              //@synthesize lastPlayedInCar=_lastPlayedInCar - In the implementation block
+(id)shared;
-(void)setInCar:(BOOL)arg1 ;
-(BOOL)inCar;
-(void)_handlePause;
-(void)_handlePlay;
-(void)_persist;
-(void)_initStarkConnect;
-(void)_initStarkDisconnect;
-(void)_initNowPlayingPause;
-(void)_initNowPlayingPlay;
-(void)lastPlayedWithHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedInCarWithHandler:(/*^block*/id)arg1 ;
-(PMMMusicContainer *)lastPlayed;
-(void)setLastPlayed:(PMMMusicContainer *)arg1 ;
-(PMMMusicContainer *)lastPlayedInCar;
-(void)setLastPlayedInCar:(PMMMusicContainer *)arg1 ;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

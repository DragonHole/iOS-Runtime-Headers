/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSNumber;

@interface RPHIDTouchSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSNumber* _touchSessionID;
	unsigned _flags;
	id<RPMessageable> _messenger;
	CGSize _screenSize;

}

@property (assign,nonatomic) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (assign,nonatomic) CGSize screenSize;                        //@synthesize screenSize=_screenSize - In the implementation block
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(id<RPMessageable>)messenger;
-(CGSize)screenSize;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)sendTouchEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)setScreenSize:(CGSize)arg1 ;
@end


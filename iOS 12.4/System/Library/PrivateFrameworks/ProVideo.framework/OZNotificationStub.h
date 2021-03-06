/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSTimer;

@interface OZNotificationStub : NSObject {

	NSTimer* _pTimer;
	OZDocument* _pDocument;

}
-(void)createTimer;
-(void)releaseTimer;
-(id)initWithOZDocument:(OZDocument*)arg1 useTimer:(BOOL)arg2 ;
-(void)processNotifications:(id)arg1 ;
-(void)dealloc;
-(void)fire;
@end


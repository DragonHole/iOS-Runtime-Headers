/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTEventCoalescer.h>

@interface AVTPassthroughEventCoalescer : NSObject <AVTEventCoalescer> {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)eventDidOccur;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end


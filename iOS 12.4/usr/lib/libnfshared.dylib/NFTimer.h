/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;

}
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startTimer:(double)arg1 ;
-(void)stopTimer;
-(void)dealloc;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface _MXExtensionRequestReceipt : NSObject {

	NSTimer* _timer;
	/*^block*/id _completion;

}
-(void)dealloc;
-(void)cancel;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelWithTimeInterval:(double)arg1 ;
@end


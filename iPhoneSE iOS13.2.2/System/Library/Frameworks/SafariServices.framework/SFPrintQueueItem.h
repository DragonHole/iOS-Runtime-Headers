/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _WKFrameHandle;

@interface SFPrintQueueItem : NSObject {

	BOOL _completed;
	/*^block*/id _completionHandler;
	BOOL _initiatedByWebContent;
	_WKFrameHandle* _frameHandle;

}

@property (nonatomic,readonly) _WKFrameHandle * frameHandle;              //@synthesize frameHandle=_frameHandle - In the implementation block
@property (nonatomic,readonly) BOOL initiatedByWebContent;                //@synthesize initiatedByWebContent=_initiatedByWebContent - In the implementation block
-(void)dealloc;
-(void)completeWithResult:(long long)arg1 ;
-(_WKFrameHandle *)frameHandle;
-(id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)initiatedByWebContent;
@end

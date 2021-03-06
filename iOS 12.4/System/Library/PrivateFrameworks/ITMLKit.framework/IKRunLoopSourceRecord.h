/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKRunLoopSourceRecord : NSObject {

	/*^block*/id _evaluateBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id evaluateBlock;                //@synthesize evaluateBlock=_evaluateBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithEvaluateBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)evaluateBlock;
-(void)setEvaluateBlock:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
@end


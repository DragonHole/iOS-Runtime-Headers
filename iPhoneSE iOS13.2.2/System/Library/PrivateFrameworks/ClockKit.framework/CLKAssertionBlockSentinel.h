/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLKAssertionBlockSentinel : NSObject {

	BOOL _called;
	BOOL _fatal;
	NSString* _message;
	/*^block*/id _fallbackBlock;

}

@property (nonatomic,copy) NSString * message;                             //@synthesize message=_message - In the implementation block
@property (getter=isCalled) BOOL called;                                   //@synthesize called=_called - In the implementation block
@property (assign,getter=shouldBeFatal,nonatomic) BOOL fatal;              //@synthesize fatal=_fatal - In the implementation block
@property (nonatomic,copy) id fallbackBlock;                               //@synthesize fallbackBlock=_fallbackBlock - In the implementation block
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCalled:(BOOL)arg1 ;
-(void)setFatal:(BOOL)arg1 ;
-(BOOL)isCalled;
-(BOOL)shouldBeFatal;
-(id)fallbackBlock;
-(void)markCalled;
-(void)setFallbackBlock:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMessageBodyParserObject : NSObject {

	double _timeoutTime;
	BOOL _shouldAbort;
	BOOL _didTimeout;
	BOOL _copyBlocks;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)abortParsing;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
-(void)copyBlocks;
-(BOOL)shouldProceedParsing;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
-(BOOL)areBlocksCopied;
@end


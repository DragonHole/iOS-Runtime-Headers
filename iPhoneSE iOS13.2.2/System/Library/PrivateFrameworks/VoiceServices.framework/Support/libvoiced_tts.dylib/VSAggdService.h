/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSAggdService : NSObject {

	NSString* _loggingPrefix;

}

@property (nonatomic,retain) NSString * loggingPrefix;              //@synthesize loggingPrefix=_loggingPrefix - In the implementation block
+(id)defaultService;
-(NSString *)loggingPrefix;
-(void)setLoggingPrefix:(NSString *)arg1 ;
-(void)tallyTask:(id)arg1 ;
-(void)tallySynthesisCore:(id)arg1 ;
-(id)initWithLoggingPrefix:(id)arg1 ;
-(void)recordCategory:(id)arg1 value:(id)arg2 ;
@end


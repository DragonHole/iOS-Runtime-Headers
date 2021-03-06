/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject;

@interface CNNameStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;                      //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)tokenizeNameString:(id)arg1 usingLocale:(id)arg2 inferredNameOrder:(long long*)arg3 ;
+(void)setInferredNameOrder:(long long*)arg1 toTokenizerNameOrder:(int)arg2 ;
+(id)tokenizeNameString:(id)arg1 ;
-(id)tokenizeNameString:(id)arg1 inferredNameOrder:(long long*)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(void)dealloc;
-(CFStringTokenizerRef)tokenizer;
@end


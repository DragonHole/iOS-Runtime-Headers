/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProofReader/PRLexiconCursor.h>

@class NSString;

@interface PRLexiconStemSuffixCursor : PRLexiconCursor {

	NSString* _stem;
	NSString* _abbreviation;
	unsigned _stemTokenID;
	double _stemProbability;
	double _abbreviationProbability;

}
-(id)initWithLexicon:(id)arg1 stem:(id)arg2 tokenID:(unsigned)arg3 abbreviation:(id)arg4 stemProbability:(double)arg5 ;
-(void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end


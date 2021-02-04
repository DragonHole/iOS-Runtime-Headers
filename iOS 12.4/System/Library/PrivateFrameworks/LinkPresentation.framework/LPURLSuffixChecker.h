/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LinkPresentation/LinkPresentation-Structs.h>
@class NSMutableArray;

@interface LPURLSuffixChecker : NSObject {

	SCD_Struct_LP4* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(id)initWithSuffixes:(id)arg1 ;
-(BOOL)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_LP6*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 remainingPrefix:(id*)arg2 ;
-(void)dealloc;
-(BOOL)hasSuffix:(id)arg1 ;
@end

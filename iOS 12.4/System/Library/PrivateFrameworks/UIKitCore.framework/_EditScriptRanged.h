/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_EditScript.h>

@class _EditScriptRangedAtom, NSString;

@interface _EditScriptRanged : _EditScript {

	long long _options;
	_EditScriptRangedAtom* _currentScriptAtom;

}

@property (nonatomic,readonly) NSString * stringA; 
@property (nonatomic,readonly) NSString * stringB; 
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(BOOL)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6 ;
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 ;
-(void)dealloc;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)finalizeCurrentScriptAtom;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(BOOL)arg6 options:(long long)arg7 ;
-(void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long*)arg1 andReverseIndexOfLastDifference:(long long*)arg2 shouldShortenFirstDifference:(BOOL)arg3 ;
-(void)computeSmallestSingleEdit;
-(NSString *)stringA;
-(NSString *)stringB;
-(id)applyToString:(id)arg1 ;
@end

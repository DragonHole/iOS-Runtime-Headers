/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EditScript/ESEditScript.h>

@class ESAtomIndexed;

@interface ESEditScriptIndexed : ESEditScript {

	ESAtomIndexed* _currentScriptAtom;

}
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(long long)arg4 ;
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 ;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)finalizeCurrentScriptAtom;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(BOOL)arg5 ;
-(id)applyToArray:(id)arg1 ;
@end


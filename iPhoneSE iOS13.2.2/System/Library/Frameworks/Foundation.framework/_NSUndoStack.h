/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)topUndoObject;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)nestingLevel;
-(void)markBegin;
-(BOOL)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(unsigned long long)max;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(BOOL)arg1 ;
-(BOOL)popAndInvoke;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)push:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
@end


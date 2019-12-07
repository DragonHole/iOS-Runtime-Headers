/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class NSMutableSet, NSSet;

@interface RBSStateCaptureSetSegment : NSObject {

	id<BSInvalidatable> _invalidatable;
	NSMutableSet* _items;

}

@property (nonatomic,readonly) NSSet * items; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeItem:(id)arg1 ;
-(NSSet *)items;
-(BOOL)containsItem:(id)arg1 ;
-(id)_stateCapture;
-(void)addItem:(id)arg1 withLength:(unsigned long long)arg2 ;
@end

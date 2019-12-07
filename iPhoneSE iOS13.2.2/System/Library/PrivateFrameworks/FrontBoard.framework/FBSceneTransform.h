/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSHashTable;

@interface FBSceneTransform : NSObject {

	CGAffineTransform _transform;
	NSHashTable* _targets;
	BOOL _appliesToSystemGestureView;

}

@property (assign,nonatomic) CGAffineTransform transform;                  //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL appliesToSystemGestureView;              //@synthesize appliesToSystemGestureView=_appliesToSystemGestureView - In the implementation block
+(CGAffineTransform)concatenateTransforms:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(void)_notifyTargetsTransformDidUpdate;
-(void)setAppliesToSystemGestureView:(BOOL)arg1 ;
-(void)addTransformTarget:(id)arg1 ;
-(void)removeTransformTarget:(id)arg1 ;
-(BOOL)appliesToSystemGestureView;
@end
